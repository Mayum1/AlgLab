#pragma once

namespace Laboratory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab4
	/// </summary>
	public ref class Lab4 : public System::Windows::Forms::Form
	{
	public:
		Lab4(void)
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
		~Lab4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ListBox^ listBox1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab4::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(900, 187);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 311);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 34);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab4::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Значение a:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 357);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Значение b:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 386);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(311, 34);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab4::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 432);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Значение h:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 461);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(311, 34);
			this->textBox3->TabIndex = 6;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab4::textBox3_KeyPress);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 501);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 50);
			this->button2->TabIndex = 8;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Lab4::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 585);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(308, 52);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Произведение положительных\r\nзначений функции:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 640);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(311, 34);
			this->textBox4->TabIndex = 9;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 26;
			this->listBox1->Location = System::Drawing::Point(407, 282);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(505, 394);
			this->listBox1->TabIndex = 11;
			// 
			// Lab4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 699);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Lab4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lab4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();

		// Объявление переменных
		double a, b, h, pPos;
		// Ввод данных
		a = LaboratoryDLL::Class1::Vvod(textBox1);
		b = LaboratoryDLL::Class1::Vvod(textBox2);
		h = LaboratoryDLL::Class1::Vvod(textBox3);

		LaboratoryDLL::Class1::RegCikl(listBox1, a, b, h, pPos);
		
		// Вывод значения z
		LaboratoryDLL::Class1::Vivod(pPos, textBox4);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			if (!(e->KeyChar.ToString() == "," && textBox1->Text->IndexOf(",") == -1) && !(e->KeyChar.ToString() == "-" && textBox1->Text == ""))
				e->Handled = true; // Осуществляем проверку правильности
			if (e->KeyChar.Equals((char)32)) // Переводим фокус
				textBox2->Focus();
		}
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			if (!(e->KeyChar.ToString() == "," && textBox2->Text->IndexOf(",") == -1) && !(e->KeyChar.ToString() == "-" && textBox2->Text == ""))
				e->Handled = true; // Осуществляем проверку правильности
			if (e->KeyChar.Equals((char)32)) // Переводим фокус
				textBox3->Focus();
		}
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			if (!(e->KeyChar.ToString() == "," && textBox3->Text->IndexOf(",") == -1) && !(e->KeyChar.ToString() == "-" && textBox3->Text == ""))
				e->Handled = true; // Осуществляем проверку правильности
			if (e->KeyChar.Equals((char)32)) // Переводим фокус
				button2->Focus();
		}
	}
};
}
