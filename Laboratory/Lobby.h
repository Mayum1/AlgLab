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
	/// Сводка для Lobby
	/// </summary>
	public ref class Lobby : public System::Windows::Forms::Form
	{
	public:
		Lobby(void)
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
		~Lobby()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота1ToolStripMenuItem1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота6ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота7ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lobby::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->лабораторнаяРабота1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота6ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота7ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->лабораторнаяРабота1ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(63, 169);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(382, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// лабораторнаяРабота1ToolStripMenuItem
			// 
			this->лабораторнаяРабота1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->лабораторнаяРабота1ToolStripMenuItem1,
					this->лабораторнаяРабота2ToolStripMenuItem, this->лабораторнаяРабота3ToolStripMenuItem, this->лабораторнаяРабота4ToolStripMenuItem,
					this->лабораторнаяРабота5ToolStripMenuItem, this->toolStripMenuItem1, this->лабораторнаяРабота6ToolStripMenuItem, this->лабораторнаяРабота7ToolStripMenuItem
			});
			this->лабораторнаяРабота1ToolStripMenuItem->Name = L"лабораторнаяРабота1ToolStripMenuItem";
			this->лабораторнаяРабота1ToolStripMenuItem->Size = System::Drawing::Size(224, 24);
			this->лабораторнаяРабота1ToolStripMenuItem->Text = L"Список лабораторных работ";
			// 
			// лабораторнаяРабота1ToolStripMenuItem1
			// 
			this->лабораторнаяРабота1ToolStripMenuItem1->Name = L"лабораторнаяРабота1яToolStripMenuItem1";
			this->лабораторнаяРабота1ToolStripMenuItem1->Size = System::Drawing::Size(276, 26);
			this->лабораторнаяРабота1ToolStripMenuItem1->Text = L"Лабораторная работа №1";
			this->лабораторнаяРабота1ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Lobby::лабораторнаяРабота1ToolStripMenuItem1_Click);
			// 
			// лабораторнаяРабота2ToolStripMenuItem
			// 
			this->лабораторнаяРабота2ToolStripMenuItem->Name = L"лабораторнаяРабота2ToolStripMenuItem";
			this->лабораторнаяРабота2ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->лабораторнаяРабота2ToolStripMenuItem->Text = L"Лабораторная работа №2";
			this->лабораторнаяРабота2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::лабораторнаяРабота2ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота3ToolStripMenuItem
			// 
			this->лабораторнаяРабота3ToolStripMenuItem->Name = L"лабораторнаяРабота3ToolStripMenuItem";
			this->лабораторнаяРабота3ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->лабораторнаяРабота3ToolStripMenuItem->Text = L"Лабораторная работа №3";
			this->лабораторнаяРабота3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::лабораторнаяРабота3ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота4ToolStripMenuItem
			// 
			this->лабораторнаяРабота4ToolStripMenuItem->Name = L"лабораторнаяРабота4ToolStripMenuItem";
			this->лабораторнаяРабота4ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->лабораторнаяРабота4ToolStripMenuItem->Text = L"Лабораторная работа №4";
			this->лабораторнаяРабота4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::лабораторнаяРабота4ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота5ToolStripMenuItem
			// 
			this->лабораторнаяРабота5ToolStripMenuItem->Name = L"лабораторнаяРабота5ToolStripMenuItem";
			this->лабораторнаяРабота5ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->лабораторнаяРабота5ToolStripMenuItem->Text = L"Лабораторная работа №5";
			this->лабораторнаяРабота5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::лабораторнаяРабота5ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(276, 26);
			this->toolStripMenuItem1->Text = L"Практическая работа";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Lobby::toolStripMenuItem1_Click);
			// 
			// лабораторнаяРабота6ToolStripMenuItem
			// 
			this->лабораторнаяРабота6ToolStripMenuItem->Name = L"лабораторнаяРабота6ToolStripMenuItem";
			this->лабораторнаяРабота6ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->лабораторнаяРабота6ToolStripMenuItem->Text = L"Лабораторная работа №6";
			this->лабораторнаяРабота6ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::лабораторнаяРабота6ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота7ToolStripMenuItem
			// 
			this->лабораторнаяРабота7ToolStripMenuItem->Name = L"лабораторнаяРабота7ToolStripMenuItem";
			this->лабораторнаяРабота7ToolStripMenuItem->Size = System::Drawing::Size(276, 26);
			this->лабораторнаяРабота7ToolStripMenuItem->Text = L"Лабораторная работа №7";
			this->лабораторнаяРабота7ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lobby::лабораторнаяРабота7ToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(509, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(369, 64);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Выполнил студент группы БФИ2102\r\nБалашов М.А.\r\nПроверил ст. преподаватель кафедры"
				L" «Информатика»\r\nЗагвоздкина А.В.\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(246, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(369, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Лабораторные работы\r\nпо дисциплине: «Алгоритмы и алгоритмические языки»\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(384, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Москва, 2022г.";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 250);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Выход";
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
	private: System::Void лабораторнаяРабота1ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm^ f = gcnew MyForm();
		f->Owner = this;
		f->Show(); // На первую форму можно осуществить переход
		this->Hide(); // Скрыть текущую форму

	}

	private: System::Void лабораторнаяРабота2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab2^ f = gcnew Lab2();
		f->Owner = this;
		f->Show(); // На первую форму можно осуществить переход
		this->Hide(); // Скрыть текущую форму

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit(); // Выход из приложения
	}
	private: System::Void лабораторнаяРабота3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab3^ f = gcnew Lab3();
		f->Owner = this;
		f->Show(); // На первую форму можно осуществить переход
		this->Hide(); // Скрыть текущую форму
	}
	private: System::Void лабораторнаяРабота4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab4^ f = gcnew Lab4();
		f->Owner = this;
		f->Show(); // На первую форму можно осуществить переход
		this->Hide(); // Скрыть текущую форму
	}
	private: System::Void лабораторнаяРабота5ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab5^ f = gcnew Lab5();
		f->Owner = this;
		f->Show(); // На первую форму можно осуществить переход
		this->Hide(); // Скрыть текущую форму
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pr^ f = gcnew Pr();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void лабораторнаяРабота6ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab6^ f = gcnew Lab6();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void лабораторнаяРабота7ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab7^ f = gcnew Lab7();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
};
}
