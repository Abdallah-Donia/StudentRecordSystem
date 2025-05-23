#pragma once

namespace StudentRecordSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		Form7(void)
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
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  id_txt;
	protected: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(72, 91);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(229, 20);
			this->id_txt->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(49, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form7::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(228, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form7::button2_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 267);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->label1);
			this->Name = L"Form7";
			this->Text = L"Delete";
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ readed;
				bool flag =false;
				int i=0;
				String^ id =id_txt->Text;
				StreamReader^ sr=gcnew StreamReader("Student record.txt");
				while(readed=sr->ReadLine())
				{
					array<String^>^result; 
					result = readed->Split('|'); 
					if(id==result[0])
					{
						flag=true;
//						result[i]->clear();
						MessageBox::Show("Record is  Deleted Sucessfully","Succesful",MessageBoxButtons::OK,MessageBoxIcon::Question);
					}
				}
				if(flag!=true)
				{
				MessageBox::Show("Record is not found","Warning",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
				sr->Close();
			 }
	private: System::Void Form7_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}

