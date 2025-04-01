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
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  id_txt;
	private: System::Windows::Forms::TextBox^  fname_txt;
	private: System::Windows::Forms::TextBox^  class_txt;
	private: System::Windows::Forms::TextBox^  addr;
	private: System::Windows::Forms::TextBox^  ema;
	private: System::Windows::Forms::TextBox^  phon;









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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->fname_txt = (gcnew System::Windows::Forms::TextBox());
			this->class_txt = (gcnew System::Windows::Forms::TextBox());
			this->addr = (gcnew System::Windows::Forms::TextBox());
			this->ema = (gcnew System::Windows::Forms::TextBox());
			this->phon = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(107, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter The Information Below";
			this->label1->Click += gcnew System::EventHandler(this, &Form4::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(500, 406);
			this->button1->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter ID :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 30);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Full Name :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 30);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Class :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 30);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Address :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 30);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Email Address :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(29, 352);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 30);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Phone No :";
			// 
			// id_txt
			// 
			this->id_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->id_txt->Location = System::Drawing::Point(180, 87);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(152, 22);
			this->id_txt->TabIndex = 8;
			this->id_txt->TextChanged += gcnew System::EventHandler(this, &Form4::id_txt_TextChanged);
			// 
			// fname_txt
			// 
			this->fname_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fname_txt->Location = System::Drawing::Point(180, 136);
			this->fname_txt->Name = L"fname_txt";
			this->fname_txt->Size = System::Drawing::Size(152, 22);
			this->fname_txt->TabIndex = 9;
			// 
			// class_txt
			// 
			this->class_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->class_txt->Location = System::Drawing::Point(180, 196);
			this->class_txt->Name = L"class_txt";
			this->class_txt->Size = System::Drawing::Size(152, 22);
			this->class_txt->TabIndex = 10;
			// 
			// addr
			// 
			this->addr->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addr->Location = System::Drawing::Point(180, 243);
			this->addr->Name = L"addr";
			this->addr->Size = System::Drawing::Size(152, 22);
			this->addr->TabIndex = 11;
			this->addr->TextChanged += gcnew System::EventHandler(this, &Form4::textBox4_TextChanged);
			// 
			// ema
			// 
			this->ema->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ema->Location = System::Drawing::Point(180, 298);
			this->ema->Name = L"ema";
			this->ema->Size = System::Drawing::Size(152, 22);
			this->ema->TabIndex = 12;
			// 
			// phon
			// 
			this->phon->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->phon->Location = System::Drawing::Point(180, 352);
			this->phon->Name = L"phon";
			this->phon->Size = System::Drawing::Size(152, 22);
			this->phon->TabIndex = 13;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 466);
			this->Controls->Add(this->phon);
			this->Controls->Add(this->ema);
			this->Controls->Add(this->addr);
			this->Controls->Add(this->class_txt);
			this->Controls->Add(this->fname_txt);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Blue;
			this->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Name = L"Form4";
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 StreamWriter^ sr= gcnew StreamWriter("Student record.txt",true);
					String^ record_data="";
					String^ str1=id_txt->Text;
					String^ str2=fname_txt->Text;
					String^ str3=class_txt->Text;
					String^ str4=addr->Text;
					String^ str5=ema->Text;
					String^ str6=phon->Text;

					record_data= str1+"|"+str2+"|"+str3+"|"+str4+"|"+str5+"|"+str6;
					sr->WriteLine(record_data);
					sr->Close();
				 MessageBox::Show("Record added successfuly . Do you want to add more ? ","Message",MessageBoxButtons::YesNo,MessageBoxIcon::Question );
			 }
private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void id_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

