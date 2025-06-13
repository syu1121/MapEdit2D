#pragma once
#include "Library/GameObject.h"
#include <vector>
#include "globals.h"

class MapChip :
    public GameObject
{
    std::vector<int>bgHandle;
    std::vector<Rect> bgRects_;
    bool isUpdate_;
    bool isInMapChipArea_;
    Point selected_;
    int selectedIndex_;
    bool isHold_;

public:
    MapChip();
    ~MapChip();
    void Update() override;
    void Draw() override;
    int GetHandle(int index) { return bgHandle[index]; }
    bool IsHold(); // �}�b�v�`�b�v�������Ă��邩�ǂ���
    int GetHoldImage(); // �����Ă�}�b�v�`�b�v�̃n���h�����擾����
};

