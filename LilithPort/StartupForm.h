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

	private: System::Windows::Forms::TextBox^  textBoxServerName;

	private: System::Windows::Forms::Label^  labelIP;
	private: System::Windows::Forms::Label^  labelAccessPort;


	private: System::Windows::Forms::RichTextBox^  textBoxWelcome;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  textBoxRegion;

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
			this->textBoxServerName = (gcnew System::Windows::Forms::TextBox());
			this->labelAccessPort = (gcnew System::Windows::Forms::Label());
			this->labelIP = (gcnew System::Windows::Forms::Label());
			this->textBoxWelcome = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxRegion = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownOpenPort))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPort))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxConnection))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonServer
			// 
			this->radioButtonServer->AutoSize = true;
			this->radioButtonServer->Location = System::Drawing::Point(6, 7);
			this->radioButtonServer->Name = L"radioButtonServer";
			this->radioButtonServer->Size = System::Drawing::Size(56, 17);
			this->radioButtonServer->TabIndex = 0;
			this->radioButtonServer->Text = L"Server";
			this->radioButtonServer->UseVisualStyleBackColor = true;
			this->radioButtonServer->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonServer_CheckedChanged);
			// 
			// radioButtonHost
			// 
			this->radioButtonHost->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButtonHost->AutoSize = true;
			this->radioButtonHost->Location = System::Drawing::Point(6, 34);
			this->radioButtonHost->Name = L"radioButtonHost";
			this->radioButtonHost->Size = System::Drawing::Size(49, 17);
			this->radioButtonHost->TabIndex = 1;
			this->radioButtonHost->Text = L"Host";
			this->radioButtonHost->UseVisualStyleBackColor = true;
			this->radioButtonHost->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonHost_CheckedChanged);
			// 
			// radioButtonClient
			// 
			this->radioButtonClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButtonClient->AutoSize = true;
			this->radioButtonClient->Location = System::Drawing::Point(6, 61);
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
			this->labelServerName->Location = System::Drawing::Point(78, 11);
			this->labelServerName->Name = L"labelServerName";
			this->labelServerName->Size = System::Drawing::Size(72, 13);
			this->labelServerName->TabIndex = 0;
			this->labelServerName->Text = L"Server name:";
			// 
			// textBoxIP
			// 
			this->textBoxIP->Location = System::Drawing::Point(157, 90);
			this->textBoxIP->Name = L"textBoxIP";
			this->textBoxIP->Size = System::Drawing::Size(186, 22);
			this->textBoxIP->TabIndex = 0;
			// 
			// labelOpenPort
			// 
			this->labelOpenPort->AutoSize = true;
			this->labelOpenPort->Location = System::Drawing::Point(79, 38);
			this->labelOpenPort->Name = L"labelOpenPort";
			this->labelOpenPort->Size = System::Drawing::Size(65, 13);
			this->labelOpenPort->TabIndex = 0;
			this->labelOpenPort->Text = L"Listen port:";
			// 
			// numericUpDownOpenPort
			// 
			this->numericUpDownOpenPort->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDownOpenPort->Location = System::Drawing::Point(290, 35);
			this->numericUpDownOpenPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65535, 0, 0, 0 });
			this->numericUpDownOpenPort->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1024, 0, 0, 0 });
			this->numericUpDownOpenPort->Name = L"numericUpDownOpenPort";
			this->numericUpDownOpenPort->Size = System::Drawing::Size(53, 22);
			this->numericUpDownOpenPort->TabIndex = 4;
			this->numericUpDownOpenPort->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7500, 0, 0, 0 });
			// 
			// buttonOK
			// 
			this->buttonOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonOK->Location = System::Drawing::Point(186, 181);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(80, 26);
			this->buttonOK->TabIndex = 4;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &StartupForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Location = System::Drawing::Point(272, 181);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(80, 26);
			this->buttonCancel->TabIndex = 5;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StartupForm::buttonCancel_Click);
			// 
			// textBoxComment
			// 
			this->textBoxComment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxComment->Location = System::Drawing::Point(80, 40);
			this->textBoxComment->Name = L"textBoxComment";
			this->textBoxComment->Size = System::Drawing::Size(272, 22);
			this->textBoxComment->TabIndex = 1;
			// 
			// labelComment
			// 
			this->labelComment->AutoSize = true;
			this->labelComment->Location = System::Drawing::Point(6, 43);
			this->labelComment->Name = L"labelComment";
			this->labelComment->Size = System::Drawing::Size(69, 13);
			this->labelComment->TabIndex = 4;
			this->labelComment->Text = L"Description:";
			// 
			// textBoxName
			// 
			this->textBoxName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxName->Location = System::Drawing::Point(80, 13);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(272, 22);
			this->textBoxName->TabIndex = 0;
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(6, 16);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(60, 13);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Nickname:";
			// 
			// numericUpDownPort
			// 
			this->numericUpDownPort->Location = System::Drawing::Point(290, 115);
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
			this->numericUpDownMaxConnection->Location = System::Drawing::Point(303, 62);
			this->numericUpDownMaxConnection->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMaxConnection->Name = L"numericUpDownMaxConnection";
			this->numericUpDownMaxConnection->Size = System::Drawing::Size(40, 22);
			this->numericUpDownMaxConnection->TabIndex = 5;
			this->numericUpDownMaxConnection->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// labelMaxConnection
			// 
			this->labelMaxConnection->AutoSize = true;
			this->labelMaxConnection->Location = System::Drawing::Point(79, 65);
			this->labelMaxConnection->Name = L"labelMaxConnection";
			this->labelMaxConnection->Size = System::Drawing::Size(155, 13);
			this->labelMaxConnection->TabIndex = 0;
			this->labelMaxConnection->Text = L"Maximum number of players:";
			// 
			// textBoxServerName
			// 
			this->textBoxServerName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxServerName->Location = System::Drawing::Point(157, 8);
			this->textBoxServerName->Name = L"textBoxServerName";
			this->textBoxServerName->Size = System::Drawing::Size(186, 22);
			this->textBoxServerName->TabIndex = 3;
			// 
			// labelAccessPort
			// 
			this->labelAccessPort->AutoSize = true;
			this->labelAccessPort->Location = System::Drawing::Point(78, 117);
			this->labelAccessPort->Name = L"labelAccessPort";
			this->labelAccessPort->Size = System::Drawing::Size(31, 13);
			this->labelAccessPort->TabIndex = 5;
			this->labelAccessPort->Text = L"Port:";
			// 
			// labelIP
			// 
			this->labelIP->AutoSize = true;
			this->labelIP->Location = System::Drawing::Point(78, 93);
			this->labelIP->Name = L"labelIP";
			this->labelIP->Size = System::Drawing::Size(51, 13);
			this->labelIP->TabIndex = 3;
			this->labelIP->Text = L"Address:";
			// 
			// textBoxWelcome
			// 
			this->textBoxWelcome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxWelcome->Location = System::Drawing::Point(6, 6);
			this->textBoxWelcome->MaxLength = 254;
			this->textBoxWelcome->Name = L"textBoxWelcome";
			this->textBoxWelcome->Size = System::Drawing::Size(346, 133);
			this->textBoxWelcome->TabIndex = 0;
			this->textBoxWelcome->Text = L"";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(366, 171);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->labelAccessPort);
			this->tabPage1->Controls->Add(this->textBoxServerName);
			this->tabPage1->Controls->Add(this->labelIP);
			this->tabPage1->Controls->Add(this->textBoxIP);
			this->tabPage1->Controls->Add(this->radioButtonServer);
			this->tabPage1->Controls->Add(this->numericUpDownPort);
			this->tabPage1->Controls->Add(this->labelOpenPort);
			this->tabPage1->Controls->Add(this->radioButtonHost);
			this->tabPage1->Controls->Add(this->labelServerName);
			this->tabPage1->Controls->Add(this->labelMaxConnection);
			this->tabPage1->Controls->Add(this->radioButtonClient);
			this->tabPage1->Controls->Add(this->numericUpDownMaxConnection);
			this->tabPage1->Controls->Add(this->numericUpDownOpenPort);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(358, 145);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Mode Select";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBoxRegion);
			this->tabPage2->Controls->Add(this->labelComment);
			this->tabPage2->Controls->Add(this->labelName);
			this->tabPage2->Controls->Add(this->textBoxComment);
			this->tabPage2->Controls->Add(this->textBoxName);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(358, 145);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Profile";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBoxWelcome);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(358, 145);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Welcome Message";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBoxRegion
			// 
			this->textBoxRegion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxRegion->Location = System::Drawing::Point(80, 68);
			this->textBoxRegion->Name = L"textBoxRegion";
			this->textBoxRegion->Size = System::Drawing::Size(272, 22);
			this->textBoxRegion->TabIndex = 5;
			// 
			// StartupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonCancel;
			this->ClientSize = System::Drawing::Size(374, 252);
			this->ControlBox = false;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(380, 258);
			this->Name = L"StartupForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &StartupForm::StartupForm_Load);
			this->Shown += gcnew System::EventHandler(this, &StartupForm::StartupForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownOpenPort))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPort))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxConnection))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void StartupForm_Load(System::Object^  sender, System::EventArgs^  e) {
			textBoxServerName->MaxLength      = MAX_NAME;
			textBoxIP->MaxLength              = MAX_ARRAY;
			textBoxName->MaxLength            = MAX_NAME;
			textBoxComment->MaxLength         = MAX_NAME;
			textBoxRegion->MaxLength          = MAX_NAME;

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

			textBoxComment->Text = gcnew String(MTOPTION.COMMENT);
			textBoxRegion->Text = gcnew String(MTOPTION.REGION);
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
					MessageBox::Show(L"Please enter a server name.", L"Server Mode Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					return;
				}
				mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxServerName->Text);
				_tcscpy_s(p1, static_cast<PTCHAR>(mp.ToPointer()));
				Runtime::InteropServices::Marshal::FreeHGlobal(mp);
				p2 = _tcschr(p1, _T(','));
				if (p2 != NULL){
                    MessageBox::Show(L"The server name cannot contain illegal characters such as the comma.\n", L"Server Mode Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
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
                    MessageBox::Show(L"Please enter a destination address.\nThe destination address is the server you are connecting to.", L"Host/Client Mode Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					return;
				}
				mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxIP->Text);
				_tcscpy_s(p1, static_cast<PTCHAR>(mp.ToPointer()));
				p2 = _tcschr(p1, _T(','));
				if (p2 != NULL){
                    MessageBox::Show(L"The destination address cannot contain illegal characters such as the comma.\n", L"Host/Client Mode Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
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
					textBoxName->Text = gcnew String(L"Guest"); //Default name
				}
			}

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxName->Text);
			_tcscpy_s(MTOPTION.NAME, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			MTOPTION.OPEN_PORT      = (UINT)numericUpDownOpenPort->Value;
			MTOPTION.PORT           = (UINT)numericUpDownPort->Value;
			MTOPTION.MAX_CONNECTION = (UINT)numericUpDownMaxConnection->Value;

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxComment->Text);
			_tcscpy_s(MTOPTION.COMMENT, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxRegion->Text);
			_tcscpy_s(MTOPTION.REGION, static_cast<PTCHAR>(mp.ToPointer()));
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

			buttonOK->Enabled = true;
		}

		System::Void radioButtonHost_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			numericUpDownPort->Enabled     = true;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
		}

		System::Void radioButtonClient_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = false;
			numericUpDownPort->Enabled     = true;
			labelOpenPort->Enabled         = false;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
		}
		System::Void buttonEnd_Click(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);
		}
	};
}
