#include "Messages.h"

Messages::Messages()
{
	++countMessage;//����������� ����� ��������� ��� ������ � ��� ����
	this->number = countMessage;
	ptrMess = this;
}
