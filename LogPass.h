#pragma once
#include <iostream>
#include <string>
class Log_pass {
public:
	Log_pass();//Конструктор по умолчанию
	std::string getLog();//геттеры
	std::string getPass();
private:
	std::string login;//поле логина
	std::string password;// поле пароля
};
