#pragma once
#include"Form21.h"

namespace StudentRecordSystem{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Summary for Form23
	/// </summary>
	public ref class Form23 : public System::Windows::Forms::Form
	{
	public:
		Form23(void)
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
		~Form23()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_user;



	protected: 





	private: System::Windows::Forms::Button^  btn_enter;





	private: System::Windows::Forms::Label^  lbl_login;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tele_txt;



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
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->lbl_login = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tele_txt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbl_user
			// 
			this->lbl_user->AutoSize = true;
			this->lbl_user->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_user->Location = System::Drawing::Point(184, 162);
			this->lbl_user->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_user->Name = L"lbl_user";
			this->lbl_user->Size = System::Drawing::Size(0, 29);
			this->lbl_user->TabIndex = 1;
			// 
			// btn_enter
			// 
			this->btn_enter->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enter->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_enter->Location = System::Drawing::Point(156, 204);
			this->btn_enter->Margin = System::Windows::Forms::Padding(4);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(151, 47);
			this->btn_enter->TabIndex = 5;
			this->btn_enter->Text = L"Enter";
			this->btn_enter->UseVisualStyleBackColor = false;
			this->btn_enter->Click += gcnew System::EventHandler(this, &Form23::button1_Click);
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
			this->lbl_login->Click += gcnew System::EventHandler(this, &Form23::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Enter Tele ****12:";
			// 
			// tele_txt
			// 
			this->tele_txt->Location = System::Drawing::Point(189, 134);
			this->tele_txt->Name = L"tele_txt";
			this->tele_txt->Size = System::Drawing::Size(248, 21);
			this->tele_txt->TabIndex = 9;
			// 
			// Form23
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(444, 303);
			this->Controls->Add(this->tele_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_login);
			this->Controls->Add(this->btn_enter);
			this->Controls->Add(this->lbl_user);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form23";
			this->Text = L"Change Password Form";
			this->Load += gcnew System::EventHandler(this, &Form23::Form23_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				/* String^ readed;
				bool flag =false; 
				String^ tele =tele_txt->Text;
				StreamReader^ sr=gcnew StreamReader("user telephone.txt");
				while(readed=sr->ReadLine())
				{
					array<String^>^result; 
					result = readed->Split('|'); 
					if(id==result[0])
					{
						flag=true;
						MessageBox::Show("telephone is  incorrect ","Error",MessageBoxButtons::OK);
						this->Hide();
					Form21 ^ frm= gcnew Form21();
					frm->ShowDialog(); 
					}
					sr->Close();
				}*/
					
				 StreamWriter^ sr= gcnew StreamWriter("Student record.txt",true);
					String^ record_data="";
					String^ tele=tele_txt->Text;
					record_data= tele+'|';
					sr->WriteLine(record_data);
					sr->Close();
					this->Hide();
					Form21 ^ frm= gcnew Form21();
					frm->ShowDialog(); 
					sr->Close();
				
			}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form23_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

		 this->Hide();
			
			
		 
		 }
private: System::Void user_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
