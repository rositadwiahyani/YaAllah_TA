#pragma once

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
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		MyForm1(String^ username)
		{
			InitializeComponent();
			this->label6->Text = username; // Contoh: label1 di form menampilkan pesan
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private:System::Windows::Forms::Label^ label1;
	private:System::Windows::Forms::Label^ label2;
	private:System::Windows::Forms::ComboBox^ comboBox1;
	private:System::Windows::Forms::Label^ label3;
	private:System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private:System::Windows::Forms::Label^ label4;
	private:System::Windows::Forms::TextBox^ textBox1;
	private:System::Windows::Forms::Button^ button1;
	private:System::Windows::Forms::ListBox^ listBox1;
	private:System::Windows::Forms::Label^ label5;
	private:System::Windows::Forms::Button^ button2;
	private:System::Windows::Forms::Label^ label6;
	double totalPengeluaran = 0;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 26.75F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(228, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MY MONEY MANAGER";
			// 
			// lblJenis
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(47, 138);
			this->label2->Name = L"lblJenis";
			this->label2->Size = System::Drawing::Size(173, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Jenis Pengeluaran";
			// 
			// cmbJenisPengeluaran
			// 
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Makan", L"Transportasi", L"Belanja",
					L"Hiburan", L"Lainnya"
			});
			this->comboBox1->Location = System::Drawing::Point(51, 165);
			this->comboBox1->Name = L"cmbJenisPengeluaran";
			this->comboBox1->Size = System::Drawing::Size(237, 27);
			this->comboBox1->TabIndex = 4;
			// 
			// lblTanggal
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(47, 224);
			this->label3->Name = L"lblTanggal";
			this->label3->Size = System::Drawing::Size(81, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Tanggal";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(51, 251);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(237, 26);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// lblJumlah
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(47, 315);
			this->label4->Name = L"lblJumlah";
			this->label4->Size = System::Drawing::Size(111, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Jumlah (Rp)";
			// 
			// txtJumlah
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(51, 340);
			this->textBox1->Name = L"txtJumlah";
			this->textBox1->Size = System::Drawing::Size(237, 26);
			this->textBox1->TabIndex = 8;
			// 
			// btnTambah
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(213, 387);
			this->button1->Name = L"btnTambah";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Tambah";
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::OnTambahClick);
			// 
			// List
			// 
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::Black;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(357, 138);
			this->listBox1->Name = L"List";
			this->listBox1->Size = System::Drawing::Size(426, 161);
			this->listBox1->TabIndex = 10;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::List_SelectedIndexChanged);
			// 
			// lblTotal
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(353, 315);
			this->label5->Name = L"lblTotal";
			this->label5->Size = System::Drawing::Size(166, 19);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Total Pengeluaran: Rp 0";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(705, 308);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 29);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::OnDeleteClick);
			// 
			// labelUsername
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(353, 75);
			this->label6->Name = L"labelUsername";
			this->label6->Size = System::Drawing::Size(84, 21);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Username";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(855, 558);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label5);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm1";
			this->Text = L"Money Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lblNama_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lblTanggal_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lblJenis_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void OnDeleteClick(System::Object^ sender, System::EventArgs^ e) {
		if (this->listBox1->SelectedIndex >= 0) {
			this->listBox1->Items->RemoveAt(this->listBox1->SelectedIndex);
			UpdateTotalAfterDelete();
		}
		else {
			MessageBox::Show(L"Pilih item yang ingin dihapus!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void UpdateTotalAfterDelete() {
		double total = 0;

		for (int i = 0; i < this->listBox1->Items->Count; i++) {
			String^ item = this->listBox1->Items[i]->ToString();
			array<String^>^ parts = item->Split('-');
			if (parts->Length >= 4) {
				String^ jumlahStr = parts[3]->Trim()->Substring(3);
				total += Double::Parse(jumlahStr);
			}
		}

		this->label5->Text = L"Total Pengeluaran: Rp " + total;
	}
	private: System::Void OnTambahClick(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ jenis = GetSelectedJenis();
			double jumlah = GetJumlahInput();

			if (!IsValidInput(jenis, jumlah)) {
				return;
			}
			AddPengeluaranToList(jenis, jumlah);
			UpdateTotal();

			ResetFields();
		}
		catch (FormatException^) {
			MessageBox::Show(L"Masukkan jumlah yang valid!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: String^ GetSelectedJenis() {
		return this->comboBox1->SelectedItem == nullptr ? L"" : this->comboBox1->SelectedItem->ToString();
	}
	private: double GetJumlahInput() {
		return Double::Parse(this->textBox1->Text);
	}
	private: bool IsValidInput(String^ jenis, double jumlah) {
		if (String::IsNullOrWhiteSpace(jenis)) {
			MessageBox::Show(L"Nama dan Jenis Pengeluaran wajib diisi!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
	}
		if (jumlah <= 0) {
			MessageBox::Show(L"Jumlah pengeluaran harus lebih besar dari 0!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
	}
		return true;
	}
	private: void AddPengeluaranToList(String^ jenis, double jumlah) {
		String^ pengeluaran = L" - " + this->dateTimePicker1->Value.ToShortDateString() + L" - " + jenis + L" - Rp " + jumlah;
		this->listBox1->Items->Add(pengeluaran);
		this->totalPengeluaran += jumlah;
	}
	private: void UpdateTotal() {
		this->label5->Text = L"Total Pengeluaran: Rp " + this->totalPengeluaran;
	}
	private: void ResetFields() {
		this->comboBox1->SelectedIndex = -1;
		this->textBox1->Text = "";
	}
	private: System::Void List_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
