#pragma once
#include <iostream>
#include <string>
class Log_pass {
public:
	Log_pass();//����������� �� ���������
	std::string getLog();//�������
	std::string getPass();
private:
	std::string login;//���� ������
	std::string password;// ���� ������
};
