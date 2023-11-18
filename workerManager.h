#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class WorkerManager{
public:
    // 构造函数
    WorkerManager();

    // 展示菜单
    void Show_menu();

    // 退出系统
    void exitSystem();

    // 析构函数
    ~WorkerManager();

    // 记录文件中人数
    int m_EmpNum;

    // 员工数组的指针
    Worker ** m_EmpArray;

    // 添加员工
    void Add_Emp();


};