#include<iostream>
#include "RunLogPass.h"
#include "Messages.h"
#include <Windows.h>
#include<vector>
int main()
{
	countObject = 0; // ���������� �������� �������� ��� ���������� ��������� � �������
	countMessage = 0;//���������� ����� ���������
	char *op;//������ ������� ��������
	std::string tempOP;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	createNullMess();//������� ������ ������ ��������� 
	while (true) {
		//	std::cout << "Press key:'q'-quit, 'n'-create , 'd'-delete , 'e'-enter , 's'- show\n";
		std::cout << "�������� �����:'�'-�����, '�'-������� ������ ������������ , '�'-����� ��� ���. � �������\n";
		std::cout << ">> ";
		std::cin >> tempOP;
		if (tempOP.size() == 1) {
			std::vector<char>chars(tempOP.begin(), tempOP.end());//��������������� string ->char
			chars.push_back('\0');
			op = &chars[0];
	
			if (*op == '�') {
				deleteLogPass();
				deleteMess();
				exit(0);
			}
			switch (*op) {
			case'�':
				createLogPass();
				break;
			case'd':
				deleteLogPass();
				break;
			case'�':
				if (enterLogPass())
				{
					//setlocale(LC_ALL, "");//��������
					showMessages();
				}
				break;
			case's':
				showLogPass();
				break;
			defalt:
				std::cout << "����������� ������� �����";
			}		
		}
	}
	return 0;
}