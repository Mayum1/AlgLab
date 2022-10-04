#pragma once

namespace Laboratory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Pr
	/// </summary>
	public ref class Pr : public System::Windows::Forms::Form
	{
	public:
		Pr(void)
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
		~Pr()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pr::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 14);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 26);
			this->label1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(552, 193);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 34);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(248, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(270, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Размер исходного массива";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(248, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 26);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Диапазон случайных чисел";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(552, 262);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 34);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(676, 262);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 34);
			this->textBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(589, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"a";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(715, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 26);
			this->label5->TabIndex = 7;
			this->label5->Text = L"b";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(845, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 103);
			this->button1->TabIndex = 8;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pr::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(852, 500);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 34);
			this->textBox4->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(783, 460);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(335, 26);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Минимальное трехзначное число";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 26;
			this->listBox1->Location = System::Drawing::Point(24, 384);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(271, 342);
			this->listBox1->TabIndex = 11;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 26;
			this->listBox2->Location = System::Drawing::Point(323, 384);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(279, 342);
			this->listBox2->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(871, 643);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 71);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Pr::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(60, 355);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 26);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Исходный массив";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(349, 355);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(208, 26);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Полученный массив";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(1096, 130);
			this->label9->TabIndex = 16;
			this->label9->Text = resources->GetString(L"label9.Text");
			// 
			// Pr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1177, 745);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"Pr";
			this->Text = L"Практическая";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		const int N = 100;
		int n1, n2, a, b, min;
		int mas[N], newmas[N];
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		if (!PrDLL::Class1::GetInt(N, textBox1, "Введите число элементов массива 1<=n<=100", n1)) return;
		if (!PrDLL::Class1::GetInt(10000, textBox3, "Введите b-конеч. знач. отрезка 1<=b<=10000.", b)) return;
		if (!PrDLL::Class1::GetInt(b, textBox2, "Введите a-нач. знач. отрезка 1<=a<=b.", a)) return;
		PrDLL::Class1::input(mas, n1, a, b);
		PrDLL::Class1::output(mas, n1, listBox1);
		min = PrDLL::Class1::min3(mas, n1);
		if (min == 1000)
			MessageBox::Show("Трехзначных чисел нет.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);
		else {
			PrDLL::Class1::task(mas, n1, newmas, n2);
			PrDLL::Class1::output(newmas, n2, listBox2);
			LaboratoryDLL::Class1::Vivod(min, textBox4);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	};
}
