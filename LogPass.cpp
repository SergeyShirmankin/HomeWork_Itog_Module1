#include "LogPass.h"

Log_pass::Log_pass()//����������� �� ���������
{
	std::cout << " Please enter new login: "<<std::endl;
	std::cout << ">> ";
	std::cin >> login;//������ ����� �����
	std::cout << "Please enter new pasword: "<<std::endl;
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
