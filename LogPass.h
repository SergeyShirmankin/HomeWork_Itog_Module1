#pragma once
#include <iostream>
#include <string>
class Log_pass {
public:
	Log_pass();//Конструктор по умолчанию
	std::string getLog();//геттеры
	std::string getPass();
	Log_pass* getPtrObject();
private:
	Log_pass* ptrObject;// Указатель на обьект
	std::string login;//поле логина
	std::string password;// поле пароля
};
