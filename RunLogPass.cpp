#include<iostream>
#include "LogPass.h"
#include "RunLogPass.h"
void createLogPass()
{
	countObject = 0; // ���������� �������� �������� ��� ���������� ��������� � �������
	Log_pass* personsPtr[maxPerson];//��������� �� �������� �������
	char choice = 'n';//���������� ��� ��������� �����
		try {
			if (maxPerson < countObject)throw "\n massive out range"; //����������� ��������� ���� ������ 
			personsPtr[countObject] = new Log_pass;  //����� �� ������� 
		}
		catch (const char* report)
		{
			std::cout << report;
		}
		std::cout << "If continue to press 'y' ";
		std::cin >> choice;
		countObject++;

//	} while (choice == 'y' && maxPerson > countObject);//������� �� �������� �������� ���� ����� �� ������� �������

//	for (int i = 0; i < countObject; ++i) { delete personsPtr[i]; }//����������� ������ �� ��������

}
void showLogPass()
{
	for (int i = 0; i < countObject; ++i)
	{
		//std::cout<<"personsPtr"[i]<<">> "<< personsPt
	}
}
void deleteLogPass()
{
	std::cout << "deleteLogPass" << std::endl;
}

void enterLogPass()
{
	std::cout << "enterLogPass" << std::endl;
}
