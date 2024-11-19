#pragma once
#include "MyForm1.h"

namespace YaAllahTA {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm (void)
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
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label7;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(78, 127);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(136, 44);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Sign In";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(83, 208);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(73, 17);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Username";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::Black;
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::Color::White;
            this->textBox1->Location = System::Drawing::Point(86, 238);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(246, 16);
            this->textBox1->TabIndex = 2;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(90, 275);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 20);
            this->label3->TabIndex = 3;
            // 
            // panel1
            // 
            this->panel1->Location = System::Drawing::Point(86, 252);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(246, 2);
            this->panel1->TabIndex = 4;
            // 
            // panel2
            // 
            this->panel2->Location = System::Drawing::Point(86, 339);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(246, 2);
            this->panel2->TabIndex = 8;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(90, 363);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 20);
            this->label4->TabIndex = 7;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::Black;
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::Color::White;
            this->textBox2->Location = System::Drawing::Point(86, 325);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(246, 16);
            this->textBox2->TabIndex = 6;
            this->textBox2->UseSystemPasswordChar = true;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(87, 295);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(69, 17);
            this->label5->TabIndex = 5;
            this->label5->Text = L"Password";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Black;
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button2->ForeColor = System::Drawing::Color::White;
            this->button2->Location = System::Drawing::Point(240, 408);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(138, 44);
            this->button2->TabIndex = 14;
            this->button2->Text = L"Exit";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Blue;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(90, 408);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(138, 44);
            this->button1->TabIndex = 13;
            this->button1->Text = L"Sign in";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(441, 166);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(0, 20);
            this->label7->TabIndex = 15;
            // 
            // MyForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(855, 558);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"MyForm1";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ username = textBox1->Text;
        String^ password = textBox2->Text;

        if (username == "Rosita" && password == "123456") {
            this->Hide();
            MyForm1^ form1 = gcnew MyForm1("Welcome " + username + "!!!");
            form1->ShowDialog();
           
        }
        else if (username != "Rosita") {
            MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else if (password != "123456") {
            MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Chris", "Kelompok xx", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}

    };
}
