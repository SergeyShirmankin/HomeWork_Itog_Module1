#include<iostream>
#include "RunLogPass.h"
#include "Messages.h"
#include <Windows.h>
int main()
{
	countObject = 0; // ���������� �������� �������� ��� ���������� ��������� � �������
	countMessage = 0;//���������� ����� ���������
	char op;//������ ������� ��������
	//setlocale(LC_ALL, "Russian");//��������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	createNullMess();//������� ������ ������ ��������� 
	while (true) {
	//	std::cout << "Press key:'q'-quit, 'n'-create , 'd'-delete , 'e'-enter , 's'- show\n";
		std::cout << "�������� �����:'�'-�����, '�'-������� ������ ������������ , '�'-����� ��� ���. � �������\n";
		std::cout << ">> ";
		std::cin >> op;//
		if (op == '�') {
			exit(0);
		}
		switch (op) {
		case'�':
			createLogPass();
			break;
		case'd':
			deleteLogPass();
			break;
		case'�':
		if	(enterLogPass())
		{
			setlocale(LC_ALL, "");//��������
			showMessages();
		}
			break;
		case's':
			showLogPass();
			break;
		}
		//	for (int i = 0; i < countObject; ++i) { delete personsPtr[i]; }//����������� ������ �� ��������
	}
	return 0;
}