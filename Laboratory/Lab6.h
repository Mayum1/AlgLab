#pragma once

namespace Laboratory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

	/// <summary>
	/// Сводка для Lab6
	/// </summary>
	public ref class Lab6 : public System::Windows::Forms::Form
	{
	public:
		Lab6(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lab6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ button1;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab6::typeid));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(44, 420);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(711, 100);
			this->dataGridView2->TabIndex = 65;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(44, 248);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(711, 100);
			this->dataGridView1->TabIndex = 64;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(39, 391);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(252, 26);
			this->label8->TabIndex = 63;
			this->label8->Text = L"Результирующий массив";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 26);
			this->label7->TabIndex = 62;
			this->label7->Text = L"Исходный массив";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 662);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 71);
			this->button2->TabIndex = 61;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Lab6::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(808, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 72);
			this->button1->TabIndex = 58;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab6::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 22);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1096, 182);
			this->label1->TabIndex = 50;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(849, 475);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(105, 34);
			this->textBox1->TabIndex = 66;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(844, 420);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 52);
			this->label9->TabIndex = 67;
			this->label9->Text = L"Число для\r\nвставки";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(870, 516);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 40);
			this->button3->TabIndex = 68;
			this->button3->Text = L"Вставить число";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Lab6::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(975, 266);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 71);
			this->button4->TabIndex = 69;
			this->button4->Text = L"Записать в файл";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Lab6::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(970, 420);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 52);
			this->label10->TabIndex = 71;
			this->label10->Text = L"После элемента\r\nпод №:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1004, 475);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 34);
			this->textBox2->TabIndex = 70;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(870, 576);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(224, 40);
			this->button5->TabIndex = 72;
			this->button5->Text = L"Отсортировать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Lab6::button5_Click);
			// 
			// Lab6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1177, 745);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Lab6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lab6";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int min, j = 0;
		String^ g = Interaction::InputBox("Введите количество элементов в массиве", "Ввод", "Ввод", -1, -1);
		int n = Convert::ToInt16(g);
		double* mas = new double[n];
		double* rezmas = new double[n];
		LabDLL6::Class1::enter_mas(mas, n);
		LabDLL6::Class1::output_mas(mas, n, dataGridView1);
		min = LabDLL6::Class1::min3(mas, n);
		if (min == 1000)
			MessageBox::Show("Таких чисел нет", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			MessageBox::Show("Минимальное трехзначное число: " + min, "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			LabDLL6::Class1::set_mas(mas, rezmas, n, min, j);
			LabDLL6::Class1::output_mas(rezmas, j, dataGridView2);
		}
		delete[] mas;
		delete[] rezmas;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = dataGridView2->Rows[0]->Cells->Count;
		double* mas = new double[n];
		LabDLL6::Class1::input_mas(mas, n, dataGridView2);
		int m = LaboratoryDLL::Class1::Vvod(textBox1);
		int k = LaboratoryDLL::Class1::Vvod(textBox2);
		LabDLL6::Class1::Function_Lab6(n, k, mas, m);
		LabDLL6::Class1::output_mas(mas, n, dataGridView2);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = dataGridView2->Rows[0]->Cells->Count;
		double* mas = new double[n];
		LabDLL6::Class1::input_mas(mas, n, dataGridView2);
		LabDLL6::Class1::sort(n, mas);
		LabDLL6::Class1::output_mas(mas, n, dataGridView2);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		LabDLL6::Class1::txtout(dataGridView2);
	}
};
}
