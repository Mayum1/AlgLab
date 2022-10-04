#pragma once

namespace Laboratory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab2
	/// </summary>
	public ref class Lab2 : public System::Windows::Forms::Form
	{
	public:
		Lab2(void)
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
		~Lab2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox11;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox12;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab2::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(36, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Lab2::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(634, 120);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(545, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 32);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Вывести\r\nответ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(541, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 36);
			this->button1->TabIndex = 38;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab2::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 238);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 16);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Значение y1:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 16);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Значение x1:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(36, 257);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 22);
			this->textBox2->TabIndex = 28;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab2::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 201);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 22);
			this->textBox1->TabIndex = 27;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab2::textBox1_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(182, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 56;
			this->label4->Text = L"Значение y2:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(182, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 16);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Значение x2:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(185, 257);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(120, 22);
			this->textBox4->TabIndex = 54;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab2::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(185, 201);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 22);
			this->textBox3->TabIndex = 53;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab2::textBox3_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(330, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 16);
			this->label6->TabIndex = 60;
			this->label6->Text = L"Значение y3:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(330, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 16);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Значение x3:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(333, 257);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(120, 22);
			this->textBox6->TabIndex = 58;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab2::textBox6_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(333, 201);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(120, 22);
			this->textBox5->TabIndex = 57;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab2::textBox5_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(35, 288);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(206, 16);
			this->label10->TabIndex = 62;
			this->label10->Text = L"Косинус между 1 и 2 вектором:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(36, 307);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(205, 22);
			this->textBox7->TabIndex = 61;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(255, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(206, 16);
			this->label8->TabIndex = 64;
			this->label8->Text = L"Косинус между 1 и 3 вектором:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(256, 307);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(197, 22);
			this->textBox9->TabIndex = 63;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(464, 288);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(206, 16);
			this->label9->TabIndex = 66;
			this->label9->Text = L"Косинус между 2 и 3 вектором:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(465, 307);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(205, 22);
			this->textBox11->TabIndex = 65;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(464, 339);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(183, 16);
			this->label11->TabIndex = 72;
			this->label11->Text = L"Угол между 2 и 3 вектором:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(465, 358);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(205, 22);
			this->textBox12->TabIndex = 71;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(255, 339);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(183, 16);
			this->label12->TabIndex = 70;
			this->label12->Text = L"Угол между 1 и 3 вектором:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(256, 358);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(197, 22);
			this->textBox10->TabIndex = 69;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(35, 339);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(183, 16);
			this->label13->TabIndex = 68;
			this->label13->Text = L"Угол между 1 и 2 вектором:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(36, 358);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(205, 22);
			this->textBox8->TabIndex = 67;
			// 
			// Lab2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 398);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Lab2";
			this->Text = L"Lab2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		// Объявление переменных
		double x1, y1, x2, y2, x3, y3, CosA12, A12, CosA13, A13, CosA23, A23;

		// Ввод данных
		x1 = LaboratoryDLL::Class1::Vvod(textBox1);
		y1 = LaboratoryDLL::Class1::Vvod(textBox2);
		x2 = LaboratoryDLL::Class1::Vvod(textBox3);
		y2 = LaboratoryDLL::Class1::Vvod(textBox4);
		x3 = LaboratoryDLL::Class1::Vvod(textBox5);
		y3 = LaboratoryDLL::Class1::Vvod(textBox6);

		// Вычисления значений косинусов и углов
		LaboratoryDLL::Class1::Function_Lab2(x1, y1, x2, y2, CosA12, A12); // Вычисление косинуса и угла между 1 и 2 векторами
		LaboratoryDLL::Class1::Function_Lab2(x1, y1, x3, y3, CosA13, A13); // Вычисление косинуса и угла между 1 и 3 векторами
		LaboratoryDLL::Class1::Function_Lab2(x2, y2, x3, y3, CosA23, A23); // Вычисление косинуса и угла между 2 и 3 векторами

		// Вывод данных
		LaboratoryDLL::Class1::Vivod(CosA12, textBox7); // Вывод косинуса угла между 1 и 2 векторами
		LaboratoryDLL::Class1::Vivod(A12, textBox8); // Вывод значения угла между 1 и 2 векторами
		LaboratoryDLL::Class1::Vivod(CosA13, textBox9); // Вывод косинуса угла между 1 и 3 векторами
		LaboratoryDLL::Class1::Vivod(A13, textBox10); // Вывод значения угла между 1 и 3 векторами
		LaboratoryDLL::Class1::Vivod(CosA23, textBox11); // Вывод косинуса угла между 2 и 3 векторами
		LaboratoryDLL::Class1::Vivod(A23, textBox12); // Вывод значения угла между 2 и 3 векторами

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}

	// Проверка правильности заполнения полей
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
				textBox4->Focus();
		}
	}

	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			if (!(e->KeyChar.ToString() == "," && textBox4->Text->IndexOf(",") == -1) && !(e->KeyChar.ToString() == "-" && textBox4->Text == ""))
				e->Handled = true; // Осуществляем проверку правильности
			if (e->KeyChar.Equals((char)32)) // Переводим фокус
				textBox5->Focus();
		}
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			if (!(e->KeyChar.ToString() == "," && textBox5->Text->IndexOf(",") == -1) && !(e->KeyChar.ToString() == "-" && textBox5->Text == ""))
				e->Handled = true; // Осуществляем проверку правильности
			if (e->KeyChar.Equals((char)32)) // Переводим фокус
				textBox6->Focus();
		}
	}
	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			if (!(e->KeyChar.ToString() == "," && textBox6->Text->IndexOf(",") == -1) && !(e->KeyChar.ToString() == "-" && textBox6->Text == ""))
				e->Handled = true; // Осуществляем проверку правильности
			if (e->KeyChar.Equals((char)32)) // Переводим фокус
				button1->Focus();
		}
	}
};
}
