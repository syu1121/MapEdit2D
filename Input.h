#pragma once


namespace Input {
	//�L�[�{�[�h�擾�֘A
	// �L�[�{�[�h�̏�Ԃ��X�V
	void KeyStateUpdate();
	// �L�[�������ꂽ�u��
	bool IsKeyUP(int keyCode);
	// �L�[�������ꂽ�u�ԁi�����j
	bool IsKeyDown(int keyCode);
	// �L�[��������Ă����
	int IsKeepKeyDown(int keyCode);

	bool IsMouseDown(); // �}�E�X�̃{�^���������ꂽ�u��
	bool IsMouseUP(); // �}�E�X�̃{�^���ꂪ�����ꂽ�u��
	bool IsMouseKeep(); // �}�E�X�̃{�^����������Ă����
	bool IsButtonDown(int button);
	bool IsButtonUp(int button);
	bool IsButtonKeep(int button);
}

//MOUSE_INPUT_LEFT   => 0x0001
//MOUSE_INPUT_MIDDLE => 0x0004
//MOUSE_INPUT_RIGHT  => 0x0002