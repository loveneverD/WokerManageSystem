//
// Created by lc on 2023/11/18.
//

#ifndef BOSS_H
#define BOSS_H
#include <iostream>
#include "worker.h"
using namespace std;

class Boss : public Worker {
public:
    Boss(int id, string name, int dId);

    virtual void ShowInfo();

    virtual string getDeptName();
};



#endif //BOSS_H
