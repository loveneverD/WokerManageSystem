#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class WorkerManager{
public:
    // ���캯��
    WorkerManager();

    // չʾ�˵�
    void Show_menu();

    // �˳�ϵͳ
    void exitSystem();

    // ��������
    ~WorkerManager();

    // ��¼�ļ�������
    int m_EmpNum;

    // Ա�������ָ��
    Worker ** m_EmpArray;

    // ���Ա��
    void Add_Emp();


};