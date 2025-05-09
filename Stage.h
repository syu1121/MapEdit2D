#pragma once
#include "Library/GameObject.h"
#include <vector> // ‰Â•Ï’·”z—ñ
#include "MapChip.h"
#include "MapEdit.h"

class Stage :
    public GameObject
{
    //int *bgHandle;
    //std::vector<int> bgHandle_;
    MapChip* mapChip_;
    MapEdit* mapEdit_;

public:
    Stage();
    ~Stage();
    void Update() override;
    void Draw() override;
private:
    

};

