#include "workerManager.h"
#include <iostream>
using namespace std;

WorkerManager::WorkerManager(){

}

void WorkerManager::Show_menu(){
    cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统?? **********" << endl;
	cout << "*************  0.退出管理程??  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文件  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}
void WorkerManager::exitSystem(){
    cout << "欢迎下次再来" << endl;
    system("pause");
    exit(0);
}

WorkerManager::~WorkerManager(){

}

int main(){
    WorkerManager wm;
    int choice = 0;
    wm.Show_menu();
    while (true){
		cout << "请输入您的选择:" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: //退出系统
			wm.exitSystem();
			break;
		case 1: //添加职工
			break;
		case 2: //显示职工
			break;
		case 3: //删除职工
			break;
		case 4: //修改职工
			break;
		case 5: //查找职工
			break;
		case 6: //排序职工
			break;
		case 7: //清空文件
			break;
		default:
			system("cls");
			break;
		}
    }

    return 0;
}