#include "LogPass.h"

Log_pass::Log_pass()//конструктор по умолчанию
{
	std::cout << " ¬ведите логин нового пользовател€: "<<std::endl;
	std::cout << ">> ";
	std::cin >> login;//¬водим новый логин
	std::cout << "¬ведите нового парол€: "<<std::endl;
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

Log_pass* Log_pass::getPtrObject()
{
	return ptrObject;
}
