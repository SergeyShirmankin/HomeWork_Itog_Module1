#include<iostream>
#include "LogPass.h"
#include "RunLogPass.h"
#include "Messages.h"
#include <stdlib.h>
static Log_pass* personsPtr[maxPerson];//��������� �� �������� ������� �������������
static Messages* messagesPtr[maxMess];//��������� �� �������� ������� ���������
const std::string Null = "Null";
std::string currUser = "Null";

									  
void createNullMess()//������� ������ ������ ��������� � ��������
{
for (int i = 0; i < maxMess; ++i) {
		try {
		if (maxMess < i)throw "\n massive messagesPtr  out range"; //������� ������ �������� 
		   messagesPtr[i] = new Messages;  //����� �� ������� 
		}

		catch (const char* report)
		{
			std::cout << report;
		}
    }
}

int showMessages()
{
	int resultCompFindUser;
	int resultCompFindReceiver;
	int convIngTempRec;
	std::string tempReceiver;
	std::string tempMessage;
	std::string tempCin;
	char key;
	system("cls");
	while (true)
	{
		std::cout << "\n��� ������ ������� ������� '�' ��� ����������� ������� ����� �� � ent";
		std::cout << "\n>> ";
		std::cin >> key;
		if (key == '�') { break; }
		else {
			system("cls");
			std::cout << "Online users: ";
			for (int i = 0; i < countObject; ++i)
			{
				std::cout << personsPtr[i]->getLog() << "[" << i << "], ";
			}
			std::cout << "\nStart Session[" << curSesion << "]:\n";
			std::cout << "Hello " << personsPtr[curSesion]->getLog() << "\n";
			currUser = personsPtr[curSesion]->getLog();

			// ����� � ����� �����
			for (int i = 0; i < maxMess; ++i)
			{
				resultCompFindUser = currUser.compare(messagesPtr[i]->getOwn());
				if (resultCompFindUser == 0)
				{
					std::cout << "\n" << messagesPtr[i]->getOwn() << "->" << messagesPtr[i]->getReceiver();
					std::cout << ">> " << messagesPtr[i]->getMessage();
				}
				resultCompFindReceiver = currUser.compare(messagesPtr[i]->getReceiver());
				if (resultCompFindReceiver == 0)
				{
					std::cout << "\n" << messagesPtr[i]->getOwn() << "->" << messagesPtr[i]->getReceiver();
					std::cout << ">> " << messagesPtr[i]->getMessage();
				}
			}
			std::cout << "\n�������� ����� ���������� ���������, ��� �������� �������� ��������[9] ";
			std::cout << "\n>> ";
			std::cin >> tempReceiver;//�������� ����������
			//�����  ���e��� ������ � ������ � ���� ������ 
			if (tempReceiver.size() == 0) { break; }//������ �� ������ ������
			try
			{
				convIngTempRec = stoi(tempReceiver);//�������� �� ������������ ���������� string � int
			}
			catch (std::invalid_argument e) {
				std::cout << "\n��������, ���������� ����\n";
				return 1;
			}
			if (0 <= convIngTempRec && convIngTempRec <= maxPerson) {
				for (int i = 0; i < maxMess; ++i)
				{
					if (messagesPtr[i]->getOwn() == Null)
					{
						messagesPtr[i]->setOwn(personsPtr[curSesion]->getLog());
						messagesPtr[i]->setReceiver(personsPtr[convIngTempRec]->getLog());
						std::cout << "\n" << messagesPtr[i]->getOwn() << "->" << messagesPtr[i]->getReceiver();
						std::cout << ">> ";
						std::getline(std::cin >> tempCin, tempMessage);//�������� ��� ������
						tempMessage = tempCin + " " + tempMessage;
						if (tempMessage.size() == 0) { break; }
						messagesPtr[i]->setMessage(tempMessage);
						break;

					}
				}
			}
			//������ ��� ����� �������������
			if (convIngTempRec == 9) {
				for (int iMess = 0; iMess < maxMess; ++iMess)
				{
					if (messagesPtr[iMess]->getOwn() == Null)
					{
						std::cout << "\n������� ���������:\n";
						std::cout << ">> ";
						std::getline(std::cin >> tempCin, tempMessage);//�������� ��� ������
						tempMessage = tempCin + " " + tempMessage;
						if (tempMessage.size() == 0) { break; }
						for (int i = 0; i < countObject; ++i)
						{
							if (curSesion != i)
							{
								messagesPtr[iMess]->setMessage(tempMessage);
								messagesPtr[iMess]->setOwn(personsPtr[curSesion]->getLog());
								messagesPtr[iMess]->setReceiver(personsPtr[i]->getLog());
								std::cout << "\n" << messagesPtr[iMess]->getOwn() << "->" << messagesPtr[iMess]->getReceiver() << ": " << messagesPtr[iMess]->getMessage();
								if (iMess < maxMess) { ++iMess; }
							}
						}
					} 
					if (messagesPtr[iMess]->getOwn() == Null) { break; }
				}
			}
		}
	}
}

void createLogPass()
{
		try {
			if (maxPerson < countObject)throw "\n personsPtr massive out range"; //����������� ��������� ���� ������ 
			personsPtr[countObject] = new Log_pass;  //����� �� ������� 
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
	std::cout << "������� �����\n";
	std::cout << ">> ";
	std::cin >> _login;
	std::cout << "������� ������\n";
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
