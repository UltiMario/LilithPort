#include "stdafx.h"
#include "OptionForm.h"
#include "MainForm.h"

using namespace LilithPort;

void OptionForm::SaveOption(bool apply){
	MainForm^ parent = safe_cast<MainForm^>(this->Owner);

	try {
		FileVersionInfo^ info = FileVersionInfo::GetVersionInfo(textBoxGameExe->Text);

		if (!IsCompatibleFMExecutable(info->FileDescription, info->LegalCopyright)) {
			throw gcnew Exception;
		}
	}
	catch (Exception^) {
		textBoxGameExe->Text = gcnew String(L"Invalid or non-Fighter Maker 95/2002 executable file.");
	}

	IntPtr mp;
	// �p�X
	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxGameExe->Text);
	_tcscpy_s(MTOPTION.GAME_EXE, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxReplayFolder->Text);
	_tcscpy_s(MTOPTION.REPLAY_FOLDER, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxVSSound->Text);
	_tcscpy_s(MTOPTION.VS_SOUND, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxNoticeSound->Text);
	_tcscpy_s(MTOPTION.NOTICE_SOUND, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxEnterSound->Text);
	_tcscpy_s(MTOPTION.ENTER_SOUND, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxNameSound->Text);
	_tcscpy_s(MTOPTION.NAME_SOUND, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxTalkSound->Text);
	_tcscpy_s(MTOPTION.TALK_SOUND, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxSeekSound->Text);
	_tcscpy_s(MTOPTION.SEEK_SOUND, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxKeywordSoundPath->Text);
	_tcscpy_s(MTOPTION.KEYWORD_SOUND, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxKeyword->Text);
	_tcscpy_s(MTOPTION.KEYWORD, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);
	

	MTOPTION.ENTER_SOUND_ENABLE   = checkBoxEnterSound->Checked;
	MTOPTION.VS_SOUND_ENABLE      = checkBoxVSSound->Checked;
	MTOPTION.NOTICE_SOUND_ENABLE  = checkBoxNoticeSound->Checked;
	MTOPTION.NAME_SOUND_ENABLE    = checkBoxNameSound->Checked;
	MTOPTION.TALK_SOUND_ENABLE    = checkBoxTalkSound->Checked;
	MTOPTION.SEEK_SOUND_ENABLE    = checkBoxSeekSound->Checked;
	MTOPTION.KEYWORD_SOUND_ENABLE = checkBoxKeywordSound->Checked;

	MTOPTION.GET_IP_ENABLE        = checkBoxGetIP->Checked;
	MTOPTION.SHOW_GAME_OPTION     = checkBoxShowGameOption->Checked;
	MTOPTION.SHOW_RESULT          = checkBoxShowResult->Checked;

	// �R�����g
	if(textBoxComment->Text != gcnew String(MTOPTION.COMMENT)){
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxComment->Text);
		_tcscpy_s(MTOPTION.COMMENT, static_cast<PTCHAR>(mp.ToPointer()));
		Runtime::InteropServices::Marshal::FreeHGlobal(mp);

		parent->ChangeComment(textBoxComment->Text);
	}

	// �Q�[��
	MTOPTION.MAX_STAGE      = (UINT)numericUpDownMaxStage->Value;
	MTOPTION.STAGE_SELECT   = (UINT)numericUpDownStageSelect->Value;
	MTOPTION.ROUND          = (UINT)numericUpDownRound->Value;
	MTOPTION.TIMER          = (UINT)numericUpDownTimer->Value;
	MTOPTION.SIMULATE_DELAY = (UINT)numericUpDownSimDelay->Value;

	MTOPTION.TEAM_ROUND_HP     = checkBoxTeamRoundHP->Checked;
	MTOPTION.DISPLAY_NAME      = checkBoxName->Checked;
	MTOPTION.DISPLAY_VERSUS    = checkBoxVersus->Checked;
	MTOPTION.DISPLAY_FRAMERATE = checkBoxFramerate->Checked;
	MTOPTION.DISPLAY_RAND      = checkBoxRand->Checked;

	MTOPTION.REPLAY_DIVIDE      = checkBoxDivide->Checked;
	MTOPTION.CHANGE_WINDOW_SIZE = checkBoxWindowSize->Checked;

	MTOPTION.MAX_CONNECTION = (UINT)numericUpDownMaxConnection->Value;
	MTOPTION.BGM_VOLUME     = (UINT)trackBarBGM->Value * 5;
	MTOPTION.SE_VOLUME      = (UINT)trackBarSE->Value * 5;

	if(radioButtonReplayVersion2->Checked){
		MTOPTION.REPLAY_VERSION = 2;
	}
	else{
		MTOPTION.REPLAY_VERSION = 1;
	}

	// �����蔻��
	if(MTOPTION.HIT_JUDGE != checkBoxHitJudge->Checked){
		MTOPTION.HIT_JUDGE = checkBoxHitJudge->Checked;

		// �Q�[���N�����Ȃ瑦���ύX
		if(MTINFO.INITIALIZED && MTINFO.PROCESS != NULL){
			DWORD b = MTOPTION.HIT_JUDGE;

			if(MTINFO.KGT2K){
				WriteProcessMemory(MTINFO.PROCESS, (LPVOID)HIT_JUDGE, &b, 4, NULL);
			}
			else{
				WriteProcessMemory(MTINFO.PROCESS, (LPVOID)HIT_JUDGE_95, &b, 4, NULL);
			}
		}
	}

	// �ڍאݒ�
	// ���O�t�@�C���ۑ��`��
	if(radioButtonLogRTF->Checked){
		MTOPTION.LOG_FORMAT_RTF = true;
	}else{
		MTOPTION.LOG_FORMAT_RTF = false;
	}

	// �����ŃE�B���h�E��_��
	MTOPTION.TALK_FLASH = checkBoxTalkFlash->Checked;
	// ���O���Ă΂ꂽ��E�B���h�E��_��
	MTOPTION.NAME_FLASH = checkBoxNameFlash->Checked;

	//�@�F
	MTCOLOR.SERVER_NAME    = buttonServerName->ForeColor.ToArgb();
	MTCOLOR.HOST_NAME      = buttonHostName->ForeColor.ToArgb();
	MTCOLOR.CLIENT_NAME    = buttonClientName->ForeColor.ToArgb();
	MTCOLOR.REST_STATE     = buttonRestState->BackColor.ToArgb();
	MTCOLOR.VS_STATE       = buttonVSState->BackColor.ToArgb();
	MTCOLOR.WATCH_STATE    = buttonWatchState->BackColor.ToArgb();
	MTCOLOR.SEEK_STATE     = buttonSeekState->BackColor.ToArgb();

	MTCOLOR.SYSTEM_MESSAGE = buttonSystemMessage->ForeColor.ToArgb();
	MTCOLOR.ERROR_MESSAGE  = buttonErrorMessage->ForeColor.ToArgb();
	MTCOLOR.DEBUG_MESSAGE  = buttonDebugMessage->ForeColor.ToArgb();
	MTCOLOR.NOTICE_BACK    = buttonNoticeBack->BackColor.ToArgb();
	MTCOLOR.COMMENT_BACK   = buttonCommentBack->BackColor.ToArgb();
	MTCOLOR.SECRET         = buttonSecret->ForeColor.ToArgb();

	// �F�𔽉f������
	parent->ResetColor();

	// �l�̃`�F�b�N
	CheckMTOption();

	if(apply){
		textBoxGameExe->Text          = gcnew String(MTOPTION.GAME_EXE);
		textBoxReplayFolder->Text     = gcnew String(MTOPTION.REPLAY_FOLDER);
		textBoxVSSound->Text          = gcnew String(MTOPTION.VS_SOUND);
		textBoxNoticeSound->Text      = gcnew String(MTOPTION.NOTICE_SOUND);
		textBoxEnterSound->Text       = gcnew String(MTOPTION.ENTER_SOUND);
		textBoxNameSound->Text        = gcnew String(MTOPTION.NAME_SOUND);
		textBoxTalkSound->Text        = gcnew String(MTOPTION.TALK_SOUND);
		textBoxSeekSound->Text        = gcnew String(MTOPTION.SEEK_SOUND);
		textBoxKeywordSoundPath->Text = gcnew String(MTOPTION.KEYWORD_SOUND);
	}

	SaveMTOption();
}
void OptionForm::CloseOption(){
	MainForm^ parent = safe_cast<MainForm^>(this->Owner);
	parent->ChangeProfileEnabled();
}
bool OptionForm::CheckTextProfileName(String^ buf){
	// �v���t�@�C�����o���f�[�V����
	String^ mes;
	if(buf == gcnew String(MTOPTION.PROFILE)){
		return true;
	}
	if(buf->Length == 0){
		mes = "�v���t�@�C�������󗓂ł��B";
	}
	if(buf->Contains(",") || buf->Contains("[") || buf->Contains("]")){
		mes = "�v���t�@�C�����Ɏg�p�ł��Ȃ������i, [ ]�j���܂܂�Ă��܂��B";
	}
	for(int i=0; i < Profile::SystemSection->Length; i++){
		if(buf == Profile::SystemSection[i]){
			mes = "���̃v���t�@�C�����͎g�p�ł��܂���B";
		}
	}
	for(int i=0; i < Profile::ProfileList->Count; i++){
		if(buf == Profile::ProfileList[i]){
			mes = "���̃v���t�@�C�����͊��ɑ��݂��܂��B";
		}
	}
	if(mes != nullptr){
		MessageBox::Show(mes, "�v���t�@�C���ۑ�", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return true;
	}
	return false;
}
void OptionForm::DeleteProfile(String^ buf){
	// �v���t�@�C���폜
	TCHAR bufProfile[MAX_ARRAY];
	IntPtr mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(buf);
	_tcscpy_s(bufProfile, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	DeleteSection(bufProfile);
	SaveProfileOption();
}
void OptionForm::OverWriteProfile(String^ buf){
	// �㏑���ۑ�
	DeleteSection(MTOPTION.PROFILE);

	IntPtr mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(buf);
	_tcscpy_s(MTOPTION.PROFILE, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	SaveMTOption();
}