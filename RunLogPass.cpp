#include<iostream>
#include "LogPass.h"
#include "RunLogPass.h"
static Log_pass* personsPtr[maxPerson];//��������� �� �������� �������
void createLogPass()
{
		try {
			if (maxPerson < countObject)throw "\n massive out range"; //����������� ��������� ���� ������ 
			personsPtr[countObject] = new Log_pass;  //����� �� ������� 
		}
		catch (const char* report)
		{
			std::cout << report;
		}
		countObject++;
//	} while (choice == 'y' && maxPerson > countObject);//������� �� �������� �������� ���� ����� �� ������� �������

//	for (int i = 0; i < countObject; ++i) { delete personsPtr[i]; }//����������� ������ �� ��������

}
void showLogPass()
{
	for (int i = 0; i < countObject; ++i)
	{
		std::cout << "personsPtr"[i] << ">> " << personsPtr[i] << std::endl;
		std::cout << "personsPtr[i]->getLog()"[i] << ">> " << personsPtr[i]->getLog() << std::endl;
		std::cout << "personsPtr[i]->getPass()"[i] << ">> " << personsPtr[i]->getPass() << std::endl;
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
