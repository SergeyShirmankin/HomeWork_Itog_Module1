#pragma once
#include <iostream>
#include <string>
class Log_pass {
public:
	Log_pass();//����������� �� ���������
	std::string getLog();//�������
	std::string getPass();
	Log_pass* getPtrObject();
private:
	Log_pass* ptrObject;// ��������� �� ������
	std::string login;//���� ������
	std::string password;// ���� ������
};
