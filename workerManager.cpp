#include "workerManager.h"
#include <iostream>
using namespace std;

WorkerManager::WorkerManager(){
	this->m_EmpNum = 0;
	this->m_EmpArray = nullptr;
}

void WorkerManager::Show_menu(){
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}
void WorkerManager::exitSystem(){
    cout << "��ӭ�´�����" << endl;
    system("pause");
    exit(0);
}

void WorkerManager::Add_Emp() {
	cout << "����������ְ�������� " << endl;


	system()
}



WorkerManager::~WorkerManager(){

}
