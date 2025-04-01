#pragma once

namespace StudentRecordSystem{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Summary for Form21
	/// </summary>
	public ref class Form21 : public System::Windows::Forms::Form
	{
	public:
		Form21(void)
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
		~Form21()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_user;
	private: System::Windows::Forms::Label^  lbl_pass;
	private: System::Windows::Forms::TextBox^  user_txt;
	private: System::Windows::Forms::TextBox^  pass_txt;
	protected: 





	private: System::Windows::Forms::Button^  btn_enter;





	private: System::Windows::Forms::Label^  lbl_login;
	private: System::Windows::Forms::Label^  label1;



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
			this->user_txt = (gcnew System::Windows::Forms::TextBox());
			this->pass_txt = (gcnew System::Windows::Forms::TextBox());
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->lbl_login = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_user
			// 
			this->lbl_user->AutoSize = true;
			this->lbl_user->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_user->Location = System::Drawing::Point(-3, 163);
			this->lbl_user->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_user->Name = L"lbl_user";
			this->lbl_user->Size = System::Drawing::Size(147, 35);
			this->lbl_user->TabIndex = 1;
			this->lbl_user->Text = L"UserName:";
			// 
			// lbl_pass
			// 
			this->lbl_pass->AutoSize = true;
			this->lbl_pass->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_pass->Location = System::Drawing::Point(-3, 241);
			this->lbl_pass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_pass->Name = L"lbl_pass";
			this->lbl_pass->Size = System::Drawing::Size(140, 35);
			this->lbl_pass->TabIndex = 2;
			this->lbl_pass->Text = L"Password:";
			// 
			// user_txt
			// 
			this->user_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_txt->Location = System::Drawing::Point(145, 169);
			this->user_txt->Margin = System::Windows::Forms::Padding(4);
			this->user_txt->Name = L"user_txt";
			this->user_txt->Size = System::Drawing::Size(330, 29);
			this->user_txt->TabIndex = 3;
			this->user_txt->TextChanged += gcnew System::EventHandler(this, &Form21::user_text_TextChanged);
			// 
			// pass_txt
			// 
			this->pass_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass_txt->Location = System::Drawing::Point(145, 241);
			this->pass_txt->Margin = System::Windows::Forms::Padding(4);
			this->pass_txt->Name = L"pass_txt";
			this->pass_txt->PasswordChar = '*';
			this->pass_txt->Size = System::Drawing::Size(330, 29);
			this->pass_txt->TabIndex = 4;
			// 
			// btn_enter
			// 
			this->btn_enter->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enter->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_enter->Location = System::Drawing::Point(171, 306);
			this->btn_enter->Margin = System::Windows::Forms::Padding(4);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(151, 47);
			this->btn_enter->TabIndex = 5;
			this->btn_enter->Text = L"Enter";
			this->btn_enter->UseVisualStyleBackColor = false;
			this->btn_enter->Click += gcnew System::EventHandler(this, &Form21::button1_Click);
			// 
			// lbl_login
			// 
			this->lbl_login->AutoSize = true;
			this->lbl_login->BackColor = System::Drawing::Color::Silver;
			this->lbl_login->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_login->Location = System::Drawing::Point(164, 66);
			this->lbl_login->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_login->Name = L"lbl_login";
			this->lbl_login->Size = System::Drawing::Size(158, 51);
			this->lbl_login->TabIndex = 7;
			this->lbl_login->Text = L"Log-In";
			this->lbl_login->Click += gcnew System::EventHandler(this, &Form21::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-9, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 8;
			// 
			// Form21
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(502, 396);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_login);
			this->Controls->Add(this->btn_enter);
			this->Controls->Add(this->pass_txt);
			this->Controls->Add(this->user_txt);
			this->Controls->Add(this->lbl_pass);
			this->Controls->Add(this->lbl_user);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form21";
			this->Text = L"Change Password Form";
			this->Load += gcnew System::EventHandler(this, &Form21::Form21_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 StreamWriter^ sr= gcnew StreamWriter("admin.txt",true);
					String^ record_data="";
					String^ str1=user_txt->Text;
					String^ str2=pass_txt->Text;
					record_data= str1+"|"+str2;
					sr->WriteLine(record_data);
					sr->Close();
					this->Hide();
				
			}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form21_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

		 this->Hide();
			
			
		 
		 }
private: System::Void user_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
