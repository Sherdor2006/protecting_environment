#pragma once
#include "form3.h"



namespace protecting_environment_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

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


	protected: 


	private: System::Windows::Forms::Panel^  panel2;









	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  btnAdddata;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Panel^  panel3;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;








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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnAdddata = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Lime;
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(12, 188);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(736, 514);
			this->panel2->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 316);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(689, 184);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 258);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 29);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Ekilgan hudud";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(22, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 29);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Umumiy summa";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 29);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Daraxt turi";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Daraxt soni";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Yil";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(285, 23);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(429, 43);
			this->textBox3->TabIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(284, 258);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(429, 43);
			this->textBox6->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(284, 196);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(429, 43);
			this->textBox5->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(284, 136);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(429, 43);
			this->textBox4->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(285, 81);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(429, 43);
			this->textBox2->TabIndex = 0;
			// 
			// btnAdddata
			// 
			this->btnAdddata->Location = System::Drawing::Point(17, 23);
			this->btnAdddata->Name = L"btnAdddata";
			this->btnAdddata->Size = System::Drawing::Size(116, 75);
			this->btnAdddata->TabIndex = 0;
			this->btnAdddata->Text = L"Add Data";
			this->btnAdddata->UseVisualStyleBackColor = true;
			this->btnAdddata->Click += gcnew System::EventHandler(this, &Form1::btnAdddata_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(17, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 101);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Yaratuvchi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Lime;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->btnAdddata);
			this->panel1->Location = System::Drawing::Point(768, 188);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(142, 514);
			this->panel1->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(17, 422);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 68);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(17, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 60);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Reset";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 67);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Lime;
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(12, 25);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(736, 139);
			this->panel3->TabIndex = 8;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel3_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(548, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 46);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(496, 49);
			this->textBox1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Lime;
			this->panel4->Controls->Add(this->button1);
			this->panel4->Location = System::Drawing::Point(768, 25);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(142, 139);
			this->panel4->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Red;
			this->ClientSize = System::Drawing::Size(922, 714);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Name = L"Form1";
			this->Text = L"Daraxtlarning kesilishini oldini olish";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int checker;
		Bitmap^ bitmap;
		void ConnectionDB()
		{
			OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\sherd\\OneDrive\\Desktop\\vs\\protecting_environment_1\\EnvironmentSH.mdb");
		
			 try 
				 {
				 conn ->Open();
				 OleDbCommand^ cmd = conn->CreateCommand();
				 cmd->CommandType = CommandType::Text;
				 cmd->CommandText= "SELECT * FROM  Information";
				 cmd->ExecuteNonQuery();

				 DataTable^ dt = gcnew DataTable();
				 OleDbDataAdapter^ dp  =gcnew OleDbDataAdapter(cmd);
				 dp->Fill(dt);
				 dataGridView1->DataSource = dt;
				 conn->Close();
				  MessageBox::Show("Connection is  successful","C++ Access Database Connector",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
				 
				 catch(Exception^ ex)
				 {
				 MessageBox::Show(ex ->Message,"C++ Access Database Connector",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 }
		
		}
		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 try 
				 {
				 //conn ->Open();
				  //MessageBox::Show("Connection successful","C++ Access Database Connector",MessageBoxButtons::OK,MessageBoxIcon::Error);
					 ConnectionDB();
				 }
				 catch(Exception^ ex)
				 {
				 MessageBox::Show(ex ->Message,"C++ Access Database Connector",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 }
			 }
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				
		 }
private: System::Void txtExit_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void btnAdddata_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        OleDbConnection^ conn = gcnew OleDbConnection(
            "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\sherd\\OneDrive\\Desktop\\vs\\protecting_environment_1\\EnvironmentSH.mdb");
        conn->Open();

        OleDbCommand^ cmd = conn->CreateCommand();
        cmd->CommandType = CommandType::Text;

        // Assuming you want to insert an empty value for Ekilgan hududi
      cmd->CommandText = "INSERT INTO Information ([Yil], [Daraxt soni], [Daraxt turi], [Umumiy summa], [Ekilgan hududi]) " +
                   "VALUES (?, ?, ?, ?, ?)";
cmd->Parameters->AddWithValue("?", textBox3->Text);
cmd->Parameters->AddWithValue("?", textBox2->Text);
cmd->Parameters->AddWithValue("?", textBox4->Text);
cmd->Parameters->AddWithValue("?", textBox5->Text);
cmd->Parameters->AddWithValue("?", textBox6->Text);

        cmd->ExecuteNonQuery();
        conn->Close();

        MessageBox::Show("Record is successfully added", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Information);
        ConnectionDB();
    } catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Form3 ^Form3_ga = gcnew Form3();
				  Form3_ga->Show();  
		 }
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  try{
				 System::Windows::Forms::DialogResult iClose;
				 iClose =   MessageBox::Show("Confirm if you want to exit", "C++ Access Database Connector", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if(iClose ==  System::Windows::Forms::DialogResult::Yes){
				 Close();
				 }
			 }

		
		 catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			   try{
				 System::Windows::Forms::DialogResult iReset;
				 iReset =   MessageBox::Show("Confirm if you want to reset", "C++ Access Database Connector", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if(iReset ==  System::Windows::Forms::DialogResult::Yes){
				  textBox3->Text ="";
					 textBox2->Text=""; 
					 textBox4->Text =""; 
					 textBox5->Text ="";
					 textBox6->Text ="";
					  textBox1->Text ="";

					    MessageBox::Show("You have successfully reset your system", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Information);
        ConnectionDB();
				 }
			 }

		
		 catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
		 }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        OleDbConnection^ conn = gcnew OleDbConnection(
            "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\sherd\\OneDrive\\Desktop\\vs\\protecting_environment_1\\EnvironmentSH.mdb");
        conn->Open();
        OleDbCommand^ cmd = conn->CreateCommand();
        cmd->CommandType = CommandType::Text;

        String^ searchValue = textBox1->Text;

        // Search across all fields
        cmd->CommandText =
            "SELECT * FROM Information WHERE " +
            "[Yil] = '" + searchValue + "' OR " +
            "[Daraxt soni] = '" + searchValue + "' OR " +
            "[Daraxt turi] = '" + searchValue + "' OR " +
            "[Umumiy summa] = '" + searchValue + "' OR " +
            "[Ekilgan hududi] = '" + searchValue + "'";

        OleDbDataReader^ reader = cmd->ExecuteReader();
        if (reader->Read()) {
            // Fill other textboxes with found record
            textBox3->Text = reader["Yil"]->ToString();
            textBox2->Text = reader["Daraxt soni"]->ToString();
            textBox4->Text = reader["Daraxt turi"]->ToString();
            textBox5->Text = reader["Umumiy summa"]->ToString();
            textBox6->Text = reader["Ekilgan hududi"]->ToString();

            MessageBox::Show("Record found.", "Search", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else {
            MessageBox::Show("No record found.", "Search", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }

        conn->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Search Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    try {
        if (e->RowIndex >= 0) { // ensure it's a valid row
            DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

            textBox3->Text = row->Cells[0]->Value != nullptr ? row->Cells[0]->Value->ToString() : "";
            textBox2->Text = row->Cells[1]->Value != nullptr ? row->Cells[1]->Value->ToString() : "";
            textBox4->Text = row->Cells[2]->Value != nullptr ? row->Cells[2]->Value->ToString() : "";
            textBox5->Text = row->Cells[3]->Value != nullptr ? row->Cells[3]->Value->ToString() : "";
            textBox6->Text = row->Cells[4]->Value != nullptr ? row->Cells[4]->Value->ToString() : "";
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
    try {
        // O‘zgaruvchilar
        int yil, daraxtSoni;
        double umumiySumma;

        // Ma'lumotlarni tekshirish
        if (!Int32::TryParse(textBox3->Text, yil)) {
            MessageBox::Show("Yil raqam bo‘lishi kerak.", "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!Int32::TryParse(textBox2->Text, daraxtSoni)) {
            MessageBox::Show("Daraxt soni raqam bo‘lishi kerak.", "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!Double::TryParse(textBox5->Text, umumiySumma)) {
            MessageBox::Show("Umumiy summa raqam bo‘lishi kerak.", "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        // Qolgan matnli maydonlar
        String^ daraxtTuri = textBox4->Text->Trim();
        String^ ekilganHudud = textBox6->Text->Trim();

        // Aloqa
        String^ connStr = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\sherd\\OneDrive\\Desktop\\vs\\protecting_environment_1\\EnvironmentSH.mdb";
        OleDbConnection^ conn = gcnew OleDbConnection(connStr);
        conn->Open();

        // Yil bo‘yicha mavjud yozuv bormi?
        String^ checkQuery = "SELECT COUNT(*) FROM Information WHERE [Yil] = ?";
        OleDbCommand^ checkCmd = gcnew OleDbCommand(checkQuery, conn);
        checkCmd->Parameters->AddWithValue("?", yil);
        int count = Convert::ToInt32(checkCmd->ExecuteScalar());

        if (count == 0) {
            // Yangi yozuv kiritish
            String^ insertQuery = "INSERT INTO Information ([Yil], [Daraxt soni], [Daraxt turi], [Umumiy summa], [Ekilgan hududi]) VALUES (?, ?, ?, ?, ?)";
            OleDbCommand^ insertCmd = gcnew OleDbCommand(insertQuery, conn);
            insertCmd->Parameters->AddWithValue("?", yil);
            insertCmd->Parameters->AddWithValue("?", daraxtSoni);
            insertCmd->Parameters->AddWithValue("?", daraxtTuri);
            insertCmd->Parameters->AddWithValue("?", umumiySumma);
            insertCmd->Parameters->AddWithValue("?", ekilganHudud);

            insertCmd->ExecuteNonQuery();
            MessageBox::Show("Yangi yozuv qo‘shildi.", "Ma'lumot", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else {
            // Yozuvni yangilash
            String^ updateQuery = "UPDATE Information SET [Daraxt soni] = ?, [Daraxt turi] = ?, [Umumiy summa] = ?, [Ekilgan hududi] = ? WHERE [Yil] = ?";
            OleDbCommand^ updateCmd = gcnew OleDbCommand(updateQuery, conn);
            updateCmd->Parameters->AddWithValue("?", daraxtSoni);
            updateCmd->Parameters->AddWithValue("?", daraxtTuri);
            updateCmd->Parameters->AddWithValue("?", umumiySumma);
            updateCmd->Parameters->AddWithValue("?", ekilganHudud);
            updateCmd->Parameters->AddWithValue("?", yil);

            updateCmd->ExecuteNonQuery();
            MessageBox::Show("Yozuv yangilandi.", "Yangilash", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }

        conn->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Xatolik: " + ex->Message, "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
};
}

