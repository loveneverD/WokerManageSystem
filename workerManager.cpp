#include "workerManager.h"
#include <iostream>
using namespace std;

WorkerManager::WorkerManager(){

}

void WorkerManager::Show_menu(){
    cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ?? **********" << endl;
	cout << "*************  0.�˳������??  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ļ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}
void WorkerManager::exitSystem(){
    cout << "��ӭ�´�����" << endl;
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
		cout << "����������ѡ��:" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: //�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1: //���ְ��
			break;
		case 2: //��ʾְ��
			break;
		case 3: //ɾ��ְ��
			break;
		case 4: //�޸�ְ��
			break;
		case 5: //����ְ��
			break;
		case 6: //����ְ��
			break;
		case 7: //����ļ�
			break;
		default:
			system("cls");
			break;
		}
    }

    return 0;
}