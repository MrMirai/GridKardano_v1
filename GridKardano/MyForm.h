#pragma once
#include <Windows.h>
#include <iostream>
#include <ctime>
#include <string>
//#include "Kardano.h"

namespace GridKardano {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;





	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;




























	private: System::ComponentModel::IContainer^ components;






	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"LetteraTrentadue", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(138, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Решетка Кардано";
			this->label1->UseCompatibleTextRendering = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(9, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(337, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите сообщение для шифровки, максимум (16) символов: ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(12, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(470, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(159, 98);
			this->trackBar1->Maximum = 15;
			this->trackBar1->Minimum = 2;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(401, 45);
			this->trackBar1->TabIndex = 4;
			this->trackBar1->Value = 2;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(9, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Размерность решетки: (2)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(9, 453);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ключ криптограммы";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox1->Location = System::Drawing::Point(12, 471);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(272, 96);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Location = System::Drawing::Point(287, 453);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Криптограмма";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox2->Location = System::Drawing::Point(290, 471);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(273, 96);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Teal;
			this->button1->Location = System::Drawing::Point(457, 610);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Teal;
			this->button2->Location = System::Drawing::Point(13, 579);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Сохранить криптограмму";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Teal;
			this->button3->Location = System::Drawing::Point(13, 610);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Сохранить ключ криптограммы";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Teal;
			this->button4->Location = System::Drawing::Point(488, 75);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Шифровать";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label6->Location = System::Drawing::Point(454, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::Teal;
			this->button5->Location = System::Drawing::Point(457, 579);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 23);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Расшифровать";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::Teal;
			this->button6->Location = System::Drawing::Point(205, 579);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 23);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Загрузить криптограмму";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Teal;
			this->button7->Location = System::Drawing::Point(205, 610);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(186, 23);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Загрузить ключ криптограммы";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::GrayText;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->GridColor = System::Drawing::Color::MediumTurquoise;
			this->dataGridView1->Location = System::Drawing::Point(12, 130);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->dataGridView1->Size = System::Drawing::Size(547, 310);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 21;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 21;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 21;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(575, 645);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->label6->Text = textBox1->Text->Length.ToString();
	}

	//Шифрование
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int val = trackBar1->Value;
		dataGridView1->RowCount = val * 2;
		dataGridView1->ColumnCount = val * 2;
		int k; //Размерность решетки
		k = trackBar1->Value;
		int N = 2 * k; //Размерность конечной решетки
		int N1 = k * k; //Длинна ключа для заполнения нулями
		///////////////////////////////////////////////// Сообщение (максимальная длинна 4k^2)
		///ТЕКСТПОСЛЕШИФРОВАНИЯСТАНЕТНЕПОНЯТНЫМ
		String^ str;
		String^ str2; //строка для вывода 2
		String^ str3; //строка для вывода 1
		str = this->textBox1->Text;
		///////////////////////////////////////////////// Создание малой решетки (Размерность k * k)
		//TextBox ^T = gcnew TextBox();
		array<int ^, 2>^sqr = gcnew array<int ^, 2>(k, k);
		
		int tmp = 0; //Переменная для заполнения решетки
		for (int i = 0; i < k; i++) { //заполнение решетки
			for (int j = 0; j < k; j++){
				sqr[i, j] = ++tmp;
				this->dataGridView1->Rows[i]->Cells[j]->Value = tmp;
			}
		}
		
		///////////////////////////////////////////////// Создание решетки (Размерность 2k * 2k)
		array<int^, 2>^ kardano = gcnew array<int^, 2>(N, N);
		///////////////////////////////////////////////// Ключ для заполнения нулями (длинна ключа k * k)
		array<int>^ key = gcnew array<int>(N1);
		for (int i = 0; i < N1; i++)
		{
			key[i] = 1 + rand() % 4;
		}
		/// Вывод
		for (int i = 0; i < N1; i++)
				str3 += Convert::ToString(key[i]);
		this->richTextBox1->Text = str3;
		///////////////////////////////////////////////// Закодированные сообщение
		int** shifr = new int* [N];
		for (int i = 0; i < N; i++)
			shifr[i] = new int[N];
		for (int i = 0; i < N; i++) { //заполнение нулями
			for (int j = 0; j < N; j++)
				shifr[i][j] = '0';
		}
		//for (int i = 0; i < N; i++) { //заполнение нулями
		//	for (int j = 0; j < N; j++)
		//		shifr[i, j] = '0';
		//}
		/////////////////////////////////////////////////
		///////////////////////////KardanoFill///////////////////
		for (int tmp1 = 1; tmp1 <= 4; tmp1++) {
		int ii = 0, jj;
			if (tmp1 == 1)
				for (int i = 0; i < N / 2; i++) {
					jj = 0;
					for (int j = 0; j < N / 2; j++)
					{
						kardano[i, j] = sqr[ii, jj];
						this->dataGridView1->Rows[i]->Cells[j]->Value = sqr[ii,jj];
						
						++jj;
					}
					++ii;
				}
			if (tmp1 == 2)
				for (int i = 0; i < N / 2; i++) {
					jj = 0;
					for (int j = N / 2; j < N; j++)
					{
						kardano[i, j] = sqr[ii, jj];
						this->dataGridView1->Rows[i]->Cells[j]->Value = sqr[ii, jj];
						++jj;
					}
					++ii;
				}
			if (tmp1 == 3)
				for (int i = N / 2; i < N; i++) {
					jj = 0;
					for (int j = N / 2; j < N; j++)
					{
						kardano[i, j] = sqr[ii, jj];
						this->dataGridView1->Rows[i]->Cells[j]->Value = sqr[ii, jj];
						++jj;
					}
					++ii;
				}
			if (tmp1 == 4)
				for (int i = N / 2; i < N; i++) {
					jj = 0;
					for (int j = 0; j < N / 2; j++)
					{
						kardano[i, j] = sqr[ii, jj];
						this->dataGridView1->Rows[i]->Cells[j]->Value = sqr[ii, jj];
						++jj;
					}
					++ii;
				}
			/////GridFlip(sqr, k)///
			for (int i = 0; i < k / 2; i++) {
				for (int j = i; j < k - 1 - i; j++) {
					int tmp = static_cast<int>(sqr[i, j]);
					sqr[i, j] = sqr[k - j - 1, i];
					sqr[k - j - 1, i] = sqr[k - i - 1, k - j - 1];
					sqr[k - i - 1, k - j - 1] = sqr[j, k - i - 1];
					sqr[j, k - i - 1] = tmp;
				}
			}
			///////////////////////
		}
		/////////////////////////////////////////////////
		///////////////////////////Holes///////////////////
		for (int tmp1 = 0; tmp1 < N1; tmp1++) {
			if (key[tmp1] == 1)
				for (int i = 0; i < N / 2; i++) {
					for (int j = 0; j < N / 2; j++)
					{
						if (static_cast<int>(kardano[i, j]) == tmp1 + 1){
							kardano[i, j] = 0;
							this->dataGridView1->Rows[i]->Cells[j]->Value = 0;

						}
					}
				}
			else if (key[tmp1] == 2)
				for (int i = 0; i < N / 2; i++) {
					for (int j = N / 2; j < N; j++)
					{
						if (static_cast<int>(kardano[i, j]) == tmp1 + 1){
							kardano[i, j] = 0;
							this->dataGridView1->Rows[i]->Cells[j]->Value = 0;
						}
					}
				}
			else if (key[tmp1] == 3)
				for (int i = N / 2; i < N; i++) {
					for (int j = N / 2; j < N; j++)
					{
						if (static_cast<int>(kardano[i, j]) == tmp1 + 1){
							kardano[i, j] = 0;
							this->dataGridView1->Rows[i]->Cells[j]->Value = 0;;
						}
					}
				}
			else if (key[tmp1] == 4)
				for (int i = N / 2; i < N; i++) {
					for (int j = 0; j < N / 2; j++)
					{
						if (static_cast<int>(kardano[i, j]) == tmp1 + 1){
							kardano[i, j] = 0;
							this->dataGridView1->Rows[i]->Cells[j]->Value = 0;
						}
					}
				}
		}
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (static_cast<int>(kardano[i, j]) != 0){
					kardano[i, j] = 1;
					this->dataGridView1->Rows[i]->Cells[j]->Value = 1;
				}
		///////////////////////////////////////////////////
		////////////////encription(str, kardano, shifr, N)/////////////////////////
		{
			int k = 0;
			for (int tmp = 0; tmp < 4; tmp++) {
				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++)
					{
						if (static_cast<int>(kardano[i, j]) == 0 && k < str->Length) {
							shifr[i][j] = str[k];
							this->dataGridView1->Rows[i]->Cells[j]->Value = str[k];
							k++;
						}
					}
				}
				//////gridflip(kardano, N)
				for (int i = 0; i < N / 2; i++) {
					for (int j = i; j < N - 1 - i; j++) {
						int k = static_cast<int>(kardano[i, j]);
						kardano[i, j] = kardano[N - j - 1, i];
						kardano[N - j - 1, i] = kardano[N - i - 1, N - j - 1];
						kardano[N - i - 1, N - j - 1] = kardano[j, N - i - 1];
						kardano[j, N - i - 1] = k;
					}
				}
			}
			for (int i = 0; i < N; i++)
				for (int j = 0; j < N; j++)
				{
					if (shifr[i][j] == '0'){
						shifr[i][j] = rand() % 94 + 32;
						this->dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToChar(shifr[i][j]);
					}
				}
		}
		
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				str2 += Convert::ToChar(shifr[i][j]);
		this->richTextBox2->Text = str2;
		
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int val = trackBar1->Value;
		int val2 = textBox1->Text->Length;
		label2->Text = String::Format("Введите сообщение для шифровки, максимум ({0}) символов: ", val*val*4);
		label3->Text = String::Format("Размерность решетки: ({0})", trackBar1->Value);
		dataGridView1->RowCount = val * 2;
		dataGridView1->ColumnCount = val * 2;
	}
	//Выход
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // Сохранение криптограммы
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "TextFiles (*.txt)|*.txt|All files(*.*)|*.*";
		saveFileDialog1->Title = "Сохранить криптограмму";
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->FileName = "Сryptogram";
		saveFileDialog1->FilterIndex = 1;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox2->Text);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // Сохранение ключа криптограммы
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "TextFiles (*.txt)|*.txt|All files(*.*)|*.*";
		saveFileDialog1->Title = "Сохранить ключ криптограммы";
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->FileName = "СryptogramKey";
		saveFileDialog1->FilterIndex = 1;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int k; //Размерность решетки
	k = sqrt(this->richTextBox2->Text->Length / 4);
	int N = 2 * k; //Размерность конечной решетки
	int N1 = k * k; //Длинна ключа для заполнения нулями
	///////////////////////////////////////////////// Сообщение (максимальная длинна 4k^2)
	///ТЕКСТПОСЛЕШИФРОВАНИЯСТАНЕТНЕПОНЯТНЫМ
	String^ str;
	String^ str2; //строка для вывода 2
	String^ str3; //строка для вывода 1
	///////////////////////////////////////////////// Создание малой решетки (Размерность k * k)
	//TextBox ^T = gcnew TextBox();
	array<int^, 2>^ sqr = gcnew array<int^, 2>(k, k);
	{
		int tmp = 0; //Переменная для заполнения решетки
		for (int i = 0; i < k; i++) { //заполнение решетки
			for (int j = 0; j < k; j++)
				sqr[i, j] = ++tmp;
		}
	}
	///////////////////////////////////////////////// Создание решетки (Размерность 2k * 2k)
	array<int^, 2>^ kardano = gcnew array<int^, 2>(N, N);
	///////////////////////////////////////////////// Ключ для заполнения нулями (длинна ключа k * k)
	array<int>^ key = gcnew array<int>(N1);
	{
		int tmp = 0;
		for (int i = 0; i < N1; i++)
		{
			key[i] = richTextBox1->Text[tmp++] - 48;
		}
	}
	///////////////////////////////////////////////// Закодированное сообщение
	int** shifr = new int* [N];
	for (int i = 0; i < N; i++)
		shifr[i] = new int[N];
	{
		int tmp = 0;
		for (int i = 0; i < N; i++) { //заполнение нулями
			for (int j = 0; j < N; j++)
				shifr[i][j] = richTextBox2->Text[tmp++];
		}
	}
	///////////////////////////KardanoFill///////////////////
	for (int tmp1 = 1; tmp1 <= 4; tmp1++) {
		int ii = 0, jj;
		if (tmp1 == 1)
			for (int i = 0; i < N / 2; i++) {
				jj = 0;
				for (int j = 0; j < N / 2; j++)
				{
					kardano[i, j] = sqr[ii, jj];
					++jj;
				}
				++ii;
			}
		if (tmp1 == 2)
			for (int i = 0; i < N / 2; i++) {
				jj = 0;
				for (int j = N / 2; j < N; j++)
				{
					kardano[i, j] = sqr[ii, jj];
					++jj;
				}
				++ii;
			}
		if (tmp1 == 3)
			for (int i = N / 2; i < N; i++) {
				jj = 0;
				for (int j = N / 2; j < N; j++)
				{
					kardano[i, j] = sqr[ii, jj];
					++jj;
				}
				++ii;
			}
		if (tmp1 == 4)
			for (int i = N / 2; i < N; i++) {
				jj = 0;
				for (int j = 0; j < N / 2; j++)
				{
					kardano[i, j] = sqr[ii, jj];
					++jj;
				}
				++ii;
			}
		/////GridFlip(sqr, k)///
		for (int i = 0; i < k / 2; i++) {
			for (int j = i; j < k - 1 - i; j++) {
				int tmp = static_cast<int>(sqr[i, j]);
				sqr[i, j] = sqr[k - j - 1, i];
				sqr[k - j - 1, i] = sqr[k - i - 1, k - j - 1];
				sqr[k - i - 1, k - j - 1] = sqr[j, k - i - 1];
				sqr[j, k - i - 1] = tmp;
			}
		}
		///////////////////////
	}
	/////////////////////////////////////////////////
	///////////////////////////Holes///////////////////
	for (int tmp1 = 0; tmp1 < N1; tmp1++) {
		if (key[tmp1] == 1)
			for (int i = 0; i < N / 2; i++) {
				for (int j = 0; j < N / 2; j++)
				{
					if (static_cast<int>(kardano[i, j]) == tmp1 + 1)
						kardano[i, j] = 0;
				}
			}
		else if (key[tmp1] == 2)
			for (int i = 0; i < N / 2; i++) {
				for (int j = N / 2; j < N; j++)
				{
					if (static_cast<int>(kardano[i, j]) == tmp1 + 1)
						kardano[i, j] = 0;
				}
			}
		else if (key[tmp1] == 3)
			for (int i = N / 2; i < N; i++) {
				for (int j = N / 2; j < N; j++)
				{
					if (static_cast<int>(kardano[i, j]) == tmp1 + 1)
						kardano[i, j] = 0;
				}
			}
		else if (key[tmp1] == 4)
			for (int i = N / 2; i < N; i++) {
				for (int j = 0; j < N / 2; j++)
				{
					if (static_cast<int>(kardano[i, j]) == tmp1 + 1)
						kardano[i, j] = 0;

				}
			}
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (static_cast<int>(kardano[i, j]) != 0)
				kardano[i, j] = 1;
	///////////////////////////////////////////////////
	{
		
	int k = 0;
	for (int tmp = 0; tmp < 4; tmp++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
			{
				if (static_cast<int>(kardano[i, j]) == 0 && k < richTextBox2->Text->Length) {
					str += Convert::ToChar(shifr[i][j]);
					k++;
				}
			}
		}
		//////gridflip(kardano, N)
		for (int i = 0; i < N / 2; i++) {
			for (int j = i; j < N - 1 - i; j++) {
				int k = static_cast<int>(kardano[i, j]);
				kardano[i, j] = kardano[N - j - 1, i];
				kardano[N - j - 1, i] = kardano[N - i - 1, N - j - 1];
				kardano[N - i - 1, N - j - 1] = kardano[j, N - i - 1];
				kardano[j, N - i - 1] = k;
			}
		}
	}
	}
	this->textBox1->Text = str;
}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // Загрузка криптограммы
		System::IO::Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				myStream->Close();
				this->richTextBox2->Text = System::IO::File::ReadAllText(openFileDialog1->FileName, System::Text::Encoding::UTF8);
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { // Загрузка ключа криптограммы
		System::IO::Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				myStream->Close();
				this->richTextBox1->Text = System::IO::File::ReadAllText(openFileDialog1->FileName, System::Text::Encoding::UTF8);
			}
		}
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
