#pragma once
#include <iostream>
static int countMessage;
class Messages {
public:
	Messages();
private:
	int number;//����� ���������
	std::string own;//�������� ���������
	std::string message;//���������
	Messages* ptrMess;//��������� �� ���������;
};