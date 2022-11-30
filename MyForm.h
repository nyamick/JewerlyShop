#pragma once

#include <msclr\marshal_cppstd.h>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdio>

namespace Kks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pnlHowTo->Hide();
			pnlTask->Hide();
			pnlBook->Hide();
			pnlAdd->Hide();
			pnlEdit->Hide();
			pnlShowResult->Hide();
			tbTask->Enabled = false;
			lblinfo1->Hide();
			lblinfo2->Hide();
			lblinfo3->Hide();
			lblinfo4->Hide();
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

	private: System::Windows::Forms::Button^ btnAbout;
	private: System::Windows::Forms::Button^ btnTask;




	private: System::Windows::Forms::Button^ btnHowTo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBookOpen;
	private: System::Windows::Forms::Button^ btnExit;



	private: System::Windows::Forms::Label^ lblinfo1;
	private: System::Windows::Forms::Label^ lblinfo2;
	private: System::Windows::Forms::Panel^ pnlHowTo;
	private: System::Windows::Forms::Button^ HowToMenu;

	private: System::Windows::Forms::Panel^ pnlTask;
	private: System::Windows::Forms::Button^ btnTaskMenu;
	private: System::Windows::Forms::TextBox^ tbTask;
	private: System::Windows::Forms::Panel^ pnlBook;




	private: System::Windows::Forms::Button^ btnBookMenu;




	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ btnSearch;



	private: System::Windows::Forms::Button^ btnToAdd;
	private: System::Windows::Forms::Label^ SubjectName;
	private: System::Windows::Forms::Panel^ pnlAdd;











	private: System::Windows::Forms::Label^ lblRock1;







	private: System::Windows::Forms::TextBox^ tbWeight;














private: System::Windows::Forms::Label^ lblWeight;

private: System::Windows::Forms::TextBox^ tbProduct;





private: System::Windows::Forms::Label^ lblProduct;
private: System::Windows::Forms::Label^ lblPrice;
private: System::Windows::Forms::TextBox^ tbPrice;











	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnAddMenu;
private: System::Windows::Forms::Panel^ pnlShowResult;


















private: System::Windows::Forms::Button^ btnResultsToBook;
private: System::Windows::Forms::TextBox^ tbPriceShow;
private: System::Windows::Forms::TextBox^ tbNameShow;
private: System::Windows::Forms::TextBox^ tbFactureShow;





private: System::Windows::Forms::TextBox^ tbWeightShow;


private: System::Windows::Forms::Label^ lblFacture;
private: System::Windows::Forms::TextBox^ tbFacture;
private: System::Windows::Forms::Label^ lblMaterial;
private: System::Windows::Forms::TextBox^ tbMaterial;
private: System::Windows::Forms::TextBox^ tbMaterialShow;
private: System::Windows::Forms::TextBox^ tbRockShow;













private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ btnAll;
private: System::Windows::Forms::Button^ btnDelete;
private: System::Windows::Forms::Button^ btnEdit;
private: System::Windows::Forms::Panel^ pnlEdit;
private: System::Windows::Forms::Label^ lblMaterial1;
private: System::Windows::Forms::TextBox^ tbMaterial1;



private: System::Windows::Forms::Label^ lblFacture1;
private: System::Windows::Forms::TextBox^ tbFacture1;




private: System::Windows::Forms::Label^ lblRockEd;



private: System::Windows::Forms::TextBox^ tbWeight1;

private: System::Windows::Forms::Label^ lblWeight1;
private: System::Windows::Forms::TextBox^ tbProductEdit;



private: System::Windows::Forms::Label^ lblProduct1;
private: System::Windows::Forms::Label^ lblPrice1;
private: System::Windows::Forms::TextBox^ tbPrice1;



private: System::Windows::Forms::Button^ btnEditForm;
private: System::Windows::Forms::Button^ btnEditFormMenu1;
private: System::Windows::Forms::Label^ lblinfo4;
private: System::Windows::Forms::Label^ lblinfo3;
private: System::Windows::Forms::TextBox^ tbHowTo;
private: System::Windows::Forms::TextBox^ tbRWeightEdit;
private: System::Windows::Forms::Label^ lblRWeightEd;




private: System::Windows::Forms::TextBox^ tbRock2;

private: System::Windows::Forms::TextBox^ tbRWeight1;
private: System::Windows::Forms::TextBox^ tbRock1;
private: System::Windows::Forms::Label^ lblRWeight1;
private: System::Windows::Forms::TextBox^ tbRockWeightShow;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;













































	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->btnTask = (gcnew System::Windows::Forms::Button());
			this->btnHowTo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBookOpen = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblinfo1 = (gcnew System::Windows::Forms::Label());
			this->lblinfo2 = (gcnew System::Windows::Forms::Label());
			this->pnlHowTo = (gcnew System::Windows::Forms::Panel());
			this->tbHowTo = (gcnew System::Windows::Forms::TextBox());
			this->HowToMenu = (gcnew System::Windows::Forms::Button());
			this->pnlAdd = (gcnew System::Windows::Forms::Panel());
			this->tbRWeight1 = (gcnew System::Windows::Forms::TextBox());
			this->tbRock1 = (gcnew System::Windows::Forms::TextBox());
			this->lblRWeight1 = (gcnew System::Windows::Forms::Label());
			this->lblMaterial = (gcnew System::Windows::Forms::Label());
			this->tbMaterial = (gcnew System::Windows::Forms::TextBox());
			this->lblFacture = (gcnew System::Windows::Forms::Label());
			this->tbFacture = (gcnew System::Windows::Forms::TextBox());
			this->lblRock1 = (gcnew System::Windows::Forms::Label());
			this->tbWeight = (gcnew System::Windows::Forms::TextBox());
			this->lblWeight = (gcnew System::Windows::Forms::Label());
			this->tbProduct = (gcnew System::Windows::Forms::TextBox());
			this->lblProduct = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnAddMenu = (gcnew System::Windows::Forms::Button());
			this->pnlBook = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAll = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnToAdd = (gcnew System::Windows::Forms::Button());
			this->SubjectName = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnBookMenu = (gcnew System::Windows::Forms::Button());
			this->pnlTask = (gcnew System::Windows::Forms::Panel());
			this->btnTaskMenu = (gcnew System::Windows::Forms::Button());
			this->tbTask = (gcnew System::Windows::Forms::TextBox());
			this->pnlShowResult = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbRockWeightShow = (gcnew System::Windows::Forms::TextBox());
			this->tbRockShow = (gcnew System::Windows::Forms::TextBox());
			this->tbMaterialShow = (gcnew System::Windows::Forms::TextBox());
			this->tbFactureShow = (gcnew System::Windows::Forms::TextBox());
			this->tbWeightShow = (gcnew System::Windows::Forms::TextBox());
			this->tbPriceShow = (gcnew System::Windows::Forms::TextBox());
			this->tbNameShow = (gcnew System::Windows::Forms::TextBox());
			this->btnResultsToBook = (gcnew System::Windows::Forms::Button());
			this->pnlEdit = (gcnew System::Windows::Forms::Panel());
			this->tbRWeightEdit = (gcnew System::Windows::Forms::TextBox());
			this->lblRWeightEd = (gcnew System::Windows::Forms::Label());
			this->tbRock2 = (gcnew System::Windows::Forms::TextBox());
			this->lblMaterial1 = (gcnew System::Windows::Forms::Label());
			this->tbMaterial1 = (gcnew System::Windows::Forms::TextBox());
			this->lblFacture1 = (gcnew System::Windows::Forms::Label());
			this->tbFacture1 = (gcnew System::Windows::Forms::TextBox());
			this->lblRockEd = (gcnew System::Windows::Forms::Label());
			this->tbWeight1 = (gcnew System::Windows::Forms::TextBox());
			this->lblWeight1 = (gcnew System::Windows::Forms::Label());
			this->tbProductEdit = (gcnew System::Windows::Forms::TextBox());
			this->lblProduct1 = (gcnew System::Windows::Forms::Label());
			this->lblPrice1 = (gcnew System::Windows::Forms::Label());
			this->tbPrice1 = (gcnew System::Windows::Forms::TextBox());
			this->btnEditForm = (gcnew System::Windows::Forms::Button());
			this->btnEditFormMenu1 = (gcnew System::Windows::Forms::Button());
			this->lblinfo4 = (gcnew System::Windows::Forms::Label());
			this->lblinfo3 = (gcnew System::Windows::Forms::Label());
			this->pnlHowTo->SuspendLayout();
			this->pnlAdd->SuspendLayout();
			this->pnlBook->SuspendLayout();
			this->pnlTask->SuspendLayout();
			this->pnlShowResult->SuspendLayout();
			this->pnlEdit->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAbout
			// 
			this->btnAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAbout->FlatAppearance->BorderSize = 0;
			this->btnAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAbout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAbout->Location = System::Drawing::Point(59, 408);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(701, 69);
			this->btnAbout->TabIndex = 1;
			this->btnAbout->Text = L"О программе";
			this->btnAbout->UseVisualStyleBackColor = false;
			this->btnAbout->Click += gcnew System::EventHandler(this, &MyForm::btnAbout_Click);
			// 
			// btnTask
			// 
			this->btnTask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnTask->FlatAppearance->BorderSize = 0;
			this->btnTask->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTask->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTask->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnTask->Location = System::Drawing::Point(59, 331);
			this->btnTask->Name = L"btnTask";
			this->btnTask->Size = System::Drawing::Size(701, 71);
			this->btnTask->TabIndex = 2;
			this->btnTask->Text = L"Задание";
			this->btnTask->UseVisualStyleBackColor = false;
			this->btnTask->Click += gcnew System::EventHandler(this, &MyForm::btnTask_Click);
			// 
			// btnHowTo
			// 
			this->btnHowTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnHowTo->FlatAppearance->BorderSize = 0;
			this->btnHowTo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHowTo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnHowTo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnHowTo->Location = System::Drawing::Point(59, 485);
			this->btnHowTo->Name = L"btnHowTo";
			this->btnHowTo->Size = System::Drawing::Size(701, 70);
			this->btnHowTo->TabIndex = 3;
			this->btnHowTo->Text = L"Руководство";
			this->btnHowTo->UseVisualStyleBackColor = false;
			this->btnHowTo->Click += gcnew System::EventHandler(this, &MyForm::btnHowTo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(257, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 46);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Справочник ювелира";
			// 
			// btnBookOpen
			// 
			this->btnBookOpen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnBookOpen->FlatAppearance->BorderSize = 0;
			this->btnBookOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBookOpen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBookOpen->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnBookOpen->Location = System::Drawing::Point(59, 220);
			this->btnBookOpen->Name = L"btnBookOpen";
			this->btnBookOpen->Size = System::Drawing::Size(701, 90);
			this->btnBookOpen->TabIndex = 5;
			this->btnBookOpen->Text = L"Открыть справочник";
			this->btnBookOpen->UseVisualStyleBackColor = false;
			this->btnBookOpen->Click += gcnew System::EventHandler(this, &MyForm::btnBookOpen_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::LightGreen;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnExit->Location = System::Drawing::Point(59, 561);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(702, 66);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Выход";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// lblinfo1
			// 
			this->lblinfo1->AutoSize = true;
			this->lblinfo1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblinfo1->Location = System::Drawing::Point(241, 126);
			this->lblinfo1->Name = L"lblinfo1";
			this->lblinfo1->Size = System::Drawing::Size(340, 37);
			this->lblinfo1->TabIndex = 8;
			this->lblinfo1->Text = L"Версия 1.0.0 от 01.09.2022";
			// 
			// lblinfo2
			// 
			this->lblinfo2->AutoSize = true;
			this->lblinfo2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblinfo2->Location = System::Drawing::Point(64, 163);
			this->lblinfo2->Name = L"lblinfo2";
			this->lblinfo2->Size = System::Drawing::Size(696, 37);
			this->lblinfo2->TabIndex = 9;
			this->lblinfo2->Text = L"Связь с разработчиком: leshadenisenko18@gmail.com";
			// 
			// pnlHowTo
			// 
			this->pnlHowTo->BackColor = System::Drawing::SystemColors::Window;
			this->pnlHowTo->Controls->Add(this->tbHowTo);
			this->pnlHowTo->Controls->Add(this->HowToMenu);
			this->pnlHowTo->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->pnlHowTo->Location = System::Drawing::Point(59, 16);
			this->pnlHowTo->Name = L"pnlHowTo";
			this->pnlHowTo->Size = System::Drawing::Size(724, 621);
			this->pnlHowTo->TabIndex = 10;
			this->pnlHowTo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlHowTo_Paint);
			// 
			// tbHowTo
			// 
			this->tbHowTo->Location = System::Drawing::Point(10, 12);
			this->tbHowTo->Multiline = true;
			this->tbHowTo->Name = L"tbHowTo";
			this->tbHowTo->ReadOnly = true;
			this->tbHowTo->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbHowTo->Size = System::Drawing::Size(664, 428);
			this->tbHowTo->TabIndex = 7;
			this->tbHowTo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// HowToMenu
			// 
			this->HowToMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->HowToMenu->FlatAppearance->BorderSize = 0;
			this->HowToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HowToMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HowToMenu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->HowToMenu->Location = System::Drawing::Point(169, 570);
			this->HowToMenu->Name = L"HowToMenu";
			this->HowToMenu->Size = System::Drawing::Size(382, 53);
			this->HowToMenu->TabIndex = 6;
			this->HowToMenu->Text = L"Назад";
			this->HowToMenu->UseVisualStyleBackColor = false;
			this->HowToMenu->Click += gcnew System::EventHandler(this, &MyForm::HowToMenu_Click);
			// 
			// pnlAdd
			// 
			this->pnlAdd->Controls->Add(this->tbRWeight1);
			this->pnlAdd->Controls->Add(this->tbRock1);
			this->pnlAdd->Controls->Add(this->lblRWeight1);
			this->pnlAdd->Controls->Add(this->lblMaterial);
			this->pnlAdd->Controls->Add(this->tbMaterial);
			this->pnlAdd->Controls->Add(this->lblFacture);
			this->pnlAdd->Controls->Add(this->tbFacture);
			this->pnlAdd->Controls->Add(this->lblRock1);
			this->pnlAdd->Controls->Add(this->tbWeight);
			this->pnlAdd->Controls->Add(this->lblWeight);
			this->pnlAdd->Controls->Add(this->tbProduct);
			this->pnlAdd->Controls->Add(this->lblProduct);
			this->pnlAdd->Controls->Add(this->lblPrice);
			this->pnlAdd->Controls->Add(this->tbPrice);
			this->pnlAdd->Controls->Add(this->btnAdd);
			this->pnlAdd->Controls->Add(this->btnAddMenu);
			this->pnlAdd->Location = System::Drawing::Point(59, 15);
			this->pnlAdd->Name = L"pnlAdd";
			this->pnlAdd->Size = System::Drawing::Size(797, 641);
			this->pnlAdd->TabIndex = 13;
			// 
			// tbRWeight1
			// 
			this->tbRWeight1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbRWeight1->Location = System::Drawing::Point(298, 376);
			this->tbRWeight1->MaxLength = 3;
			this->tbRWeight1->Name = L"tbRWeight1";
			this->tbRWeight1->Size = System::Drawing::Size(395, 47);
			this->tbRWeight1->TabIndex = 42;
			this->tbRWeight1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbRWeight1_KeyPress);
			// 
			// tbRock1
			// 
			this->tbRock1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbRock1->Location = System::Drawing::Point(298, 307);
			this->tbRock1->MaxLength = 18;
			this->tbRock1->Name = L"tbRock1";
			this->tbRock1->Size = System::Drawing::Size(393, 47);
			this->tbRock1->TabIndex = 41;
			this->tbRock1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbRock1_KeyPress);
			// 
			// lblRWeight1
			// 
			this->lblRWeight1->AutoSize = true;
			this->lblRWeight1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblRWeight1->Location = System::Drawing::Point(11, 358);
			this->lblRWeight1->Name = L"lblRWeight1";
			this->lblRWeight1->Size = System::Drawing::Size(269, 41);
			this->lblRWeight1->TabIndex = 40;
			this->lblRWeight1->Text = L"Вес камня (карат)";
			// 
			// lblMaterial
			// 
			this->lblMaterial->AutoSize = true;
			this->lblMaterial->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblMaterial->Location = System::Drawing::Point(11, 250);
			this->lblMaterial->Name = L"lblMaterial";
			this->lblMaterial->Size = System::Drawing::Size(306, 41);
			this->lblMaterial->TabIndex = 39;
			this->lblMaterial->Text = L"Основной материал";
			// 
			// tbMaterial
			// 
			this->tbMaterial->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbMaterial->Location = System::Drawing::Point(298, 243);
			this->tbMaterial->MaxLength = 18;
			this->tbMaterial->Name = L"tbMaterial";
			this->tbMaterial->Size = System::Drawing::Size(393, 47);
			this->tbMaterial->TabIndex = 38;
			this->tbMaterial->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbMaterial_KeyPress);
			// 
			// lblFacture
			// 
			this->lblFacture->AutoSize = true;
			this->lblFacture->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblFacture->Location = System::Drawing::Point(11, 192);
			this->lblFacture->Name = L"lblFacture";
			this->lblFacture->Size = System::Drawing::Size(213, 41);
			this->lblFacture->TabIndex = 37;
			this->lblFacture->Text = L"Изготовитель";
			// 
			// tbFacture
			// 
			this->tbFacture->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbFacture->Location = System::Drawing::Point(298, 189);
			this->tbFacture->MaxLength = 32;
			this->tbFacture->Name = L"tbFacture";
			this->tbFacture->Size = System::Drawing::Size(393, 47);
			this->tbFacture->TabIndex = 36;
			this->tbFacture->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbFacture_KeyPress);
			// 
			// lblRock1
			// 
			this->lblRock1->AutoSize = true;
			this->lblRock1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblRock1->Location = System::Drawing::Point(11, 302);
			this->lblRock1->Name = L"lblRock1";
			this->lblRock1->Size = System::Drawing::Size(328, 41);
			this->lblRock1->TabIndex = 23;
			this->lblRock1->Text = L"Драгоценный камень";
			// 
			// tbWeight
			// 
			this->tbWeight->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbWeight->Location = System::Drawing::Point(298, 140);
			this->tbWeight->MaxLength = 3;
			this->tbWeight->Name = L"tbWeight";
			this->tbWeight->Size = System::Drawing::Size(393, 47);
			this->tbWeight->TabIndex = 22;
			this->tbWeight->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbWeight_KeyPress);
			// 
			// lblWeight
			// 
			this->lblWeight->AutoSize = true;
			this->lblWeight->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblWeight->Location = System::Drawing::Point(11, 143);
			this->lblWeight->Name = L"lblWeight";
			this->lblWeight->Size = System::Drawing::Size(236, 41);
			this->lblWeight->TabIndex = 21;
			this->lblWeight->Text = L"Вес изделия (г.)";
			// 
			// tbProduct
			// 
			this->tbProduct->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbProduct->Location = System::Drawing::Point(298, 40);
			this->tbProduct->MaxLength = 18;
			this->tbProduct->Name = L"tbProduct";
			this->tbProduct->Size = System::Drawing::Size(393, 47);
			this->tbProduct->TabIndex = 20;
			this->tbProduct->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbProduct_KeyPress);
			// 
			// lblProduct
			// 
			this->lblProduct->AutoSize = true;
			this->lblProduct->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblProduct->Location = System::Drawing::Point(11, 47);
			this->lblProduct->Name = L"lblProduct";
			this->lblProduct->Size = System::Drawing::Size(279, 41);
			this->lblProduct->TabIndex = 19;
			this->lblProduct->Text = L"Название изделия";
			// 
			// lblPrice
			// 
			this->lblPrice->AutoSize = true;
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblPrice->Location = System::Drawing::Point(11, 97);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(177, 41);
			this->lblPrice->TabIndex = 18;
			this->lblPrice->Text = L"Цена (руб.)";
			// 
			// tbPrice
			// 
			this->tbPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbPrice->Location = System::Drawing::Point(298, 90);
			this->tbPrice->MaxLength = 6;
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(393, 47);
			this->tbPrice->TabIndex = 17;
			this->tbPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TbPrice_KeyPress);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::LightGreen;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAdd->Location = System::Drawing::Point(77, 506);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(549, 58);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"Добавить";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnAddMenu
			// 
			this->btnAddMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAddMenu->FlatAppearance->BorderSize = 0;
			this->btnAddMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddMenu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAddMenu->Location = System::Drawing::Point(160, 570);
			this->btnAddMenu->Name = L"btnAddMenu";
			this->btnAddMenu->Size = System::Drawing::Size(382, 53);
			this->btnAddMenu->TabIndex = 6;
			this->btnAddMenu->Text = L"Назад";
			this->btnAddMenu->UseVisualStyleBackColor = false;
			this->btnAddMenu->Click += gcnew System::EventHandler(this, &MyForm::btnAddMenu_Click);
			// 
			// pnlBook
			// 
			this->pnlBook->Controls->Add(this->label2);
			this->pnlBook->Controls->Add(this->textBox1);
			this->pnlBook->Controls->Add(this->btnAll);
			this->pnlBook->Controls->Add(this->btnDelete);
			this->pnlBook->Controls->Add(this->btnEdit);
			this->pnlBook->Controls->Add(this->btnToAdd);
			this->pnlBook->Controls->Add(this->SubjectName);
			this->pnlBook->Controls->Add(this->textBox2);
			this->pnlBook->Controls->Add(this->btnSearch);
			this->pnlBook->Controls->Add(this->btnBookMenu);
			this->pnlBook->Location = System::Drawing::Point(59, 20);
			this->pnlBook->Name = L"pnlBook";
			this->pnlBook->Size = System::Drawing::Size(702, 620);
			this->pnlBook->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(223, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(286, 41);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Название изделия:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(73, 218);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(549, 47);
			this->textBox1->TabIndex = 23;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// btnAll
			// 
			this->btnAll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAll->FlatAppearance->BorderSize = 0;
			this->btnAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAll->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAll->Location = System::Drawing::Point(73, 405);
			this->btnAll->Name = L"btnAll";
			this->btnAll->Size = System::Drawing::Size(549, 65);
			this->btnAll->TabIndex = 22;
			this->btnAll->Text = L"Просмотреть весь список";
			this->btnAll->UseVisualStyleBackColor = false;
			this->btnAll->Click += gcnew System::EventHandler(this, &MyForm::BtnAll_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDelete->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDelete->Location = System::Drawing::Point(73, 334);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(549, 65);
			this->btnDelete->TabIndex = 21;
			this->btnDelete->Text = L"Удалить запись";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::BtnDelete_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnEdit->FlatAppearance->BorderSize = 0;
			this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEdit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEdit->Location = System::Drawing::Point(73, 263);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(549, 65);
			this->btnEdit->TabIndex = 20;
			this->btnEdit->Text = L"Изменить запись";
			this->btnEdit->UseVisualStyleBackColor = false;
			this->btnEdit->Click += gcnew System::EventHandler(this, &MyForm::BtnEdit_Click);
			// 
			// btnToAdd
			// 
			this->btnToAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnToAdd->FlatAppearance->BorderSize = 0;
			this->btnToAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnToAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnToAdd->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnToAdd->Location = System::Drawing::Point(73, 504);
			this->btnToAdd->Name = L"btnToAdd";
			this->btnToAdd->Size = System::Drawing::Size(549, 60);
			this->btnToAdd->TabIndex = 19;
			this->btnToAdd->Text = L"Добавить запись";
			this->btnToAdd->UseVisualStyleBackColor = false;
			this->btnToAdd->Click += gcnew System::EventHandler(this, &MyForm::btnToAdd_Click);
			// 
			// SubjectName
			// 
			this->SubjectName->AutoSize = true;
			this->SubjectName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->SubjectName->Location = System::Drawing::Point(223, 54);
			this->SubjectName->Name = L"SubjectName";
			this->SubjectName->Size = System::Drawing::Size(291, 41);
			this->SubjectName->TabIndex = 18;
			this->SubjectName->Text = L"Материал изделия:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(73, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(549, 47);
			this->textBox2->TabIndex = 17;
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnSearch->FlatAppearance->BorderSize = 0;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSearch->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSearch->Location = System::Drawing::Point(73, 130);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(549, 49);
			this->btnSearch->TabIndex = 15;
			this->btnSearch->Text = L"Поиск записи";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// btnBookMenu
			// 
			this->btnBookMenu->BackColor = System::Drawing::Color::LightGreen;
			this->btnBookMenu->FlatAppearance->BorderSize = 0;
			this->btnBookMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBookMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBookMenu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnBookMenu->Location = System::Drawing::Point(73, 570);
			this->btnBookMenu->Name = L"btnBookMenu";
			this->btnBookMenu->Size = System::Drawing::Size(549, 53);
			this->btnBookMenu->TabIndex = 6;
			this->btnBookMenu->Text = L"Назад";
			this->btnBookMenu->UseVisualStyleBackColor = false;
			this->btnBookMenu->Click += gcnew System::EventHandler(this, &MyForm::btnBookMenu_Click);
			// 
			// pnlTask
			// 
			this->pnlTask->Controls->Add(this->btnTaskMenu);
			this->pnlTask->Controls->Add(this->tbTask);
			this->pnlTask->Location = System::Drawing::Point(59, 19);
			this->pnlTask->Name = L"pnlTask";
			this->pnlTask->Size = System::Drawing::Size(724, 621);
			this->pnlTask->TabIndex = 11;
			// 
			// btnTaskMenu
			// 
			this->btnTaskMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnTaskMenu->FlatAppearance->BorderSize = 0;
			this->btnTaskMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTaskMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTaskMenu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnTaskMenu->Location = System::Drawing::Point(169, 570);
			this->btnTaskMenu->Name = L"btnTaskMenu";
			this->btnTaskMenu->Size = System::Drawing::Size(382, 50);
			this->btnTaskMenu->TabIndex = 6;
			this->btnTaskMenu->Text = L"В меню";
			this->btnTaskMenu->UseVisualStyleBackColor = false;
			this->btnTaskMenu->Click += gcnew System::EventHandler(this, &MyForm::btnTaskMenu_Click);
			// 
			// tbTask
			// 
			this->tbTask->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbTask->Location = System::Drawing::Point(12, 32);
			this->tbTask->Multiline = true;
			this->tbTask->Name = L"tbTask";
			this->tbTask->ReadOnly = true;
			this->tbTask->Size = System::Drawing::Size(681, 414);
			this->tbTask->TabIndex = 0;
			this->tbTask->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pnlShowResult
			// 
			this->pnlShowResult->Controls->Add(this->label9);
			this->pnlShowResult->Controls->Add(this->label8);
			this->pnlShowResult->Controls->Add(this->label7);
			this->pnlShowResult->Controls->Add(this->label6);
			this->pnlShowResult->Controls->Add(this->label5);
			this->pnlShowResult->Controls->Add(this->label4);
			this->pnlShowResult->Controls->Add(this->label3);
			this->pnlShowResult->Controls->Add(this->tbRockWeightShow);
			this->pnlShowResult->Controls->Add(this->tbRockShow);
			this->pnlShowResult->Controls->Add(this->tbMaterialShow);
			this->pnlShowResult->Controls->Add(this->tbFactureShow);
			this->pnlShowResult->Controls->Add(this->tbWeightShow);
			this->pnlShowResult->Controls->Add(this->tbPriceShow);
			this->pnlShowResult->Controls->Add(this->tbNameShow);
			this->pnlShowResult->Controls->Add(this->btnResultsToBook);
			this->pnlShowResult->Location = System::Drawing::Point(59, 19);
			this->pnlShowResult->Name = L"pnlShowResult";
			this->pnlShowResult->Size = System::Drawing::Size(796, 634);
			this->pnlShowResult->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(618, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Вес камня";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(513, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Драг. камень";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(423, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Материал";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(316, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Изготовитель";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(244, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Вес";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(141, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Цена";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(25, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 17);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Название";
			// 
			// tbRockWeightShow
			// 
			this->tbRockWeightShow->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbRockWeightShow->Location = System::Drawing::Point(609, 30);
			this->tbRockWeightShow->Multiline = true;
			this->tbRockWeightShow->Name = L"tbRockWeightShow";
			this->tbRockWeightShow->Size = System::Drawing::Size(100, 435);
			this->tbRockWeightShow->TabIndex = 13;
			// 
			// tbRockShow
			// 
			this->tbRockShow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->tbRockShow->Location = System::Drawing::Point(509, 30);
			this->tbRockShow->Multiline = true;
			this->tbRockShow->Name = L"tbRockShow";
			this->tbRockShow->Size = System::Drawing::Size(100, 435);
			this->tbRockShow->TabIndex = 12;
			// 
			// tbMaterialShow
			// 
			this->tbMaterialShow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->tbMaterialShow->Location = System::Drawing::Point(309, 30);
			this->tbMaterialShow->Multiline = true;
			this->tbMaterialShow->Name = L"tbMaterialShow";
			this->tbMaterialShow->Size = System::Drawing::Size(100, 435);
			this->tbMaterialShow->TabIndex = 11;
			// 
			// tbFactureShow
			// 
			this->tbFactureShow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbFactureShow->Location = System::Drawing::Point(209, 30);
			this->tbFactureShow->Multiline = true;
			this->tbFactureShow->Name = L"tbFactureShow";
			this->tbFactureShow->Size = System::Drawing::Size(100, 435);
			this->tbFactureShow->TabIndex = 10;
			// 
			// tbWeightShow
			// 
			this->tbWeightShow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbWeightShow->Location = System::Drawing::Point(109, 30);
			this->tbWeightShow->Multiline = true;
			this->tbWeightShow->Name = L"tbWeightShow";
			this->tbWeightShow->Size = System::Drawing::Size(100, 435);
			this->tbWeightShow->TabIndex = 9;
			// 
			// tbPriceShow
			// 
			this->tbPriceShow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbPriceShow->Location = System::Drawing::Point(9, 30);
			this->tbPriceShow->Multiline = true;
			this->tbPriceShow->Name = L"tbPriceShow";
			this->tbPriceShow->Size = System::Drawing::Size(100, 435);
			this->tbPriceShow->TabIndex = 8;
			// 
			// tbNameShow
			// 
			this->tbNameShow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNameShow->Location = System::Drawing::Point(409, 30);
			this->tbNameShow->Multiline = true;
			this->tbNameShow->Name = L"tbNameShow";
			this->tbNameShow->Size = System::Drawing::Size(100, 435);
			this->tbNameShow->TabIndex = 7;
			// 
			// btnResultsToBook
			// 
			this->btnResultsToBook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnResultsToBook->FlatAppearance->BorderSize = 0;
			this->btnResultsToBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResultsToBook->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnResultsToBook->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnResultsToBook->Location = System::Drawing::Point(73, 569);
			this->btnResultsToBook->Name = L"btnResultsToBook";
			this->btnResultsToBook->Size = System::Drawing::Size(549, 50);
			this->btnResultsToBook->TabIndex = 6;
			this->btnResultsToBook->Text = L"Назад";
			this->btnResultsToBook->UseVisualStyleBackColor = false;
			this->btnResultsToBook->Click += gcnew System::EventHandler(this, &MyForm::btnResultsToBook_Click);
			// 
			// pnlEdit
			// 
			this->pnlEdit->Controls->Add(this->tbRWeightEdit);
			this->pnlEdit->Controls->Add(this->lblRWeightEd);
			this->pnlEdit->Controls->Add(this->tbRock2);
			this->pnlEdit->Controls->Add(this->lblMaterial1);
			this->pnlEdit->Controls->Add(this->tbMaterial1);
			this->pnlEdit->Controls->Add(this->lblFacture1);
			this->pnlEdit->Controls->Add(this->tbFacture1);
			this->pnlEdit->Controls->Add(this->lblRockEd);
			this->pnlEdit->Controls->Add(this->tbWeight1);
			this->pnlEdit->Controls->Add(this->lblWeight1);
			this->pnlEdit->Controls->Add(this->tbProductEdit);
			this->pnlEdit->Controls->Add(this->lblProduct1);
			this->pnlEdit->Controls->Add(this->lblPrice1);
			this->pnlEdit->Controls->Add(this->tbPrice1);
			this->pnlEdit->Controls->Add(this->btnEditForm);
			this->pnlEdit->Controls->Add(this->btnEditFormMenu1);
			this->pnlEdit->Location = System::Drawing::Point(58, 17);
			this->pnlEdit->Name = L"pnlEdit";
			this->pnlEdit->Size = System::Drawing::Size(794, 639);
			this->pnlEdit->TabIndex = 15;
			// 
			// tbRWeightEdit
			// 
			this->tbRWeightEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbRWeightEdit->Location = System::Drawing::Point(298, 361);
			this->tbRWeightEdit->MaxLength = 3;
			this->tbRWeightEdit->Name = L"tbRWeightEdit";
			this->tbRWeightEdit->Size = System::Drawing::Size(393, 47);
			this->tbRWeightEdit->TabIndex = 42;
			this->tbRWeightEdit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbRWeightEdit_KeyPress);
			// 
			// lblRWeightEd
			// 
			this->lblRWeightEd->AutoSize = true;
			this->lblRWeightEd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRWeightEd->Location = System::Drawing::Point(11, 361);
			this->lblRWeightEd->Name = L"lblRWeightEd";
			this->lblRWeightEd->Size = System::Drawing::Size(162, 41);
			this->lblRWeightEd->TabIndex = 41;
			this->lblRWeightEd->Text = L"Вес камня";
			// 
			// tbRock2
			// 
			this->tbRock2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbRock2->Location = System::Drawing::Point(298, 307);
			this->tbRock2->MaxLength = 16;
			this->tbRock2->Name = L"tbRock2";
			this->tbRock2->Size = System::Drawing::Size(393, 47);
			this->tbRock2->TabIndex = 40;
			this->tbRock2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbRock2_KeyPress);
			// 
			// lblMaterial1
			// 
			this->lblMaterial1->AutoSize = true;
			this->lblMaterial1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblMaterial1->Location = System::Drawing::Point(12, 50);
			this->lblMaterial1->Name = L"lblMaterial1";
			this->lblMaterial1->Size = System::Drawing::Size(306, 41);
			this->lblMaterial1->TabIndex = 39;
			this->lblMaterial1->Text = L"Основной материал";
			// 
			// tbMaterial1
			// 
			this->tbMaterial1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbMaterial1->Location = System::Drawing::Point(298, 243);
			this->tbMaterial1->MaxLength = 16;
			this->tbMaterial1->Name = L"tbMaterial1";
			this->tbMaterial1->Size = System::Drawing::Size(393, 47);
			this->tbMaterial1->TabIndex = 38;
			this->tbMaterial1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbMaterial1_KeyPress);
			// 
			// lblFacture1
			// 
			this->lblFacture1->AutoSize = true;
			this->lblFacture1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblFacture1->Location = System::Drawing::Point(12, 249);
			this->lblFacture1->Name = L"lblFacture1";
			this->lblFacture1->Size = System::Drawing::Size(213, 41);
			this->lblFacture1->TabIndex = 37;
			this->lblFacture1->Text = L"Изготовитель";
			// 
			// tbFacture1
			// 
			this->tbFacture1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbFacture1->Location = System::Drawing::Point(298, 189);
			this->tbFacture1->MaxLength = 3;
			this->tbFacture1->Name = L"tbFacture1";
			this->tbFacture1->Size = System::Drawing::Size(393, 47);
			this->tbFacture1->TabIndex = 36;
			this->tbFacture1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbFacture1_KeyPress);
			// 
			// lblRockEd
			// 
			this->lblRockEd->AutoSize = true;
			this->lblRockEd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblRockEd->Location = System::Drawing::Point(11, 302);
			this->lblRockEd->Name = L"lblRockEd";
			this->lblRockEd->Size = System::Drawing::Size(328, 41);
			this->lblRockEd->TabIndex = 23;
			this->lblRockEd->Text = L"Драгоценный камень";
			// 
			// tbWeight1
			// 
			this->tbWeight1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbWeight1->Location = System::Drawing::Point(298, 140);
			this->tbWeight1->MaxLength = 6;
			this->tbWeight1->Name = L"tbWeight1";
			this->tbWeight1->Size = System::Drawing::Size(393, 47);
			this->tbWeight1->TabIndex = 22;
			this->tbWeight1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbWeight1_KeyPress);
			// 
			// lblWeight1
			// 
			this->lblWeight1->AutoSize = true;
			this->lblWeight1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblWeight1->Location = System::Drawing::Point(11, 195);
			this->lblWeight1->Name = L"lblWeight1";
			this->lblWeight1->Size = System::Drawing::Size(190, 41);
			this->lblWeight1->TabIndex = 21;
			this->lblWeight1->Text = L"Вес изделия";
			// 
			// tbProductEdit
			// 
			this->tbProductEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbProductEdit->Location = System::Drawing::Point(298, 40);
			this->tbProductEdit->MaxLength = 16;
			this->tbProductEdit->Name = L"tbProductEdit";
			this->tbProductEdit->Size = System::Drawing::Size(393, 47);
			this->tbProductEdit->TabIndex = 20;
			this->tbProductEdit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbProductEdit_KeyPress);
			// 
			// lblProduct1
			// 
			this->lblProduct1->AutoSize = true;
			this->lblProduct1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblProduct1->Location = System::Drawing::Point(11, 96);
			this->lblProduct1->Name = L"lblProduct1";
			this->lblProduct1->Size = System::Drawing::Size(279, 41);
			this->lblProduct1->TabIndex = 19;
			this->lblProduct1->Text = L"Название изделия";
			// 
			// lblPrice1
			// 
			this->lblPrice1->AutoSize = true;
			this->lblPrice1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->lblPrice1->Location = System::Drawing::Point(11, 146);
			this->lblPrice1->Name = L"lblPrice1";
			this->lblPrice1->Size = System::Drawing::Size(91, 41);
			this->lblPrice1->TabIndex = 18;
			this->lblPrice1->Text = L"Цена";
			// 
			// tbPrice1
			// 
			this->tbPrice1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->tbPrice1->Location = System::Drawing::Point(298, 90);
			this->tbPrice1->MaxLength = 16;
			this->tbPrice1->Name = L"tbPrice1";
			this->tbPrice1->Size = System::Drawing::Size(393, 47);
			this->tbPrice1->TabIndex = 17;
			this->tbPrice1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbPrice1_KeyPress);
			// 
			// btnEditForm
			// 
			this->btnEditForm->BackColor = System::Drawing::Color::LightGreen;
			this->btnEditForm->FlatAppearance->BorderSize = 0;
			this->btnEditForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditForm->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEditForm->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEditForm->Location = System::Drawing::Point(77, 506);
			this->btnEditForm->Name = L"btnEditForm";
			this->btnEditForm->Size = System::Drawing::Size(549, 58);
			this->btnEditForm->TabIndex = 15;
			this->btnEditForm->Text = L"Изменить";
			this->btnEditForm->UseVisualStyleBackColor = false;
			this->btnEditForm->Click += gcnew System::EventHandler(this, &MyForm::BtnEditForm_Click);
			// 
			// btnEditFormMenu1
			// 
			this->btnEditFormMenu1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnEditFormMenu1->FlatAppearance->BorderSize = 0;
			this->btnEditFormMenu1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditFormMenu1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEditFormMenu1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEditFormMenu1->Location = System::Drawing::Point(160, 570);
			this->btnEditFormMenu1->Name = L"btnEditFormMenu1";
			this->btnEditFormMenu1->Size = System::Drawing::Size(382, 53);
			this->btnEditFormMenu1->TabIndex = 6;
			this->btnEditFormMenu1->Text = L"Назад";
			this->btnEditFormMenu1->UseVisualStyleBackColor = false;
			this->btnEditFormMenu1->Click += gcnew System::EventHandler(this, &MyForm::BtnEditFormMenu1_Click);
			// 
			// lblinfo4
			// 
			this->lblinfo4->AutoSize = true;
			this->lblinfo4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->lblinfo4->Location = System::Drawing::Point(197, 63);
			this->lblinfo4->Name = L"lblinfo4";
			this->lblinfo4->Size = System::Drawing::Size(408, 37);
			this->lblinfo4->TabIndex = 16;
			this->lblinfo4->Text = L"Денисенко Алексей Сергеевич";
			// 
			// lblinfo3
			// 
			this->lblinfo3->AutoSize = true;
			this->lblinfo3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->lblinfo3->Location = System::Drawing::Point(315, 98);
			this->lblinfo3->Name = L"lblinfo3";
			this->lblinfo3->Size = System::Drawing::Size(145, 37);
			this->lblinfo3->TabIndex = 17;
			this->lblinfo3->Text = L"ИСТБ-21-1";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(909, 665);
			this->Controls->Add(this->pnlAdd);
			this->Controls->Add(this->pnlHowTo);
			this->Controls->Add(this->pnlEdit);
			this->Controls->Add(this->pnlTask);
			this->Controls->Add(this->pnlShowResult);
			this->Controls->Add(this->pnlBook);
			this->Controls->Add(this->lblinfo2);
			this->Controls->Add(this->lblinfo1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnBookOpen);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnHowTo);
			this->Controls->Add(this->btnTask);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->lblinfo4);
			this->Controls->Add(this->lblinfo3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочник";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pnlHowTo->ResumeLayout(false);
			this->pnlHowTo->PerformLayout();
			this->pnlAdd->ResumeLayout(false);
			this->pnlAdd->PerformLayout();
			this->pnlBook->ResumeLayout(false);
			this->pnlBook->PerformLayout();
			this->pnlTask->ResumeLayout(false);
			this->pnlTask->PerformLayout();
			this->pnlShowResult->ResumeLayout(false);
			this->pnlShowResult->PerformLayout();
			this->pnlEdit->ResumeLayout(false);
			this->pnlEdit->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	bool isShown = false;
	String^ specToFind;
	bool checkedChange = false;


	void FillInfo(String^ chosenSpec) {
		StreamReader^ sr = gcnew StreamReader("data1.bin");

		String^ lineReader;
		String^ ProductName;
		String^ ProductPrice;
		String^ ProductWeight;
		String^ ProductFacture;
		String^ MainMaterial;
		String^ Rock;
		String^ RockWeight;


		lineReader = sr->ReadLine();

		while (lineReader) {
			
			if (lineReader == chosenSpec) {
				ProductName += lineReader + "\r\n";
				ProductPrice += sr->ReadLine() + "\r\n";
				ProductWeight += sr->ReadLine() + "\r\n";
				ProductFacture += sr->ReadLine() + "\r\n";
				MainMaterial += sr->ReadLine() + "\r\n";
				Rock += sr->ReadLine() + "\r\n";
				RockWeight += sr->ReadLine() + "\r\n";

			}
			else {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
			}
			lineReader = sr->ReadLine();
		}
		sr->Close();


		StreamReader^ sr2 = gcnew StreamReader("data2.bin");
		lineReader = sr2->ReadLine();
		while (lineReader) {
			if (lineReader == chosenSpec) {
				ProductName += lineReader + "\r\n";
				ProductPrice += sr2->ReadLine() + "\r\n";
				ProductWeight += sr2->ReadLine() + "\r\n";
				ProductFacture += sr2->ReadLine() + "\r\n";
				MainMaterial += sr2->ReadLine() + "\r\n";
				Rock += sr2->ReadLine() + "\r\n";
				RockWeight += sr2->ReadLine() + "\r\n";
			}
			else {
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
			}
			lineReader = sr2->ReadLine();
		}
		sr2->Close();


		tbNameShow->Text = ProductName;
		tbPriceShow->Text = ProductPrice;
		tbWeightShow->Text = ProductWeight;
		tbFactureShow->Text = ProductFacture;
		tbMaterialShow->Text = MainMaterial;
		tbRockShow->Text = Rock;
		tbRockWeightShow->Text = RockWeight;


	}

	void OutputAll() {
		StreamReader^ sr = gcnew StreamReader("data1.bin");

		String^ lineReader;
		String^ ProductName;
		String^ ProductPrice;
		String^ ProductWeight;
		String^ ProductFacture;
		String^ MainMaterial;
		String^ Rock;
		String^ RockWeight;

		lineReader = sr->ReadLine();
		while (lineReader) {
				ProductName += lineReader + "\r\n";
				ProductPrice += sr->ReadLine() + "\r\n";
				ProductWeight += sr->ReadLine() + "\r\n";
				ProductFacture += sr->ReadLine() + "\r\n";
				MainMaterial += sr->ReadLine() + "\r\n";
				Rock += sr->ReadLine() + "\r\n";
				RockWeight += sr->ReadLine() + "\r\n";
			
			
			lineReader = sr->ReadLine();
		}
		sr->Close();

		tbNameShow->Text = ProductName;
		tbPriceShow->Text = ProductPrice;
		tbWeightShow->Text = ProductWeight;
		tbFactureShow->Text = ProductFacture;
		tbMaterialShow->Text = MainMaterial;
		tbRockShow->Text = Rock;
		tbRockWeightShow -> Text = RockWeight;
	}

	void Delete(String^ chosenSpec) {
		
		StreamReader^ sr = gcnew StreamReader("data1.bin");
		StreamReader^ sr2 = gcnew StreamReader("data1.bin");
		StreamReader^ sr3 = gcnew StreamReader("data1.bin");
		StreamReader^ sr4 = gcnew StreamReader("data1.bin");
		StreamWriter^ sw = gcnew StreamWriter("data3.bin");
		StreamWriter^ sw2 = gcnew StreamWriter("data4.bin");
		String^ lineReader;
		String^ lineReader2;
		String^ lineReader3;
		String^ lineReader4;
		lineReader = sr->ReadLine();
		while (lineReader) {
			
			if (lineReader == chosenSpec) {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
			
				lineReader = sr->ReadLine();
				
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();

			
				lineReader2 = sr2->ReadLine();
				
			}
			else {
				lineReader2 = sr2->ReadLine();
				lineReader = sr->ReadLine();
				if (lineReader != chosenSpec) {
					sw->WriteLine(lineReader2);
					sw->Flush();
				}
			}
			
		}
		sr->Close();
		sr2->Close();
		sw->Close();
		
		

		lineReader3 = sr3->ReadLine();
		while (lineReader3) {

			if (lineReader3 == chosenSpec) {
				sr3->ReadLine();
				sr3->ReadLine();
				sr3->ReadLine();
				sr3->ReadLine();
			
				lineReader3 = sr3->ReadLine();
				sr4->ReadLine();
				sr4->ReadLine();
				sr4->ReadLine();
				sr4->ReadLine();
				
				lineReader4 = sr4->ReadLine();
			}
			else {
				lineReader4 = sr4->ReadLine();
				lineReader3 = sr3->ReadLine();
				if (lineReader3 != chosenSpec) {
					sw2->WriteLine(lineReader4);
					sw2->Flush();
				}
			}

		}
		sr3->Close();
		sr4->Close();
		sw2->Close();
		string file_name1 = "data1.bin";
		string file_name2 = "data2.bin";
		string old_file_name1 = "data3.bin";
		string old_file_name2 = "data4.bin";
		remove(file_name2.c_str());
		rename(old_file_name2.c_str(), file_name2.c_str());
		remove(file_name1.c_str());
		rename(old_file_name1.c_str(), file_name1.c_str());
	}

	void edit(String^ chosenSpec) {
		StreamReader^ sr = gcnew StreamReader("data1.bin");
		StreamReader^ sr2 = gcnew StreamReader("data1.bin");
		StreamReader^ sr3 = gcnew StreamReader("data2.bin");
		StreamReader^ sr4 = gcnew StreamReader("data2.bin");
		StreamWriter^ sw = gcnew StreamWriter("data3.bin");
		StreamWriter^ sw2 = gcnew StreamWriter("data4.bin");
		String^ lineReader;
		String^ lineReader2;
		String^ lineReader3;
		String^ lineReader4;
		lineReader = sr->ReadLine();
		while (lineReader) {

			if (lineReader == chosenSpec) {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				lineReader = sr->ReadLine();
				if (1 > 0) {
					
					sw->WriteLine(tbProductEdit->Text);
					sw->WriteLine(tbPrice1->Text);
					sw->WriteLine(tbWeight1->Text);
					sw->WriteLine(tbFacture1->Text);
					sw->WriteLine(tbMaterial1->Text);
					sw->WriteLine(tbRock2->Text);
					sw->WriteLine(tbRWeightEdit->Text);
				
					sw->Flush();
				}
				else {
					sw2->WriteLine(tbProductEdit->Text);
					sw2->WriteLine(tbPrice1->Text);
					sw2->WriteLine(tbWeight1->Text);
					sw2->WriteLine(tbFacture1->Text);
					sw2->WriteLine(tbMaterial1->Text);
					sw2->WriteLine(tbRock2->Text);
					sw2->WriteLine(tbRWeightEdit->Text);
					sw2->Flush();
				}
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				sr2->ReadLine();
				lineReader2 = sr2->ReadLine();
			}
			else {
				lineReader2 = sr2->ReadLine();
				lineReader = sr->ReadLine();
				if (lineReader != chosenSpec) {
					sw->WriteLine(lineReader2);
					sw->Flush();
				}
			}

		} 
		sr->Close();
		sr2->Close();
		



		lineReader3 = sr3->ReadLine();
	
		sr3->Close();
		sr4->Close();
		sw->Close();
		sw2->Close();
		string file_name1 = "data1.bin";
		string file_name2 = "data2.bin";
		string old_file_name1 = "data3.bin";
		string old_file_name2 = "data4.bin";
		remove(file_name2.c_str());
		rename(old_file_name2.c_str(), file_name2.c_str());
		remove(file_name1.c_str());
		rename(old_file_name1.c_str(), file_name1.c_str());

	}



	void found(String^ chosenSpec) {
		StreamReader^ sr = gcnew StreamReader("data1.bin");
		StreamReader^ sr2 = gcnew StreamReader("data1.bin");
		String^ lineReader;
		String^ lineReader2;
		lineReader = sr->ReadLine();
		while (lineReader) {

			if (lineReader == chosenSpec) {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				lineReader = sr->ReadLine();
				tbProductEdit->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbPrice1 ->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbWeight1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbFacture1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbMaterial1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbRock1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbRWeightEdit->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				
			}
			else {
				lineReader2 = sr2->ReadLine();
				lineReader = sr->ReadLine();
				
			}

		}
		sr->Close();
		sr2->Close();
		
	}
	void foundEdit(String^ chosenSpec) {
		StreamReader^ sr = gcnew StreamReader("data1.bin");
		StreamReader^ sr2 = gcnew StreamReader("data1.bin");
		String^ lineReader;
		String^ lineReader2;
		lineReader = sr->ReadLine();
		while (lineReader) {

			if (lineReader == chosenSpec) {
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				sr->ReadLine();
				lineReader = sr->ReadLine();
				
				
				tbProductEdit->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbPrice1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbWeight1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbFacture1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbMaterial1->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbRock2->Text = lineReader2;
				lineReader2 = sr2->ReadLine();
				tbRWeightEdit->Text = lineReader2;
				lineReader2 = sr2->ReadLine();

			}
			else {
				lineReader2 = sr2->ReadLine();
				lineReader = sr->ReadLine();

			}

		}
		sr->Close();
		sr2->Close();




		
	}


private: System::Void btnBookOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlBook->Show();
	btnDelete->Enabled = false;
	btnEdit->Enabled = false;
	
}
private: System::Void btnTask_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTask->Show();
	String^ lineReader;
	StreamReader^ srtask = gcnew StreamReader("Task.txt");
	lineReader = srtask->ReadLine();
	tbTask->Text = lineReader;
	srtask->Close();
}
private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isShown) {
		lblinfo1->Hide();
		lblinfo2->Hide();
		lblinfo3->Hide();
		lblinfo4->Hide();
		isShown = false;
		btnAbout->Text = "О программе";
	}
	else {
		lblinfo1->Show();
		lblinfo2->Show();
		lblinfo3->Show();
		lblinfo4->Show();
		isShown = true;
		btnAbout->Text = "О программе (скрыть)";
	}
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkedChange) {
		MessageBox::Show("Все изменения сохранены в файл.");
	}
	else {
		MessageBox::Show("Файл не изменен");
	}
	Application::Exit();
}
private: System::Void btnTaskMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTask->Hide();
}
private: System::Void HowToMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlHowTo->Hide();
}
private: System::Void btnHowTo_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlHowTo->Show();
	String^ lineReader;
	StreamReader^ srhow = gcnew StreamReader("HowTo.txt");
	lineReader = srhow->ReadLine();
	tbHowTo->Text = lineReader;
	srhow->Close();
}
private: System::Void btnBookMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlBook->Hide();
	
}
private: System::Void btnToAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlBook->Hide();
	pnlAdd->Show();
	btnAdd->Enabled = false;
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	specToFind = textBox2->Text;
	FillInfo(specToFind);
	pnlBook->Hide();
	pnlShowResult->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlBook->Hide();
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!tbPrice->TextLength) {
		MessageBox::Show("Цена не введена!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (!tbProduct->TextLength) {
			MessageBox::Show("Название изделия не введено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (!tbWeight->TextLength) {
				MessageBox::Show("Вес изделия не введен", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				if (!tbFacture->TextLength) {
					MessageBox::Show("Производитель не введен", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					if (!tbMaterial->TextLength) {
						MessageBox::Show("Материал не указан", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else {
						if (!tbRock1->TextLength) {
							MessageBox::Show("Драгоценный камень не указан", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else {
							if (!tbRWeight1->TextLength) {
								MessageBox::Show("Вес камня не указан", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							}

							else {




								StreamWriter^ sw = File::AppendText("data1.bin");
								sw->WriteLine(tbMaterial->Text);
								sw->WriteLine(tbProduct->Text);
								sw->WriteLine(tbPrice->Text);
								sw->WriteLine(tbWeight->Text);
								sw->WriteLine(tbFacture->Text);

								sw->WriteLine(tbRock1->Text);
								sw->WriteLine(tbRWeight1->Text);

								sw->Flush();
								sw->Close();

							}
						}
					}
				}

			}
		}
	}
	MessageBox::Show("Данные добавлены успешно.Изменения сохранены в файл.");
	tbPrice->Clear();
	tbProduct->Clear();
	tbWeight->Clear();
	tbFacture->Clear();
	tbMaterial->Clear();
	tbRock1->Clear();
	tbRWeight1->Clear();
	checkedChange = true;
	

	
}
private: System::Void btnAddMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdd->Hide();
	pnlBook->Show();
}

private: System::Void btnResultsToBook_Click(System::Object^ sender, System::EventArgs^ e) {
	tbPriceShow->Text = ""; 
	tbNameShow->Text = "";
	tbFactureShow->Text = "";
	tbWeightShow->Text = "";
	tbMaterialShow->Text = "";
	tbRockShow->Text = "";
	tbRockWeightShow->Text + "";
	pnlShowResult->Hide();
	pnlBook->Show();
}
private: System::Void BtnAll_Click(System::Object^ sender, System::EventArgs^ e) {
	OutputAll();
	pnlBook->Hide();
	pnlShowResult->Show();
}
private: System::Void BtnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	specToFind = textBox1->Text;
	Delete(specToFind);
	pnlBook->Hide();
	MessageBox::Show("Успешно удалено.Изменения сохранены в файл.");
	OutputAll();
	pnlShowResult->Show();
	checkedChange = true;
}
private: System::Void BtnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	
	specToFind = textBox1->Text;
	foundEdit(specToFind);
	pnlBook->Hide();
	pnlEdit->Show();
	
	


}
private: System::Void BtnEditForm_Click(System::Object^ sender, System::EventArgs^ e) {
	specToFind = textBox1->Text;
	edit(specToFind);
	MessageBox::Show("Данные изменены успешно.Изменения сохранены в файл.");
	checkedChange = true;
}

private: System::Void BtnEditFormMenu1_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlEdit->Hide();
	pnlBook->Show();
}

private: System::Void tbRWeight1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать латинских символов и отрицательных чисел!");
	}
	
	if (tbRWeight1->TextLength) {
		btnAdd->Enabled = true;
	}
	
}
private: System::Void tbProduct_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
		if (e->KeyChar >= '0' && e->KeyChar <= '9') {
			e->Handled = true;
			MessageBox::Show("Не должно содержать чисел!");
		}
		else {
			e->Handled = false;
		}
	
	
	
}
private: System::Void TbPrice_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать латинских символов и отрицательных чисел!");
	}

}
private: System::Void TbWeight_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать латинских символов и отрицательных чисел!");
	}
}
private: System::Void TbFacture_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать чисел!");
	}
	else {
		e->Handled = false;
	}
}
private: System::Void TbMaterial_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9') {
			e->Handled = true;
			MessageBox::Show("Не должно содержать чисел!");
		}
		else {
			e->Handled = false;
		}
}
private: System::Void tbRock1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать чисел!");
	}
	else {
		e->Handled = false;
	}
}
private: System::Void tbProductEdit_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать чисел!");
	}
	else {
		e->Handled = false;
	}
}
private: System::Void tbPrice1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать чисел!");
	}
	else {
		e->Handled = false;
	}
}
private: System::Void tbWeight1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать латинских символов и отрицательных чисел!");
	}
}
private: System::Void tbFacture1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать латинских символов и отрицательных чисел!");
	}
}
private: System::Void tbMaterial1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать чисел!");
	}
	else {
		e->Handled = false;
	}
}
private: System::Void tbRock2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && e->KeyChar <= '9') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать чисел!");
	}
	else {
		e->Handled = false;
	}
}
private: System::Void tbRWeightEdit_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') {
		e->Handled = true;
		MessageBox::Show("Не должно содержать латинских символов и отрицательных чисел!");
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((textBox2->TextLength) < 10) {
		btnDelete->Enabled = true;
		btnEdit->Enabled = true;

	}
	else {
		btnDelete->Enabled = false;
	}
}
private: System::Void pnlHowTo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
