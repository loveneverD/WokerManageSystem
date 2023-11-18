//
// Created by lc on 2023/11/18.
//
#include "boss.h"

Boss::Boss(int id, string name, int dId)
{
    this->m_ID = id;
    this->m_Name = move(name);
    this->m_DeptID = dId;

}

void Boss::ShowInfo()
{
    cout << "职工编号： " << this->m_ID
        << " \t职工姓名： " << this->m_Name
        << " \t岗位：" << this->getDeptName()
        << " \t岗位职责：管理公司所有事务" << endl;
}

string Boss::getDeptName()
{
    return {"总裁"};
}
