#include<iostream>
#include "LogPass.h"
#include "RunLogPass.h"
#include "Messages.h"
#include <stdlib.h>
static Log_pass* personsPtr[maxPerson];//указатель на элементы массива Пользователей
static Messages* messagesPtr[maxMess];//указатель на элементы массива Сообщений

									  
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
	std::string temp;
	system("cls");
		for (int i = 0; i < 10; ++i)
		{
			/*std::cout << "\n"[i]  << messagesPtr[i]<<" ";
			std::cout << messagesPtr[i]->getNumber();
			std::cout << " " << messagesPtr[i]->getOwn()<<"->";
			std::cout << " " << messagesPtr[i]->getReceiver();
			std::cout << "\n" << messagesPtr[i]->getMessage()<<">>"*/;	
		}
		std::cin >> temp;
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
//	} while (choice == 'y' && maxPerson > countObject);//выходим из создания обьектов если дошли на границу массива

//	for (int i = 0; i < countObject; ++i) { delete personsPtr[i]; }//освобрждаем память от обьектов

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
	std::cout << "Hello " << personsPtr[curSesion]->getLog() << "  >> ";

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
	std::cout << ">>";
	std::cin >> _login;
	std::cout << "Enter password\n";
	std::cout << ">>";
	std::cin >> _password;
	for (int i = 0; i < countObject; ++i)
	{
		int resultLog = _login.compare(personsPtr[i]->getLog());
		int resultPass = _password.compare(personsPtr[i]->getPass());
		if (resultLog == 0 && resultPass == 0) 
		{
			/*std::cout <<"Hello "<<personsPtr[i]->getLog() << "  >> \n";*/
			curSesion = i;
			return true;
		}
		else
		{
			std::cout << "Not access = "<<i<<std::endl;
			return false;
		}
	}
}
