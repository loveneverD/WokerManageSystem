//
// Created by lc on 2023/11/18.
//

#include "employee.h"

Employee::Employee(int id, string name, int dId) {
    this->m_ID = id;
    this->m_Name = move(name); // ����ʹ��һ�εı���ͨ��move�Ϳ����ƶ������ǿ���
    this->m_DeptID = dId;
}

void Employee::ShowInfo() {
    cout << "ְ����ţ� " << this->m_ID
        << " \tְ�������� " << this->m_Name
        << " \t��λ��" << this->getDeptName()
        << " \t��λְ����ɾ�����������" << endl;
}

string Employee::getDeptName() {
    return {"Ա��"};
}

