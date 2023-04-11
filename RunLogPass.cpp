#include<iostream>
#include "LogPass.h"
#include "RunLogPass.h"
#include "Messages.h"
#include <stdlib.h>
static Log_pass* personsPtr[maxPerson];//указатель на элементы массива Пользователей
static Messages* messagesPtr[maxMess];//указатель на элементы массива Сообщений
const std::string Null = "Null";

									  
void createNullMess()//Создаем массив пустых сообщений с номерами
{
for (int i = 0; i < maxMess; ++i) {
		try {
		if (maxMess < i)throw "\n massive messagesPtr  out range"; //создаем массив обьектов 
		   messagesPtr[i] = new Messages;  //вышел за границы 
		}

		catch (const char* report)
		{
			std::cout << report;
		}
    }
       showMessages(); 
}

void showMessages()
{
	int tempReceiver;
	std::string tempMessage;
	char key;
	system("cls");
	while (true)
	{
		std::cout << "For exit to press key q to continue press any key";
		std::cout << "\n>> ";
		std::cin >> key;
		if (key == 'q') { break; }
		else {
			system("cls");
			std::cout << "Start Session[" << curSesion << "]:\n";
			std::cout << "Hello " << personsPtr[curSesion]->getLog() << "\n";
			std::cout << "Online users: ";
			for (int i = 0; i < countObject; ++i)
			{
				std::cout << personsPtr[i]->getLog() << "[" << i << "], ";
			}
			std::cout << "\nPlease press key [ ] for to select the receiver ";
			std::cout << "\n>> ";
			std::cin >> tempReceiver;//Выбираем получателя
			//Поиск  нулой строки и запись в него строки 
			for (int i = 0; i < maxMess; ++i)
			{
				if (Null.compare(messagesPtr[i]->getOwn()))
				{
					std::cout << "\n" << messagesPtr[i]->getOwn() << "->" << messagesPtr[i]->getReceiver();
					std::cout << ">> " << messagesPtr[i]->getMessage();
					break;
				}
			}
			for (int i = 0; i < maxMess; ++i)
			{
				if (messagesPtr[i]->getOwn() == Null)
				{
					messagesPtr[i]->setOwn(personsPtr[curSesion]->getLog());
					messagesPtr[i]->setReceiver(personsPtr[tempReceiver]->getLog());
					std::cout << "\n" << messagesPtr[i]->getOwn() << "->" << messagesPtr[i]->getReceiver();
					std::cout << ">> ";
					std::cin >> tempMessage;//вводим сообщения
					messagesPtr[i]->setMessage(tempMessage);
					break;
				}
			}

		}
	}
}

void createLogPass()
{
		try {
			if (maxPerson < countObject)throw "\n personsPtr massive out range"; //выбрасываем ислючение если массив 
			personsPtr[countObject] = new Log_pass;  //вышел за границы 
		}
		catch (const char* report)
		{
			std::cout << report;
		}
		countObject++;
}

void showLogPass()
{
	for (int i = 0; i < countObject; ++i)
	{
		std::cout << "personsPtr"[i] << ">> " << personsPtr[i] << std::endl;
		std::cout << "personsPtr[i]->getLog()"[i] << ">> " << personsPtr[i]->getLog() << std::endl;
		std::cout << "personsPtr[i]->getPass()"[i] << ">> " << personsPtr[i]->getPass() << std::endl;
	}
}

void startSession()
{
	std::string strinForTest;
	std::cout << "Start Session["<< curSesion<<"]:\n";
	std::cout << "Hello " << personsPtr[curSesion]->getLog() << ">> ";

	std::cin >> strinForTest;
}

void deleteLogPass()
{
	std::cout << "deleteLogPass" << std::endl;
}

bool enterLogPass1()
{
	return false;
}

bool enterLogPass()
{
	bool resultCompare = false;
	std::string _password;
	std::string _login;
	std::cout << "Enter login\n";
	std::cout << ">> ";
	std::cin >> _login;
	std::cout << "Enter password\n";
	std::cout << ">> ";
	std::cin >> _password;
	for (int i = 0; i < countObject; ++i)
	{
		int resultLog = _login.compare(personsPtr[i]->getLog());
		int resultPass = _password.compare(personsPtr[i]->getPass());
		if (resultLog == 0 && resultPass == 0) 
		{
			curSesion = i;
			resultCompare = true;
			return true;
		}
	}
		std::cout << "Not access.\n ";
		return false;

}
