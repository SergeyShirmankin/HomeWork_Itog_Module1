#pragma once
#include <iostream>
static int countMessage;
class Messages {
public:
	Messages();
	int getNumber();
	std::string getOwn();
	std::string getReceiver();
	std::string getMessage();
	Messages* getPtrMess();
	void setOwn(std::string);
	void setReceiver(std::string);
	void setMessage(std::string);
private:
	int number;//����� ���������
	std::string own;//�������� ���������
	std::string receiver;//���������� ���������
	std::string message;//���������
	Messages* ptrMess;//��������� �� ���������;
};