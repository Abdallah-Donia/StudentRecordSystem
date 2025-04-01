#pragma once
#include "Form2.h"
#include "Form9.h"

namespace StudentRecordSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_welcome;
	private: System::Windows::Forms::Label^  lbl_question;
	private: System::Windows::Forms::RadioButton^  student_rbtn;
	private: System::Windows::Forms::RadioButton^  admin_rbtn;
	private: System::Windows::Forms::Button^  exit_btn;
	protected: 

	protected: 








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_welcome = (gcnew System::Windows::Forms::Label());
			this->lbl_question = (gcnew System::Windows::Forms::Label());
			this->student_rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->admin_rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_welcome
			// 
			this->lbl_welcome->AutoSize = true;
			this->lbl_welcome->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->lbl_welcome->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_welcome->Location = System::Drawing::Point(28, 64);
			this->lbl_welcome->Name = L"lbl_welcome";
			this->lbl_welcome->Size = System::Drawing::Size(513, 34);
			this->lbl_welcome->TabIndex = 0;
			this->lbl_welcome->Text = L"Welcome to Student Record System";
			this->lbl_welcome->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// lbl_question
			// 
			this->lbl_question->AutoSize = true;
			this->lbl_question->BackColor = System::Drawing::Color::Gold;
			this->lbl_question->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_question->ForeColor = System::Drawing::Color::Black;
			this->lbl_question->Location = System::Drawing::Point(48, 148);
			this->lbl_question->Name = L"lbl_question";
			this->lbl_question->Size = System::Drawing::Size(474, 29);
			this->lbl_question->TabIndex = 1;
			this->lbl_question->Text = L"Hello,Are you Student or Administrator\?";
			// 
			// student_rbtn
			// 
			this->student_rbtn->AutoSize = true;
			this->student_rbtn->BackColor = System::Drawing::Color::Orange;
			this->student_rbtn->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->student_rbtn->ForeColor = System::Drawing::Color::Black;
			this->student_rbtn->Location = System::Drawing::Point(53, 237);
			this->student_rbtn->Name = L"student_rbtn";
			this->student_rbtn->Size = System::Drawing::Size(119, 40);
			this->student_rbtn->TabIndex = 2;
			this->student_rbtn->Text = L"Student";
			this->student_rbtn->UseVisualStyleBackColor = false;
			this->student_rbtn->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// admin_rbtn
			// 
			this->admin_rbtn->AutoSize = true;
			this->admin_rbtn->BackColor = System::Drawing::Color::Orange;
			this->admin_rbtn->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->admin_rbtn->ForeColor = System::Drawing::Color::Black;
			this->admin_rbtn->Location = System::Drawing::Point(332, 237);
			this->admin_rbtn->Name = L"admin_rbtn";
			this->admin_rbtn->Size = System::Drawing::Size(190, 40);
			this->admin_rbtn->TabIndex = 3;
			this->admin_rbtn->Text = L"Administrator";
			this->admin_rbtn->UseVisualStyleBackColor = false;
			this->admin_rbtn->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged_1);
			// 
			// exit_btn
			// 
			this->exit_btn->BackColor = System::Drawing::Color::Red;
			this->exit_btn->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->exit_btn->Location = System::Drawing::Point(197, 300);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(116, 42);
			this->exit_btn->TabIndex = 4;
			this->exit_btn->Text = L"&Exit";
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(563, 369);
			this->Controls->Add(this->exit_btn);
			this->Controls->Add(this->admin_rbtn);
			this->Controls->Add(this->student_rbtn);
			this->Controls->Add(this->lbl_question);
			this->Controls->Add(this->lbl_welcome);
			this->Name = L"Form1";
			this->Text = L"Student Record System";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void radioButton2_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form2^frm=gcnew Form2();
			frm->ShowDialog();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit(); 
		 }

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  this->Hide();
			 Form9^frm=gcnew Form9();
			frm->ShowDialog();

		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

