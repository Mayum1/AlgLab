#pragma once
#include "MyForm.h"
#include "Lab2.h"
#include "Lab3.h"
#include "Lab4.h"
#include "Lab5.h"
#include "Pr.h"
#include "Lab6.h"
#include "Lab7.h"

namespace Laboratory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Lobby
	/// </summary>
	public ref class Lobby : public System::Windows::Forms::Form
	{
	public:
		Lobby(void)
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
		~Lobby()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������1ToolStripMenuItem1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������6ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������7ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lobby::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->������������������1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������6ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������7ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(872, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->������������������1ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(63, 169);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(382, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ������������������1ToolStripMenuItem
			// 
			this->������������������1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->������������������1ToolStripMenuItem1,
					this->������������������2ToolStripMenuItem, this->������������������3ToolStripMenuItem, this->������������������4ToolStripMenuItem,
					this->������������������5ToolStripMenuItem, this->toolStripMenuItem1, this->������������������6ToolStripMenuItem, this->������������������7ToolStripMenuItem
			});
			this->������������������1ToolStripMenuItem->Name = L"������������������1ToolStripMenuItem";
			this->������������������1ToolStripMenuItem->Size = System::Drawing::Size(224, 24);
			this->������������������1ToolStripMenuItem->Text = L"������ ������������ �����";
			// 
			// ������������������1ToolStripMenuItem1
			// 
			this->������������������1ToolStripMenuItem1->Name = L"������������������1�ToolStripMenuItem1";
			this->������������������1ToolStripMenuItem1->Size = System::Drawing::Size(276, 26);
			this->������������������1ToolStripMenuItem1->Text = L"������������ ������ �1";
			this->������������������1ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Lobby::������������������1ToolStripMenuItem1_Click);
			// 
			// ������������������2ToolStripMenuItem
			// 
			this->������������������2ToolStripMenuItem->Name = L"������������������2ToolStripMenuItem";
			this->������������������2ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->������������������2ToolStripMenuItem->Text = L"������������ ������ �2";
			this->������������������2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::������������������2ToolStripMenuItem_Click);
			// 
			// ������������������3ToolStripMenuItem
			// 
			this->������������������3ToolStripMenuItem->Name = L"������������������3ToolStripMenuItem";
			this->������������������3ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->������������������3ToolStripMenuItem->Text = L"������������ ������ �3";
			this->������������������3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::������������������3ToolStripMenuItem_Click);
			// 
			// ������������������4ToolStripMenuItem
			// 
			this->������������������4ToolStripMenuItem->Name = L"������������������4ToolStripMenuItem";
			this->������������������4ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->������������������4ToolStripMenuItem->Text = L"������������ ������ �4";
			this->������������������4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::������������������4ToolStripMenuItem_Click);
			// 
			// ������������������5ToolStripMenuItem
			// 
			this->������������������5ToolStripMenuItem->Name = L"������������������5ToolStripMenuItem";
			this->������������������5ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->������������������5ToolStripMenuItem->Text = L"������������ ������ �5";
			this->������������������5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::������������������5ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(276, 26);
			this->toolStripMenuItem1->Text = L"������������ ������";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Lobby::toolStripMenuItem1_Click);
			// 
			// ������������������6ToolStripMenuItem
			// 
			this->������������������6ToolStripMenuItem->Name = L"������������������6ToolStripMenuItem";
			this->������������������6ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->������������������6ToolStripMenuItem->Text = L"������������ ������ �6";
			this->������������������6ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::������������������6ToolStripMenuItem_Click);
			// 
			// ������������������7ToolStripMenuItem
			// 
			this->������������������7ToolStripMenuItem->Name = L"������������������7ToolStripMenuItem";
			this->������������������7ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->������������������7ToolStripMenuItem->Text = L"������������ ������ �7";
			this->������������������7ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::������������������7ToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(509, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(369, 64);
			this->label2->TabIndex = 2;
			this->label2->Text = L"�������� ������� ������ ���2102\r\n������� �.�.\r\n�������� ��. ������������� �������"
				L" ������������\r\n����������� �.�.\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(246, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(369, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"������������ ������\r\n�� ����������: ���������� � ��������������� �����\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(384, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"������, 2022�.";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 250);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lobby::button1_Click);
			// 
			// Lobby
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 285);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Lobby";
			this->Text = L"Lobby";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ������������������1ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm^ f = gcnew MyForm();
		f->Owner = this;
		f->Show(); // �� ������ ����� ����� ����������� �������
		this->Hide(); // ������ ������� �����

	}

	private: System::Void ������������������2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab2^ f = gcnew Lab2();
		f->Owner = this;
		f->Show(); // �� ������ ����� ����� ����������� �������
		this->Hide(); // ������ ������� �����

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit(); // ����� �� ����������
	}
	private: System::Void ������������������3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab3^ f = gcnew Lab3();
		f->Owner = this;
		f->Show(); // �� ������ ����� ����� ����������� �������
		this->Hide(); // ������ ������� �����
	}
	private: System::Void ������������������4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab4^ f = gcnew Lab4();
		f->Owner = this;
		f->Show(); // �� ������ ����� ����� ����������� �������
		this->Hide(); // ������ ������� �����
	}
	private: System::Void ������������������5ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab5^ f = gcnew Lab5();
		f->Owner = this;
		f->Show(); // �� ������ ����� ����� ����������� �������
		this->Hide(); // ������ ������� �����
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pr^ f = gcnew Pr();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void ������������������6ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab6^ f = gcnew Lab6();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void ������������������7ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab7^ f = gcnew Lab7();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
};
}
