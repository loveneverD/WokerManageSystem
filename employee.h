//
// Created by lc on 2023/11/17.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "worker.h"
using namespace std;

class Employee : public Worker {
public:
    Employee(int id, string name, int dId);

    virtual void ShowInfo();

    virtual string getDeptName();
};



#endif //EMPLOYEE_H
