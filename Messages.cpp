#include "Messages.h"

Messages::Messages()
{
	++countMessage;//”величиваем номер сообщени€ дл€ записи в его поле
	this->number = countMessage;
	ptrMess = this;
}
