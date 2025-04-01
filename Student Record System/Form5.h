#pragma once
#include"Form6.h";

namespace StudentRecordSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
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
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  id_txt;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  fname_txt;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button22;




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
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fname_txt = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(102, 44);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(159, 20);
			this->id_txt->TabIndex = 0;
			this->id_txt->TextChanged += gcnew System::EventHandler(this, &Form5::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"   Id  ";
			this->label1->Click += gcnew System::EventHandler(this, &Form5::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Full Name";
			// 
			// fname_txt
			// 
			this->fname_txt->Location = System::Drawing::Point(102, 93);
			this->fname_txt->Name = L"fname_txt";
			this->fname_txt->Size = System::Drawing::Size(159, 20);
			this->fname_txt->TabIndex = 3;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(37, 149);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 33);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Enter";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(157, 150);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(84, 33);
			this->button22->TabIndex = 5;
			this->button22->Text = L"Exit";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form5::button22_Click);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(284, 222);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->fname_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->id_txt);
			this->Name = L"Form5";
			this->Text = L"Modification Form";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 
				
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ readed;
				bool flag =false; 
				String^ id =id_txt->Text;
				String^ fullname =fname_txt->Text;
				StreamReader^ sr=gcnew StreamReader("Student record.txt");
				while(readed=sr->ReadLine())
				{
					array<String^>^result; 
					result = readed->Split('|'); 
					if(id==result[0] && fullname==result[1])
					{
						flag=true;
			MessageBox::Show("Record is found . Do you want to modify on it ? "," Modification Message",MessageBoxButtons::YesNo,MessageBoxIcon::Question );
						 this->Hide();
						Form6 ^ frm= gcnew Form6();
						frm->ShowDialog();
					}
				}
				if(flag!=true)
				{
				MessageBox::Show("Record is not found","Warning",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
				sr->Close();
			 }
		private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
					Application::Exit(); 

				 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
