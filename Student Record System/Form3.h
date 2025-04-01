#pragma once
#include"Form4.h"
#include"Form5.h"
#include"Form7.h"
#include"Form8.h"

namespace StudentRecordSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_add;
	private: System::Windows::Forms::Button^  btn_modify;
	private: System::Windows::Forms::Button^  btn_dele;
	private: System::Windows::Forms::Button^  btn_search;
	private: System::Windows::Forms::Button^  btn_exit;
	protected: 

	protected: 




	private: System::Windows::Forms::Label^  lbl_choose;



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
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_modify = (gcnew System::Windows::Forms::Button());
			this->btn_dele = (gcnew System::Windows::Forms::Button());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->lbl_choose = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::Gold;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(12, 81);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(221, 62);
			this->btn_add->TabIndex = 0;
			this->btn_add->Text = L"Enter New Record";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &Form3::btn_add_Click);
			// 
			// btn_modify
			// 
			this->btn_modify->BackColor = System::Drawing::Color::LawnGreen;
			this->btn_modify->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_modify->ForeColor = System::Drawing::Color::Black;
			this->btn_modify->Location = System::Drawing::Point(270, 81);
			this->btn_modify->Name = L"btn_modify";
			this->btn_modify->Size = System::Drawing::Size(221, 62);
			this->btn_modify->TabIndex = 1;
			this->btn_modify->Text = L"Modify Records";
			this->btn_modify->UseVisualStyleBackColor = false;
			this->btn_modify->Click += gcnew System::EventHandler(this, &Form3::btn_modify_Click);
			// 
			// btn_dele
			// 
			this->btn_dele->BackColor = System::Drawing::Color::SandyBrown;
			this->btn_dele->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_dele->Location = System::Drawing::Point(12, 179);
			this->btn_dele->Name = L"btn_dele";
			this->btn_dele->Size = System::Drawing::Size(221, 62);
			this->btn_dele->TabIndex = 2;
			this->btn_dele->Text = L"Delete Records";
			this->btn_dele->UseVisualStyleBackColor = false;
			this->btn_dele->Click += gcnew System::EventHandler(this, &Form3::btn_dele_Click);
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(270, 179);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(221, 62);
			this->btn_search->TabIndex = 3;
			this->btn_search->Text = L"Search in Records";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &Form3::btn_search_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Red;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_exit->Location = System::Drawing::Point(191, 261);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(100, 51);
			this->btn_exit->TabIndex = 4;
			this->btn_exit->Text = L"&Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// lbl_choose
			// 
			this->lbl_choose->AutoSize = true;
			this->lbl_choose->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->lbl_choose->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_choose->Location = System::Drawing::Point(33, 27);
			this->lbl_choose->Name = L"lbl_choose";
			this->lbl_choose->Size = System::Drawing::Size(432, 34);
			this->lbl_choose->TabIndex = 5;
			this->lbl_choose->Text = L"Choose What you want to do :";
			this->lbl_choose->Click += gcnew System::EventHandler(this, &Form3::label1_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(503, 324);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->lbl_choose);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->btn_dele);
			this->Controls->Add(this->btn_modify);
			this->Name = L"Form3";
			this->Text = L"Student Record System";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit(); 
		 }
private: System::Void btn_add_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			Form4 ^ frm= gcnew Form4();
					 frm->ShowDialog();
		 }
private: System::Void btn_modify_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form5 ^ frm= gcnew Form5();
			 frm->ShowDialog();

		 }
private: System::Void btn_dele_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form7 ^ frm= gcnew Form7();
			 frm->ShowDialog();
		 }
private: System::Void btn_search_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form8 ^ frm= gcnew Form8();
			 frm->ShowDialog();
		 }
};
}
