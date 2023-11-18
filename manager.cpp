//
// Created by lc on 2023/11/18.
//
#include "manager.h"

Manager::Manager(int id, string name, int dId) {
    this->m_ID = id;
    this->m_Name = move(name); // 对于使用一次的变量通过move就可以移动而不是拷贝
    this->m_DeptID = dId;
}

void Manager::ShowInfo() {
    cout << "职工编号： " << this->m_ID
        << " \t职工姓名： " << this->m_Name
        << " \t岗位：" << this->getDeptName()
        << " \t岗位职责：完成老板交给的任务,并下发任务给员工" << endl;
}

string Manager::getDeptName() {
    return {"经理"};
}

