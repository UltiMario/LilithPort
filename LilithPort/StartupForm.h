#pragma once

#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LilithPort {

	/// <summary>
	/// StartupForm の概要
	///
	/// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
	///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
	///          変更する必要があります。この変更を行わないと、
	///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
	///          正しく相互に利用できなくなります。
	/// </summary>
	public ref class StartupForm : public System::Windows::Forms::Form
	{
	public:
		StartupForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~StartupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButtonServer;
	private: System::Windows::Forms::RadioButton^  radioButtonHost;
	private: System::Windows::Forms::RadioButton^  radioButtonClient;
	private: System::Windows::Forms::Label^  labelServerName;
	private: System::Windows::Forms::TextBox^  textBoxIP;
	private: System::Windows::Forms::Label^  labelOpenPort;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownOpenPort;
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;
	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownPort;
	private: System::Windows::Forms::Label^  labelMaxConnection;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMaxConnection;
	private: System::Windows::Forms::Label^  labelComment;
	private: System::Windows::Forms::TextBox^  textBoxComment;
	private: System::Windows::Forms::GroupBox^  groupBoxStartMode;
	private: System::Windows::Forms::TextBox^  textBoxServerName;
	private: System::Windows::Forms::GroupBox^  groupBoxConnection;
	private: System::Windows::Forms::Label^  labelIP;
	private: System::Windows::Forms::Label^  labelAccessPort;
	private: System::Windows::Forms::GroupBox^  groupBoxProfile;
	private: System::Windows::Forms::GroupBox^  groupBoxWelcome;
	private: System::Windows::Forms::RichTextBox^  textBoxWelcome;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxLooking;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxAvoiding;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabPage^  tabPage3;
	internal: System::Windows::Forms::Panel^  Panel1;
	private:
	internal: System::Windows::Forms::Label^  TitleLabel;
	private: System::Windows::Forms::Label^  label4;
	internal:
	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartupForm::typeid));
			this->radioButtonServer = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonHost = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonClient = (gcnew System::Windows::Forms::RadioButton());
			this->labelServerName = (gcnew System::Windows::Forms::Label());
			this->textBoxIP = (gcnew System::Windows::Forms::TextBox());
			this->labelOpenPort = (gcnew System::Windows::Forms::Label());
			this->numericUpDownOpenPort = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->textBoxComment = (gcnew System::Windows::Forms::TextBox());
			this->labelComment = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->numericUpDownPort = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMaxConnection = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelMaxConnection = (gcnew System::Windows::Forms::Label());
			this->groupBoxStartMode = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxServerName = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxConnection = (gcnew System::Windows::Forms::GroupBox());
			this->labelAccessPort = (gcnew System::Windows::Forms::Label());
			this->labelIP = (gcnew System::Windows::Forms::Label());
			this->groupBoxProfile = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxAvoiding = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxLooking = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxWelcome = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxWelcome = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->TitleLabel = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownOpenPort))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPort))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxConnection))->BeginInit();
			this->groupBoxStartMode->SuspendLayout();
			this->groupBoxConnection->SuspendLayout();
			this->groupBoxProfile->SuspendLayout();
			this->groupBoxWelcome->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->Panel1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonServer
			// 
			this->radioButtonServer->AutoSize = true;
			this->radioButtonServer->Location = System::Drawing::Point(8, 6);
			this->radioButtonServer->Name = L"radioButtonServer";
			this->radioButtonServer->Size = System::Drawing::Size(56, 17);
			this->radioButtonServer->TabIndex = 0;
			this->radioButtonServer->Text = L"Server";
			this->radioButtonServer->UseVisualStyleBackColor = true;
			this->radioButtonServer->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonServer_CheckedChanged);
			// 
			// radioButtonHost
			// 
			this->radioButtonHost->AutoSize = true;
			this->radioButtonHost->Location = System::Drawing::Point(8, 29);
			this->radioButtonHost->Name = L"radioButtonHost";
			this->radioButtonHost->Size = System::Drawing::Size(49, 17);
			this->radioButtonHost->TabIndex = 1;
			this->radioButtonHost->Text = L"Host";
			this->radioButtonHost->UseVisualStyleBackColor = true;
			this->radioButtonHost->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonHost_CheckedChanged);
			// 
			// radioButtonClient
			// 
			this->radioButtonClient->AutoSize = true;
			this->radioButtonClient->Location = System::Drawing::Point(8, 52);
			this->radioButtonClient->Name = L"radioButtonClient";
			this->radioButtonClient->Size = System::Drawing::Size(55, 17);
			this->radioButtonClient->TabIndex = 2;
			this->radioButtonClient->Text = L"Client";
			this->radioButtonClient->UseVisualStyleBackColor = true;
			this->radioButtonClient->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonClient_CheckedChanged);
			// 
			// labelServerName
			// 
			this->labelServerName->AutoSize = true;
			this->labelServerName->Location = System::Drawing::Point(6, 19);
			this->labelServerName->Name = L"labelServerName";
			this->labelServerName->Size = System::Drawing::Size(72, 13);
			this->labelServerName->TabIndex = 0;
			this->labelServerName->Text = L"Server name:";
			// 
			// textBoxIP
			// 
			this->textBoxIP->Location = System::Drawing::Point(61, 19);
			this->textBoxIP->Name = L"textBoxIP";
			this->textBoxIP->Size = System::Drawing::Size(267, 22);
			this->textBoxIP->TabIndex = 0;
			// 
			// labelOpenPort
			// 
			this->labelOpenPort->AutoSize = true;
			this->labelOpenPort->Location = System::Drawing::Point(7, 46);
			this->labelOpenPort->Name = L"labelOpenPort";
			this->labelOpenPort->Size = System::Drawing::Size(66, 13);
			this->labelOpenPort->TabIndex = 0;
			this->labelOpenPort->Text = L"Server port:";
			// 
			// numericUpDownOpenPort
			// 
			this->numericUpDownOpenPort->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDownOpenPort->Location = System::Drawing::Point(79, 44);
			this->numericUpDownOpenPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65535, 0, 0, 0 });
			this->numericUpDownOpenPort->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1024, 0, 0, 0 });
			this->numericUpDownOpenPort->Name = L"numericUpDownOpenPort";
			this->numericUpDownOpenPort->Size = System::Drawing::Size(53, 22);
			this->numericUpDownOpenPort->TabIndex = 4;
			this->numericUpDownOpenPort->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7500, 0, 0, 0 });
			// 
			// buttonOK
			// 
			this->buttonOK->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonOK->Location = System::Drawing::Point(228, 326);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(98, 26);
			this->buttonOK->TabIndex = 4;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &StartupForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonCancel->Location = System::Drawing::Point(332, 326);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(98, 26);
			this->buttonCancel->TabIndex = 5;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StartupForm::buttonCancel_Click);
			// 
			// textBoxComment
			// 
			this->textBoxComment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxComment->Location = System::Drawing::Point(83, 140);
			this->textBoxComment->Name = L"textBoxComment";
			this->textBoxComment->Size = System::Drawing::Size(307, 22);
			this->textBoxComment->TabIndex = 1;
			// 
			// labelComment
			// 
			this->labelComment->AutoSize = true;
			this->labelComment->Location = System::Drawing::Point(10, 143);
			this->labelComment->Name = L"labelComment";
			this->labelComment->Size = System::Drawing::Size(59, 13);
			this->labelComment->TabIndex = 4;
			this->labelComment->Text = L"Comment:";
			// 
			// textBoxName
			// 
			this->textBoxName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxName->Location = System::Drawing::Point(83, 61);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(307, 22);
			this->textBoxName->TabIndex = 0;
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(9, 64);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(60, 13);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Nickname:";
			// 
			// numericUpDownPort
			// 
			this->numericUpDownPort->Location = System::Drawing::Point(61, 47);
			this->numericUpDownPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65535, 0, 0, 0 });
			this->numericUpDownPort->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1024, 0, 0, 0 });
			this->numericUpDownPort->Name = L"numericUpDownPort";
			this->numericUpDownPort->Size = System::Drawing::Size(53, 22);
			this->numericUpDownPort->TabIndex = 1;
			this->numericUpDownPort->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7500, 0, 0, 0 });
			// 
			// numericUpDownMaxConnection
			// 
			this->numericUpDownMaxConnection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDownMaxConnection->Location = System::Drawing::Point(138, 71);
			this->numericUpDownMaxConnection->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMaxConnection->Name = L"numericUpDownMaxConnection";
			this->numericUpDownMaxConnection->Size = System::Drawing::Size(40, 22);
			this->numericUpDownMaxConnection->TabIndex = 5;
			this->numericUpDownMaxConnection->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// labelMaxConnection
			// 
			this->labelMaxConnection->AutoSize = true;
			this->labelMaxConnection->Location = System::Drawing::Point(7, 73);
			this->labelMaxConnection->Name = L"labelMaxConnection";
			this->labelMaxConnection->Size = System::Drawing::Size(125, 13);
			this->labelMaxConnection->TabIndex = 0;
			this->labelMaxConnection->Text = L"Maximum connections:";
			// 
			// groupBoxStartMode
			// 
			this->groupBoxStartMode->Controls->Add(this->textBoxServerName);
			this->groupBoxStartMode->Controls->Add(this->labelOpenPort);
			this->groupBoxStartMode->Controls->Add(this->labelServerName);
			this->groupBoxStartMode->Controls->Add(this->labelMaxConnection);
			this->groupBoxStartMode->Controls->Add(this->numericUpDownMaxConnection);
			this->groupBoxStartMode->Controls->Add(this->numericUpDownOpenPort);
			this->groupBoxStartMode->Location = System::Drawing::Point(70, 6);
			this->groupBoxStartMode->Name = L"groupBoxStartMode";
			this->groupBoxStartMode->Size = System::Drawing::Size(334, 99);
			this->groupBoxStartMode->TabIndex = 0;
			this->groupBoxStartMode->TabStop = false;
			this->groupBoxStartMode->Text = L"Server";
			// 
			// textBoxServerName
			// 
			this->textBoxServerName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxServerName->Location = System::Drawing::Point(82, 16);
			this->textBoxServerName->Name = L"textBoxServerName";
			this->textBoxServerName->Size = System::Drawing::Size(246, 22);
			this->textBoxServerName->TabIndex = 3;
			// 
			// groupBoxConnection
			// 
			this->groupBoxConnection->Controls->Add(this->labelAccessPort);
			this->groupBoxConnection->Controls->Add(this->labelIP);
			this->groupBoxConnection->Controls->Add(this->textBoxIP);
			this->groupBoxConnection->Controls->Add(this->numericUpDownPort);
			this->groupBoxConnection->Location = System::Drawing::Point(70, 111);
			this->groupBoxConnection->Name = L"groupBoxConnection";
			this->groupBoxConnection->Size = System::Drawing::Size(334, 84);
			this->groupBoxConnection->TabIndex = 2;
			this->groupBoxConnection->TabStop = false;
			this->groupBoxConnection->Text = L"Host/Client";
			// 
			// labelAccessPort
			// 
			this->labelAccessPort->AutoSize = true;
			this->labelAccessPort->Location = System::Drawing::Point(7, 49);
			this->labelAccessPort->Name = L"labelAccessPort";
			this->labelAccessPort->Size = System::Drawing::Size(31, 13);
			this->labelAccessPort->TabIndex = 5;
			this->labelAccessPort->Text = L"Port:";
			// 
			// labelIP
			// 
			this->labelIP->AutoSize = true;
			this->labelIP->Location = System::Drawing::Point(7, 22);
			this->labelIP->Name = L"labelIP";
			this->labelIP->Size = System::Drawing::Size(51, 13);
			this->labelIP->TabIndex = 3;
			this->labelIP->Text = L"Address:";
			// 
			// groupBoxProfile
			// 
			this->groupBoxProfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxProfile->Controls->Add(this->label4);
			this->groupBoxProfile->Controls->Add(this->label2);
			this->groupBoxProfile->Controls->Add(this->textBoxAvoiding);
			this->groupBoxProfile->Controls->Add(this->label1);
			this->groupBoxProfile->Controls->Add(this->textBoxLooking);
			this->groupBoxProfile->Controls->Add(this->labelComment);
			this->groupBoxProfile->Controls->Add(this->textBoxComment);
			this->groupBoxProfile->Controls->Add(this->textBoxName);
			this->groupBoxProfile->Controls->Add(this->labelName);
			this->groupBoxProfile->Location = System::Drawing::Point(8, 6);
			this->groupBoxProfile->Name = L"groupBoxProfile";
			this->groupBoxProfile->Size = System::Drawing::Size(396, 174);
			this->groupBoxProfile->TabIndex = 1;
			this->groupBoxProfile->TabStop = false;
			this->groupBoxProfile->Text = L"Profile";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Avoiding:";
			// 
			// textBoxAvoiding
			// 
			this->textBoxAvoiding->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxAvoiding->Location = System::Drawing::Point(83, 113);
			this->textBoxAvoiding->Name = L"textBoxAvoiding";
			this->textBoxAvoiding->Size = System::Drawing::Size(307, 22);
			this->textBoxAvoiding->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Looking for:";
			// 
			// textBoxLooking
			// 
			this->textBoxLooking->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxLooking->Location = System::Drawing::Point(83, 87);
			this->textBoxLooking->Name = L"textBoxLooking";
			this->textBoxLooking->Size = System::Drawing::Size(307, 22);
			this->textBoxLooking->TabIndex = 5;
			// 
			// groupBoxWelcome
			// 
			this->groupBoxWelcome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxWelcome->Controls->Add(this->label3);
			this->groupBoxWelcome->Controls->Add(this->textBoxWelcome);
			this->groupBoxWelcome->Location = System::Drawing::Point(6, 6);
			this->groupBoxWelcome->Name = L"groupBoxWelcome";
			this->groupBoxWelcome->Size = System::Drawing::Size(398, 202);
			this->groupBoxWelcome->TabIndex = 3;
			this->groupBoxWelcome->TabStop = false;
			this->groupBoxWelcome->Text = L"Server message";
			// 
			// textBoxWelcome
			// 
			this->textBoxWelcome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxWelcome->Location = System::Drawing::Point(8, 58);
			this->textBoxWelcome->MaxLength = 254;
			this->textBoxWelcome->Name = L"textBoxWelcome";
			this->textBoxWelcome->Size = System::Drawing::Size(382, 136);
			this->textBoxWelcome->TabIndex = 0;
			this->textBoxWelcome->Text = L"";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 59);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(418, 240);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->radioButtonServer);
			this->tabPage1->Controls->Add(this->radioButtonHost);
			this->tabPage1->Controls->Add(this->radioButtonClient);
			this->tabPage1->Controls->Add(this->groupBoxConnection);
			this->tabPage1->Controls->Add(this->groupBoxStartMode);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(410, 214);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Connection";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBoxProfile);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(410, 214);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"User Profile";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::Color::White;
			this->Panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Panel1.BackgroundImage")));
			this->Panel1->Controls->Add(this->TitleLabel);
			this->Panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Panel1->Location = System::Drawing::Point(0, 0);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(442, 53);
			this->Panel1->TabIndex = 34;
			// 
			// TitleLabel
			// 
			this->TitleLabel->AutoSize = true;
			this->TitleLabel->BackColor = System::Drawing::Color::Transparent;
			this->TitleLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TitleLabel->Location = System::Drawing::Point(12, 11);
			this->TitleLabel->Name = L"TitleLabel";
			this->TitleLabel->Size = System::Drawing::Size(286, 30);
			this->TitleLabel->TabIndex = 1;
			this->TitleLabel->Text = L"Change connection settings...";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBoxWelcome);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(410, 214);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Welcome Message";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(391, 26);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Server messages display when any user joins the server. You can add useful\r\ninfor"
				L"mation here like commands, donation links and more.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(360, 26);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Choose a name for yourself, what you\'re looking for in players, what\r\nyou\'re avoi"
				L"ding and a comment.";
			// 
			// StartupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->CancelButton = this->buttonCancel;
			this->ClientSize = System::Drawing::Size(442, 341);
			this->ControlBox = false;
			this->Controls->Add(this->Panel1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(464, 386);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(464, 386);
			this->Name = L"StartupForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Settings Panel > Connection";
			this->Load += gcnew System::EventHandler(this, &StartupForm::StartupForm_Load);
			this->Shown += gcnew System::EventHandler(this, &StartupForm::StartupForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownOpenPort))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPort))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxConnection))->EndInit();
			this->groupBoxStartMode->ResumeLayout(false);
			this->groupBoxStartMode->PerformLayout();
			this->groupBoxConnection->ResumeLayout(false);
			this->groupBoxConnection->PerformLayout();
			this->groupBoxProfile->ResumeLayout(false);
			this->groupBoxProfile->PerformLayout();
			this->groupBoxWelcome->ResumeLayout(false);
			this->groupBoxWelcome->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void StartupForm_Load(System::Object^  sender, System::EventArgs^  e) {
			textBoxServerName->MaxLength = MAX_NAME;
			textBoxIP->MaxLength = MAX_ARRAY;
			textBoxName->MaxLength = MAX_NAME;
			textBoxLooking->MaxLength = MAX_NAME;
			textBoxComment->MaxLength = MAX_NAME;

			switch(MTOPTION.CONNECTION_TYPE){
			case CT_SERVER:
			default:
				radioButtonServer->Checked = true;

				numericUpDownPort->Enabled = false;
				break;
			case CT_HOST:
				radioButtonHost->Checked = true;

				break;
			case CT_CLIENT:
				radioButtonClient->Checked = true;

				numericUpDownOpenPort->Enabled = false;
				break;
			}

			textBoxServerName->Text = gcnew String(MTOPTION.SERVER_NAME);
			textBoxIP->Text = gcnew String(MTOPTION.CONNECTION_IP);
			

			numericUpDownOpenPort->Value = MTOPTION.OPEN_PORT;

			textBoxName->Text = gcnew String(MTOPTION.NAME);
			numericUpDownPort->Value = MTOPTION.PORT;
			numericUpDownMaxConnection->Value = MTOPTION.MAX_CONNECTION;

			textBoxLooking->Text = gcnew String(MTOPTION.LOOKING);
			textBoxAvoiding->Text = gcnew String(MTOPTION.AVOIDING);
			textBoxComment->Text = gcnew String(MTOPTION.COMMENT);
			textBoxWelcome->Text = gcnew String(MTOPTION.WELCOME);
		}

		System::Void StartupForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			buttonOK->Focus();
		}

		System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
			IntPtr mp;
			TCHAR p1[MAX_ARRAY];
			TCHAR *p2;

			if(radioButtonServer->Checked){
				MTOPTION.CONNECTION_TYPE = CT_SERVER;

				// サーバ名チェック
				if(textBoxServerName->Text->Length == 0){
					MessageBox::Show(L"Please enter a server IP address.", L"Invalid IP Address", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxServerName->Text);
				_tcscpy_s(p1, static_cast<PTCHAR>(mp.ToPointer()));
				Runtime::InteropServices::Marshal::FreeHGlobal(mp);
				p2 = _tcschr(p1, _T(','));
				if (p2 != NULL){
                    MessageBox::Show(L"The server IP address cannot contain illegal characters such as the comma.\n", L"Invalid IP Address", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
			else if(radioButtonHost->Checked){
				MTOPTION.CONNECTION_TYPE = CT_HOST;
			}
			else if(radioButtonClient->Checked){
				MTOPTION.CONNECTION_TYPE = CT_CLIENT;
			}
			else{
				MTOPTION.CONNECTION_TYPE = CT_FREE;
			}


			// サーバ名
			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxServerName->Text);
			_tcscpy_s(MTOPTION.SERVER_NAME, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			// IPチェック
			if(MTOPTION.CONNECTION_TYPE == CT_HOST || MTOPTION.CONNECTION_TYPE == CT_CLIENT) {
				if(textBoxIP->Text->Length == 0){
                    MessageBox::Show(L"Please enter an IP address.\nDepending on if you're serving, hosting or connecting, these will differ slightly.", L"Invalid IP Address", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxIP->Text);
				_tcscpy_s(p1, static_cast<PTCHAR>(mp.ToPointer()));
				p2 = _tcschr(p1, _T(','));
				if (p2 != NULL){
                    MessageBox::Show(L"The IP address cannot contain illegal characters such as the comma.\n", L"Invalid IP Address", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxIP->Text);
			_tcscpy_s(MTOPTION.CONNECTION_IP, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			// 名前チェック
			if(textBoxName->Text->Length == 0){
				textBoxName->Text = gcnew String(MTOPTION.NAME);

				if(textBoxName->Text->Length == 0){
					textBoxName->Text = gcnew String(L"NamelessDude"); //Default name
				}
			}

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxName->Text);
			_tcscpy_s(MTOPTION.NAME, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			MTOPTION.OPEN_PORT      = (UINT)numericUpDownOpenPort->Value;
			MTOPTION.PORT           = (UINT)numericUpDownPort->Value;
			MTOPTION.MAX_CONNECTION = (UINT)numericUpDownMaxConnection->Value;

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxLooking->Text);
			_tcscpy_s(MTOPTION.LOOKING, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxAvoiding->Text);
			_tcscpy_s(MTOPTION.AVOIDING, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxComment->Text);
			_tcscpy_s(MTOPTION.COMMENT, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxWelcome->Text);
			_tcscpy_s(MTOPTION.WELCOME, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			this->Close();
		}

		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			MTOPTION.CONNECTION_TYPE = CT_FREE;
			
			this->Close();
		}

		System::Void radioButtonServer_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			numericUpDownPort->Enabled     = false;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = true;
			textBoxServerName->Enabled     = true;
			textBoxIP->Enabled             = false;
			groupBoxConnection->Enabled    = false;
			groupBoxWelcome->Enabled       = true;

			buttonOK->Enabled = true;
		}

		System::Void radioButtonHost_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			numericUpDownPort->Enabled     = true;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
			groupBoxConnection->Enabled    = true;
			groupBoxWelcome->Enabled       = false;
		}

		System::Void radioButtonClient_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = false;
			numericUpDownPort->Enabled     = true;
			labelOpenPort->Enabled         = false;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
			groupBoxConnection->Enabled    = true;
			groupBoxWelcome->Enabled       = false;
		}
		System::Void buttonEnd_Click(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);
		}
	};
}
