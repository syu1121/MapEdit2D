#include "MapEdit.h"

MapEdit::MapEdit()
	: GameObject(), myMap_(MAP_WIDTH * MAP_HEIGHT, -1)
{
}

MapEdit::~MapEdit()
{
}

void MapEdit::Update()
{
}

void MapEdit::Draw()
{
	DrawBox(0, 0, MAP_WIDTH * MAP_IMAGE_SIZE, MAP_HEIGHT * MAP_IMAGE_SIZE, GetColor(255, 255, 255), FALSE, 3);
	for (int i = 0; i < MAP_WIDTH; i++)
	{
		for (int j = 0; j < MAP_HEIGHT; j++)
		{
			DrawLine(i * MAP_IMAGE_SIZE, 0, i* MAP_IMAGE_SIZE, MAP_IMAGE_SIZE * MAP_WIDTH, GetColor(0, 0, 255));
			DrawLine(0, j * MAP_IMAGE_SIZE, MAP_HEIGHT * MAP_IMAGE_SIZE, j * MAP_IMAGE_SIZE, GetColor(0, 0, 255));
		}
	}
}
