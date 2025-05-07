#include "MapChip.h"
#include "source\Screen.h"

namespace
{
	const int IMAGE_SIZE = { 32 }; // �摜�̃T�C�Y
	const int MAP_CHIP_WIDTH = { 16 }; // �`�b�v�̉����ѐ�
	const int MAP_CHIP_HEIGHT = { 12 }; // �`�b�v�̏c���ѐ�
	const int MAP_CHIP_NUM_X = { 8 };
	const int MAP_CHIP_NUM_Y = { 24 };
	const int MAP_CHIP_WIN_WIDTH = { IMAGE_SIZE * MAP_CHIP_NUM_X };
	const int MAP_CHIP_WIN_HEIGHT = { IMAGE_SIZE * MAP_CHIP_NUM_Y * MAP_CHIP_NUM_X };
	
}

MapChip::MapChip()
	: GameObject(), bgHandle(MAP_CHIP_WIDTH * MAP_CHIP_HEIGHT, -1)
{
	LoadDivGraph("./bg.png", MAP_CHIP_WIDTH * MAP_CHIP_HEIGHT, MAP_CHIP_WIDTH, MAP_CHIP_HEIGHT, IMAGE_SIZE, IMAGE_SIZE, bgHandle.data());
}

MapChip::~MapChip()
{
	for (int i = 0; i < MAP_CHIP_WIDTH * MAP_CHIP_HEIGHT; i++)
	{
		if (bgHandle[i] != -1)
		{
			DeleteGraph(bgHandle[i]);
			bgHandle[i] = -1;
		}
	}
}

void MapChip::Update()
{
}

void MapChip::Draw()
{
	int TOPLEFT_X = Screen::WIDTH - MAP_CHIP_WIN_WIDTH;
	int TOPLEFT_Y = 0;
	int RIGHTBOTTOM_X = Screen::WIDTH;
	int RIGHTBOTTOM_Y = MAP_CHIP_WIN_HEIGHT;

	for (int i = 0; i < MAP_CHIP_NUM_X; i++)
	{
		for (int j = 0; j < MAP_CHIP_NUM_Y; j++)
		{
			DrawGraph(TOPLEFT_X + i * IMAGE_SIZE, TOPLEFT_Y + j * IMAGE_SIZE, bgHandle[i + j * MAP_CHIP_NUM_X], TRUE);
		}
	}
	
	DrawBox(TOPLEFT_X, TOPLEFT_Y, RIGHTBOTTOM_X, RIGHTBOTTOM_Y, GetColor(255, 0, 0), FALSE, 3);
}
