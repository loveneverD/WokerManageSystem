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
    cout << "ְ����ţ� " << this->m_ID
        << " \tְ�������� " << this->m_Name
        << " \t��λ��" << this->getDeptName()
        << " \t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDeptName()
{
    return {"�ܲ�"};
}
