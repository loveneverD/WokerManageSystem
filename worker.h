#pragma once
#include <iostream>
using namespace std;

class Worker{
public:   
    // 显示个人信息
    virtual void ShowInfo() = 0;

    // 获取岗位名称
    virtual string getDeptName() = 0;

    // 职工基本信息
    int m_ID; // 编号
    string m_Name; // 姓名
    int m_DeptID; // 员工所在部门的编号

};