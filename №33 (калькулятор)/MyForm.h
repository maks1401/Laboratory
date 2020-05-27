#pragma once
#include <cmath>
#include "Header.h"
#include <string>
bool P0 = false;
bool P1 = false;
bool P2 = false;
using namespace std;
namespace Project1
{
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
	private: System::Windows::Forms::Button^ Половинного_деления;
	private: System::Windows::Forms::Button^ Ньютона;
	private: System::Windows::Forms::Button^ Итераций;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ left;
	private: System::Windows::Forms::TextBox^ right;
	public: System::Windows::Forms::TextBox^ tochnost;
	private:




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ power2;









	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ x1;
	private: System::Windows::Forms::Label^ x2;
	private: System::Windows::Forms::TextBox^ power1;
	private: System::Windows::Forms::TextBox^ power0;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ result;
	private: System::Windows::Forms::Button^ Выход;
	private: System::Windows::Forms::Button^ Отчистить_все;

	private: System::Windows::Forms::Button^ Сбросить_метод;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;








	private: System::ComponentModel::IContainer^ components;








	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Половинного_деления = (gcnew System::Windows::Forms::Button());
			this->Ньютона = (gcnew System::Windows::Forms::Button());
			this->Итераций = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->left = (gcnew System::Windows::Forms::TextBox());
			this->right = (gcnew System::Windows::Forms::TextBox());
			this->tochnost = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->power2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::Label());
			this->x2 = (gcnew System::Windows::Forms::Label());
			this->power1 = (gcnew System::Windows::Forms::TextBox());
			this->power0 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->Выход = (gcnew System::Windows::Forms::Button());
			this->Отчистить_все = (gcnew System::Windows::Forms::Button());
			this->Сбросить_метод = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Половинного_деления
			// 
			this->Половинного_деления->Location = System::Drawing::Point(11, 259);
			this->Половинного_деления->Name = L"Половинного_деления";
			this->Половинного_деления->Size = System::Drawing::Size(143, 23);
			this->Половинного_деления->TabIndex = 2;
			this->Половинного_деления->Text = L"Половинного деления";
			this->toolTip1->SetToolTip(this->Половинного_деления, L"Для метода половинного деления введите интервал изолированного корня");
			this->Половинного_деления->UseVisualStyleBackColor = true;
			this->Половинного_деления->Click += gcnew System::EventHandler(this, &MyForm::Половинного_деления_Click);
			// 
			// Ньютона
			// 
			this->Ньютона->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ньютона->Location = System::Drawing::Point(11, 230);
			this->Ньютона->Name = L"Ньютона";
			this->Ньютона->Size = System::Drawing::Size(143, 23);
			this->Ньютона->TabIndex = 1;
			this->Ньютона->Text = L"Ньютона";
			this->toolTip1->SetToolTip(this->Ньютона, L"Для метода Ньютона введите интервал в котором находится корень");
			this->Ньютона->UseVisualStyleBackColor = true;
			this->Ньютона->Click += gcnew System::EventHandler(this, &MyForm::Ньютона_Click);
			// 
			// Итераций
			// 
			this->Итераций->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Итераций->Location = System::Drawing::Point(11, 201);
			this->Итераций->Name = L"Итераций";
			this->Итераций->Size = System::Drawing::Size(143, 23);
			this->Итераций->TabIndex = 0;
			this->Итераций->Text = L"Итераций";
			this->toolTip1->SetToolTip(this->Итераций, L"Для метода итераций не нужен интервал");
			this->Итераций->UseVisualStyleBackColor = true;
			this->Итераций->Click += gcnew System::EventHandler(this, &MyForm::Итераций_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 31);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Методы:";
			// 
			// left
			// 
			this->left->Location = System::Drawing::Point(189, 233);
			this->left->Name = L"left";
			this->left->Size = System::Drawing::Size(86, 20);
			this->left->TabIndex = 10;
			this->toolTip1->SetToolTip(this->left, L"Начало интервала");
			this->left->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::left_KeyPress);
			// 
			// right
			// 
			this->right->Location = System::Drawing::Point(189, 262);
			this->right->Name = L"right";
			this->right->Size = System::Drawing::Size(86, 20);
			this->right->TabIndex = 11;
			this->toolTip1->SetToolTip(this->right, L"Конец интервала");
			this->right->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::right_KeyPress);
			// 
			// tochnost
			// 
			this->tochnost->HideSelection = false;
			this->tochnost->Location = System::Drawing::Point(121, 142);
			this->tochnost->Name = L"tochnost";
			this->tochnost->ShortcutsEnabled = false;
			this->tochnost->Size = System::Drawing::Size(100, 20);
			this->tochnost->TabIndex = 9;
			this->tochnost->Text = L"0,0001";
			this->toolTip1->SetToolTip(this->tochnost, L"Введите точность чрез запятую");
			this->tochnost->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tochnost_Press);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(185, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Интервал:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(60, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 43);
			this->label3->TabIndex = 21;
			this->label3->Text = L"e =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(288, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 24);
			this->label4->TabIndex = 11;
			// 
			// power2
			// 
			this->power2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->power2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->power2->HideSelection = false;
			this->power2->Location = System::Drawing::Point(121, 27);
			this->power2->Name = L"power2";
			this->power2->ShortcutsEnabled = false;
			this->power2->Size = System::Drawing::Size(75, 45);
			this->power2->TabIndex = 6;
			this->power2->Text = L" a";
			this->power2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->toolTip1->SetToolTip(this->power2, L"Введите коэффицент перед старшей степенью X");
			this->power2->Click += gcnew System::EventHandler(this, &MyForm::Power2_Click);
			this->power2->TextChanged += gcnew System::EventHandler(this, &MyForm::Power2_Click);
			this->power2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Power2_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(59, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 41);
			this->label7->TabIndex = 20;
			this->label7->Text = L"x = ";
			// 
			// x1
			// 
			this->x1->AutoSize = true;
			this->x1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->x1->Location = System::Drawing::Point(200, 22);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(38, 43);
			this->x1->TabIndex = 17;
			this->x1->Text = L"x";
			// 
			// x2
			// 
			this->x2->AutoSize = true;
			this->x2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x2->Location = System::Drawing::Point(231, 19);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(17, 19);
			this->x2->TabIndex = 9;
			this->x2->Text = L"2";
			// 
			// power1
			// 
			this->power1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->power1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->power1->Location = System::Drawing::Point(244, 27);
			this->power1->Name = L"power1";
			this->power1->ShortcutsEnabled = false;
			this->power1->Size = System::Drawing::Size(75, 45);
			this->power1->TabIndex = 7;
			this->power1->Text = L"+b";
			this->power1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolTip1->SetToolTip(this->power1, L"Введите коэффицент со знаком перед первой степенью X");
			this->power1->Click += gcnew System::EventHandler(this, &MyForm::Power1_Click);
			this->power1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Power1_KeyPress);
			// 
			// power0
			// 
			this->power0->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->power0->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power0->ForeColor = System::Drawing::SystemColors::GrayText;
			this->power0->Location = System::Drawing::Point(360, 27);
			this->power0->Name = L"power0";
			this->power0->ShortcutsEnabled = false;
			this->power0->Size = System::Drawing::Size(67, 45);
			this->power0->TabIndex = 8;
			this->power0->Text = L"+ c";
			this->power0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolTip1->SetToolTip(this->power0, L"Введите константу со знаком");
			this->power0->Click += gcnew System::EventHandler(this, &MyForm::Power0_Click);
			this->power0->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Power0_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(325, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 43);
			this->label5->TabIndex = 18;
			this->label5->Text = L"x";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 43);
			this->label6->TabIndex = 19;
			this->label6->Text = L"f (x) =";
			// 
			// result
			// 
			this->result->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->result->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::SystemColors::WindowText;
			this->result->HideSelection = false;
			this->result->Location = System::Drawing::Point(121, 87);
			this->result->Name = L"result";
			this->result->ReadOnly = true;
			this->result->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->result->ShortcutsEnabled = false;
			this->result->Size = System::Drawing::Size(306, 39);
			this->result->TabIndex = 12;
			this->result->TabStop = false;
			this->result->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolTip1->SetToolTip(this->result, L"Корень уравнения");
			// 
			// Выход
			// 
			this->Выход->Location = System::Drawing::Point(305, 259);
			this->Выход->Name = L"Выход";
			this->Выход->Size = System::Drawing::Size(143, 23);
			this->Выход->TabIndex = 5;
			this->Выход->Text = L"Выход";
			this->Выход->UseVisualStyleBackColor = true;
			this->Выход->Click += gcnew System::EventHandler(this, &MyForm::Выход_Click);
			// 
			// Отчистить_все
			// 
			this->Отчистить_все->Location = System::Drawing::Point(305, 230);
			this->Отчистить_все->Name = L"Отчистить_все";
			this->Отчистить_все->Size = System::Drawing::Size(143, 23);
			this->Отчистить_все->TabIndex = 4;
			this->Отчистить_все->Text = L"Отчистить все";
			this->Отчистить_все->UseVisualStyleBackColor = true;
			this->Отчистить_все->Click += gcnew System::EventHandler(this, &MyForm::Отчистить_все_Click);
			// 
			// Сбросить_метод
			// 
			this->Сбросить_метод->Location = System::Drawing::Point(305, 201);
			this->Сбросить_метод->Name = L"Сбросить_метод";
			this->Сбросить_метод->Size = System::Drawing::Size(143, 23);
			this->Сбросить_метод->TabIndex = 3;
			this->Сбросить_метод->Text = L"Сбросить метод";
			this->Сбросить_метод->UseVisualStyleBackColor = true;
			this->Сбросить_метод->Click += gcnew System::EventHandler(this, &MyForm::Сбросить_метод_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(165, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 21);
			this->label8->TabIndex = 22;
			this->label8->Text = L"a:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(165, 261);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 21);
			this->label9->TabIndex = 23;
			this->label9->Text = L"b:";
			// 
			// toolTip1
			// 
			this->toolTip1->AutoPopDelay = 5000;
			this->toolTip1->InitialDelay = 200;
			this->toolTip1->ReshowDelay = 100;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(460, 24);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ОПрограммеToolStripMenuItem_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 291);
			this->Controls->Add(this->Сбросить_метод);
			this->Controls->Add(this->Отчистить_все);
			this->Controls->Add(this->Выход);
			this->Controls->Add(this->result);
			this->Controls->Add(this->power1);
			this->Controls->Add(this->power0);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->power2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tochnost);
			this->Controls->Add(this->right);
			this->Controls->Add(this->left);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Итераций);
			this->Controls->Add(this->Ньютона);
			this->Controls->Add(this->Половинного_деления);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(476, 330);
			this->MinimumSize = System::Drawing::Size(476, 330);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор алгебраических уравнений";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ TorZ; // Точка или запятая

	private: void checkTextBox(System::Windows::Forms::TextBox^ textBox, System::Windows::Forms::KeyPressEventArgs^ e) {
		bool TZFound = false; // Разделительный знак найден?
		String^ FirstChar; //знаки + и - разрешены первым символом
		FirstChar = "";
		if (textBox->Text->Length > 0) FirstChar = textBox->Text->Substring(0, 1);
		bool badPosition = ((FirstChar == L"-" || FirstChar == L"+") && textBox->SelectionStart == 0);
		if (Char::IsDigit(e->KeyChar) == true) {
			if (badPosition) e->Handled = true;
			return; //Найдена цифра
		}
		if (e->KeyChar == (char)Keys::Back) return; //Найден BackSpace
		if (e->KeyChar == L'-' || e->KeyChar == L'+') {
			if (FirstChar == L"-" || FirstChar == L"+") textBox->Text = textBox->Text->Substring(1);
			if (textBox->SelectionStart == 0) return;
		}
		if (textBox->Text->IndexOf(TorZ) != -1) TZFound = true; //Найден разделитель целой и дробной частей
		if (TZFound == true) { e->Handled = true; return; } //Уже есть, второй не добавляем
		if (e->KeyChar.ToString() == TorZ && !badPosition) return; //А первый - можно
		e->Handled = true; //Не разрешать дальнейшую обработку
	}
	
private: System::Void MyForm_Load(System::Object ^ sender, System::EventArgs ^ e) {
	TorZ = Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
}
	private: System::Void Итераций_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (tochnost->TextLength == 0)
			MessageBox::Show("Вы не ввели точность. Пожалуйста, введите точность вычислений.", "Ошибка");
		else if (power2->TextLength == 0 || power1->TextLength == 0 || power0->TextLength == 0)
			MessageBox::Show("Вы не ввели коэффиценты. Пожалуйста, введите коэффиценты", "Ошибка");
		else
		{
			if (power2->Text == "a" || power1->Text == "+b" || power0->Text == "+ c")
				MessageBox::Show("Вы не ввели коэффиценты. Пожалуйста, введите коэффиценты", "Ошибка");
			else
			{
				try
				{
					result->Text = System::Convert::ToString(root3(System::Convert::ToDouble(power2->Text), System::Convert::ToDouble(power1->Text), System::Convert::ToDouble(power0->Text), System::Convert::ToDouble(tochnost->Text), System::Convert::ToDouble(left->Text)));
					if (System::Convert::ToDouble(result->Text) == std::numeric_limits<double>::infinity() || System::Convert::ToDouble(result->Text) == -std::numeric_limits<double>::infinity())
						MessageBox::Show("Корней нет", "Ошибка");
				}
				catch(...)
				{
					MessageBox::Show("Тип данных", "Ошибка");
				}				
				
			}				
		}
	}

	private: System::Void Половинного_деления_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		left->Enabled = true;
		right->Enabled = true;
		if (tochnost->TextLength == 0)
			MessageBox::Show("Вы не ввели точность. Пожалуйста, введите точность вычислений.", "Ошибка");
		else if (power2->TextLength == 0 || power1->TextLength == 0 || power0->TextLength == 0)
			MessageBox::Show("Вы не ввели коэффиценты. Пожалуйста, введите коэффиценты", "Ошибка");		
		else
		{
			if ((right->TextLength == 0 ) || (left->TextLength == 0))
				MessageBox::Show("Вы не ввели диапазон. Для метода половинного деления необходимо указать диапазон изолированного корня.", "Ошибка");
			else
			{
				try 
				{
					result->Text = System::Convert::ToString(root1(System::Convert::ToDouble(power2->Text), System::Convert::ToDouble(power1->Text), System::Convert::ToDouble(power0->Text), System::Convert::ToDouble(left->Text), System::Convert::ToDouble(right->Text), System::Convert::ToDouble(tochnost->Text)));
					double x = System::Convert::ToDouble(result->Text);
					double y = round(x);
					if (System::Convert::ToDouble(result->Text) == std::numeric_limits<double>::infinity() || System::Convert::ToDouble(result->Text) == -std::numeric_limits<double>::infinity() || y == System::Convert::ToDouble(right->Text))
					{
						result->Clear();
						MessageBox::Show("Корней в заданном диапазоне нет", "Ошибка");
					}
						
				}
				catch (...)
				{
					MessageBox::Show("Тип данных", "Ошибка");
				}				
			}		
		}
	}

	private: System::Void Ньютона_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

		left->Enabled = true;
		right->Enabled = true;
		if (tochnost->TextLength == 0)
			MessageBox::Show("Вы не ввели точность. Пожалуйста, введите точность вычислений.", "Ошибка");
		else if (power2->TextLength == 0 || power1->TextLength == 0 || power0->TextLength == 0)
			MessageBox::Show("Вы не ввели коэффиценты. Пожалуйста, введите коэффиценты", "Ошибка");
		else
		{
			if ((right->TextLength == 0) || (left->TextLength == 0))
				MessageBox::Show("Вы не ввели диапазон. Для метода половинного деления необходимо указать диапазон изолированного корня.", "Ошибка");
			else
			{
				try
				{
					double x = (System::Convert::ToDouble(left->Text) + System::Convert::ToDouble(right->Text)) / 2;
					result->Text = System::Convert::ToString(root3(System::Convert::ToDouble(power2->Text), System::Convert::ToDouble(power1->Text), System::Convert::ToDouble(power0->Text), System::Convert::ToDouble(tochnost->Text), x));
					if (System::Convert::ToDouble(result->Text) == std::numeric_limits<double>::infinity() || System::Convert::ToDouble(result->Text) == -std::numeric_limits<double>::infinity())
						MessageBox::Show("Корней нет", "Ошибка");
				}
				catch (...)
				{
					MessageBox::Show("Тип данных", "Ошибка");
				}				
			}
		}
	}

	private: System::Void Отчистить_все_Click(System::Object ^ sender, System::EventArgs ^ e) 
	{
		left->Clear();
		right->Clear();
		tochnost->Clear();
		result->Clear();
		power0->Clear();
		power1->Clear();
		power2->Clear();
		left->Enabled = true;
		right->Enabled = true;
	}

	private: System::Void Сбросить_метод_Click(System::Object ^ sender, System::EventArgs ^ e) 
	{
		left->Enabled = true;
		right->Enabled = true;
		result->Clear();
	}

	 /*Информация в полях*/
	private: System::Void Power0_Click(System::Object ^ sender, System::EventArgs ^ e) 
	{
		if (P0 == false)
			power0->Clear();
		P0 = true;
	}
	private: System::Void Power1_Click(System::Object ^ sender, System::EventArgs ^ e) 
	{
		if (P1 == false)
			power1->Clear();
		P1 = true;
	}
	private: System::Void Power2_Click(System::Object ^ sender, System::EventArgs ^ e) 
	{
		if (P2 == false)
			power2->Clear();
		P2 = true;
	}
	private: System::Void ОПрограммеToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
	MessageBox::Show("Программу выполнил Трегубов Максим ИВТ-19-1Б. Калькулятор алгебраических уравнений.", "Информация");
	}
	private: System::Void Power2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		checkTextBox(power2, e);
	}
	private: System::Void Power1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		checkTextBox(power1, e);
	}
	private: System::Void Power0_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		checkTextBox(power0, e);
	}
	private: System::Void left_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		checkTextBox(left, e);
	}
	private: System::Void right_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		checkTextBox(right, e);
	}
	private: System::Void tochnost_Press(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		checkTextBox(tochnost, e);
	}
	private: System::Void Выход_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }



	

};
}
