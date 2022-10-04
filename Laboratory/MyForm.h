#pragma once

namespace Laboratory {

	#include <math.h> // Объявляем математическую библиотеку
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;



	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 342);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 398);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(33, 476);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(144, 22);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(33, 551);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(144, 22);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(183, 476);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(144, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(183, 551);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(144, 22);
			this->textBox7->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 323);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Значение x:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 379);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Значение y:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(180, 457);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Явное усечение k:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(180, 532);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Неявное усечение m:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 441);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 32);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Округление в\r\nбольшую сторону n:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 516);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 32);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Округление в\r\nменьшую сторону i:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 36);
			this->button1->TabIndex = 11;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(224, 323);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 32);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Вывести\r\nответ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(341, 369);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(286, 22);
			this->textBox3->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(338, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Результат z:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(333, 476);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(144, 22);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(333, 551);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(144, 22);
			this->textBox9->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(330, 441);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 32);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Префиксное\r\nвыражение ++k:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(330, 516);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(112, 32);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Постфиксное\r\nвыражение m++:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(480, 516);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(114, 32);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Значение после\r\nприращения m:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(480, 441);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 32);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Значение после\r\nприращения k:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(483, 551);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(144, 22);
			this->textBox11->TabIndex = 10;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(483, 476);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(144, 22);
			this->textBox10->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(33, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(594, 249);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(33, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 602);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Arithmetic expression";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		// Объявление переменных
		int k, m, n, i;
		
		// Ввод данных и вычисление значения z
		double x = LaboratoryDLL::Class1::Vvod(textBox1);
		double y = LaboratoryDLL::Class1::Vvod(textBox2);
		double z = LaboratoryDLL::Class1::Function_Arif(x, y);

		// Преобразование значения z
		k = (int) z; // Явное преобразование в целый тип с усечением
		m = z; // Неявное преобразование в целый тип с усечением
		n = ceil(z); // Округление в большую сторону
		i = floor(z); // Округление в меньшую сторону

		// Вывод данных
		LaboratoryDLL::Class1::Vivod(z, textBox3);
		LaboratoryDLL::Class1::Vivod(n, textBox4);
		LaboratoryDLL::Class1::Vivod(i, textBox5);
		LaboratoryDLL::Class1::Vivod(k, textBox6);
		LaboratoryDLL::Class1::Vivod(m, textBox7);
		LaboratoryDLL::Class1::Vivod(++k, textBox8); // Вывод префиксного инкремента k
		LaboratoryDLL::Class1::Vivod(m++, textBox9); // Вывод постфиксного инкремента m
		LaboratoryDLL::Class1::Vivod(k, textBox10); // Вывод значения k после приращения
		LaboratoryDLL::Class1::Vivod(m, textBox11); // Вывод значения m после приращения

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
				button1->Focus();

		}
	}

};
}
