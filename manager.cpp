//
// Created by lc on 2023/11/18.
//
#include "manager.h"

Manager::Manager(int id, string name, int dId) {
    this->m_ID = id;
    this->m_Name = move(name); // ����ʹ��һ�εı���ͨ��move�Ϳ����ƶ������ǿ���
    this->m_DeptID = dId;
}

void Manager::ShowInfo() {
    cout << "ְ����ţ� " << this->m_ID
        << " \tְ�������� " << this->m_Name
        << " \t��λ��" << this->getDeptName()
        << " \t��λְ������ϰ彻��������,���·������Ա��" << endl;
}

string Manager::getDeptName() {
    return {"����"};
}

