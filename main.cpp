#include<iostream>
#include "LogPass.h"
/*�������� ������� �������� � ������� ����������� �������� ��������*/
static int countObject;
const int maxPerson = 3;//������������ ���������� ����� ������� ����� �������� � ����
int main()
{
	countObject = 0; // ���������� �������� �������� ��� ���������� ��������� � �������
	Log_pass* personsPtr[maxPerson];//��������� �� �������� �������
	char choice='n';//���������� ��� ��������� �����
	do
	{
		try {
			if (maxPerson < countObject)throw "\n massive out range"; //����������� ��������� ���� ������ 
			personsPtr[countObject] = new Log_pass;  //����� �� ������� 
		}
		catch (const char* report)
		{
			std::cout << report;
			return 0;
		}
		std::cout << "If continue to press 'y' ";
		std::cin >> choice;
		countObject++;

	} while (choice == 'y' && 'Y');
	//�������� ������ ������ �� ���� 
	//���� ����� � ������ �� ����� �� ������� ���������� �� ���� ������ 
	//������ � ������
	
	return 0;

}