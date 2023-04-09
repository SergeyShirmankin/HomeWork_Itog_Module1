#pragma once
#include <iostream>
static int countMessage;
class Messages {
public:
	Messages();
private:
	int number;//номер сообщения
	std::string own;//владелец сообщения
	std::string message;//сообщения
	Messages* ptrMess;//указатель на сообщение;
};