#include "LogPass.h"

Log_pass::Log_pass()//конструктор по умолчанию
{
	std::cout << " Please enter new login: "<<std::endl;
	std::cout << ">> ";
	std::cin >> login;//¬водим новый логин
	std::cout << "Please enter new pasword: "<<std::endl;
	std::cout << ">> ";
	std::cin >> password;
	this->ptrObject;//запоминаем адресс обьекта
}

std::string Log_pass::getLog()
{	
	return login;
}

std::string Log_pass::getPass()
{
	return password;
}
