#include "LogPass.h"

Log_pass::Log_pass()//����������� �� ���������
{
	std::cout << " ������� ����� ������ ������������: "<<std::endl;
	std::cout << ">> ";
	std::cin >> login;//������ ����� �����
	std::cout << "������� ������ ������: "<<std::endl;
	std::cout << ">> ";
	std::cin >> password;
	this->ptrObject;//���������� ������ �������
}

std::string Log_pass::getLog()
{	
	return login;
}

std::string Log_pass::getPass()
{
	return password;
}

Log_pass* Log_pass::getPtrObject()
{
	return ptrObject;
}
