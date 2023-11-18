//
// Created by lc on 2023/11/18.
//

#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "worker.h"
class Manager : public Worker {
public:
    Manager(int id, string name, int dId);

    virtual void ShowInfo();

    virtual string getDeptName();
};




#endif //MANAGER_H
