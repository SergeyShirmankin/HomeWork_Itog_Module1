#include<iostream>
#include "RunLogPass.h"
#include "Messages.h"
int main()
{
	countObject = 0; // ���������� �������� �������� ��� ���������� ��������� � �������
	countMessage = 0;//���������� ����� ���������
	char op;//������ ������� ��������
	setlocale(LC_ALL, "");//��������
	while (true) {
		std::cout << "Press key:'q'-quit, 'n'-create , 'd'-delete , 'e'-enter , 's'- show\n";
		std::cout << ">> ";
		std::cin >> op;//
		if (op == 'q') {
			exit(0);
		}
		switch (op) {
		case'n':
			createLogPass();
			break;
		case'd':
			deleteLogPass();
			break;
		case'e':
		if	(enterLogPass())
		{
			createNullMess();
		//	startSession();
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