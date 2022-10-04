#pragma once

namespace Laboratory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Lab7
	/// </summary>
	public ref class Lab7 : public System::Windows::Forms::Form
	{
	public:
		Lab7(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Lab7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(829, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����������� ������������ ��������� ������� L(m,m). ������� � ������ ������\r\n�����"
				L"����� ������� � ��������� ��� ������� � ��������� ������� ���������.";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 26;
			this->listBox1->Location = System::Drawing::Point(12, 355);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(372, 264);
			this->listBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab7::button1_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 26;
			this->listBox2->Location = System::Drawing::Point(390, 355);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(372, 264);
			this->listBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 26);
			this->label2->TabIndex = 4;
			this->label2->Text = L"�������� �������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(385, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 26);
			this->label3->TabIndex = 5;
			this->label3->Text = L"���������� �������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(361, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(275, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"������ �������� �������:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(379, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(277, 26);
			this->label5->TabIndex = 7;
			this->label5->Text = L"����� ����� � �������� m:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(662, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 34);
			this->textBox1->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(282, 26);
			this->label6->TabIndex = 9;
			this->label6->Text = L"�������� ��������� �����:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 26);
			this->label7->TabIndex = 10;
			this->label7->Text = L"����� ������� a:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(221, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 34);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(221, 214);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 34);
			this->textBox3->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(27, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 26);
			this->label8->TabIndex = 12;
			this->label8->Text = L"������ ������� b:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(467, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 59);
			this->button2->TabIndex = 14;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Lab7::button2_Click);
			// 
			// Lab7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(886, 631);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Lab7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������������ 7";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();	// ������� �������
		listBox2->Items->Clear();
		int m, a, b;				// m - ����� ����� � �������� �������; a � b - �������� ��������� �����
		if (!Lab7DLL::Class1::GetInt(m, textBox1, "������� ����� �����/�������� �������")) return;
		if (!Lab7DLL::Class1::GetInt(a, textBox2, "������� ����� ������� ���������")) return;
		if (!Lab7DLL::Class1::GetInt(b, textBox3, "������� ������ ������� ���������")) return;
		int** matr = Lab7DLL::Class1::input(m, a, b);	// �������� �������� �������
		Lab7DLL::Class1::output(matr, m, listBox1);		// ����� �������� �������
		int** matr2 = Lab7DLL::Class1::task(matr, m);	// �������� ����� �������
		Lab7DLL::Class1::output(matr2, m, listBox2);	// ����� ����� �������
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
};
}
