#include "workerManager.h"
#include <iostream>
using namespace std;

WorkerManager::WorkerManager(){
	this->m_EmpNum = 0;
	this->m_EmpArray = nullptr;
}

void WorkerManager::Show_menu(){
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}
void WorkerManager::exitSystem(){
    cout << "欢迎下次再来" << endl;
    system("pause");
    exit(0);
}

void WorkerManager::Add_Emp() {
	cout << "请输入增加职工数量： " << endl;


	system()
}



WorkerManager::~WorkerManager(){

}
