#pragma once
#include"Form3.h"
#include"Form23.h"

namespace StudentRecordSystem{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_user;
	private: System::Windows::Forms::Label^  lbl_pass;
	protected: 



	private: System::Windows::Forms::TextBox^  user_text;
	private: System::Windows::Forms::TextBox^  pass_text;
	private: System::Windows::Forms::Button^  btn_enter;





	private: System::Windows::Forms::Label^  lbl_login;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

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
			this->lbl_user = (gcnew System::Windows::Forms::Label());
			this->lbl_pass = (gcnew System::Windows::Forms::Label());
			this->user_text = (gcnew System::Windows::Forms::TextBox());
			this->pass_text = (gcnew System::Windows::Forms::TextBox());
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->lbl_login = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// lbl_user
			// 
			this->lbl_user->AutoSize = true;
			this->lbl_user->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_user->Location = System::Drawing::Point(-3, 103);
			this->lbl_user->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_user->Name = L"lbl_user";
			this->lbl_user->Size = System::Drawing::Size(118, 29);
			this->lbl_user->TabIndex = 1;
			this->lbl_user->Text = L"UserName:";
			// 
			// lbl_pass
			// 
			this->lbl_pass->AutoSize = true;
			this->lbl_pass->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_pass->Location = System::Drawing::Point(4, 164);
			this->lbl_pass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_pass->Name = L"lbl_pass";
			this->lbl_pass->Size = System::Drawing::Size(113, 29);
			this->lbl_pass->TabIndex = 2;
			this->lbl_pass->Text = L"Password:";
			// 
			// user_text
			// 
			this->user_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_text->Location = System::Drawing::Point(112, 108);
			this->user_text->Margin = System::Windows::Forms::Padding(4);
			this->user_text->Name = L"user_text";
			this->user_text->Size = System::Drawing::Size(350, 24);
			this->user_text->TabIndex = 3;
			this->user_text->TextChanged += gcnew System::EventHandler(this, &Form2::user_text_TextChanged);
			// 
			// pass_text
			// 
			this->pass_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass_text->Location = System::Drawing::Point(112, 164);
			this->pass_text->Margin = System::Windows::Forms::Padding(4);
			this->pass_text->Name = L"pass_text";
			this->pass_text->PasswordChar = '*';
			this->pass_text->Size = System::Drawing::Size(350, 24);
			this->pass_text->TabIndex = 4;
			// 
			// btn_enter
			// 
			this->btn_enter->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enter->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_enter->Location = System::Drawing::Point(188, 215);
			this->btn_enter->Margin = System::Windows::Forms::Padding(4);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(151, 47);
			this->btn_enter->TabIndex = 5;
			this->btn_enter->Text = L"Enter";
			this->btn_enter->UseVisualStyleBackColor = false;
			this->btn_enter->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// lbl_login
			// 
			this->lbl_login->AutoSize = true;
			this->lbl_login->BackColor = System::Drawing::Color::Silver;
			this->lbl_login->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_login->Location = System::Drawing::Point(181, 34);
			this->lbl_login->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_login->Name = L"lbl_login";
			this->lbl_login->Size = System::Drawing::Size(126, 41);
			this->lbl_login->TabIndex = 7;
			this->lbl_login->Text = L"Log-In";
			this->lbl_login->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(13, 287);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(165, 20);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Forgotten Password \?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form2::linkLabel1_LinkClicked);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(472, 321);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->lbl_login);
			this->Controls->Add(this->btn_enter);
			this->Controls->Add(this->pass_text);
			this->Controls->Add(this->user_text);
			this->Controls->Add(this->lbl_pass);
			this->Controls->Add(this->lbl_user);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form2";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(pass_text->Text=="admin"&&user_text->Text=="admin")
				 {
					 this->Hide();
					Form3 ^ frm= gcnew Form3();
					 frm->ShowDialog();
				 }
				 else
					 MessageBox::Show("Invalid password ","Error Message",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
					this->Hide();
					Form23^ frm= gcnew Form23();
					 frm->ShowDialog();
		 }
private: System::Void user_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
