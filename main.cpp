#include<iostream>
#include "RunLogPass.h"
int main()
{
	countObject = 0; // ���������� �������� �������� ��� ���������� ��������� � �������
	char op;//������ ������� ��������
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
			startSession();
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