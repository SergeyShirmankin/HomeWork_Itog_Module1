#include<iostream>
#include "RunLogPass.h"
#include "Messages.h"
#include <Windows.h>
#include<vector>
int main()
{
	countObject = 0; // количество созданых обьектов или количество элементов в массиве
	countMessage = 0;//порядковый номер сообщения
	char *op;//запись символа операции
	std::string tempOP;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	createNullMess();//создаем пустой массив сообщений 
	while (true) {
		//	std::cout << "Press key:'q'-quit, 'n'-create , 'd'-delete , 'e'-enter , 's'- show\n";
		std::cout << "Выберите опцию:'в'-Выход, 'н'-Создать нового пользователя , 'л'-Войти под лог. и паролем\n";
		std::cout << ">> ";
		std::cin >> tempOP;
		if (tempOP.size() == 1) {
			std::vector<char>chars(tempOP.begin(), tempOP.end());//преобразователь string ->char
			chars.push_back('\0');
			op = &chars[0];
	
			if (*op == 'в') {
				deleteLogPass();
				deleteMess();
				exit(0);
			}
			switch (*op) {
			case'н':
				createLogPass();
				break;
			case'd':
				deleteLogPass();
				break;
			case'л':
				if (enterLogPass())
				{
					//setlocale(LC_ALL, "");//кирилица
					showMessages();
				}
				break;
			case's':
				showLogPass();
				break;
			defalt:
				std::cout << "Неправильно выбрали букву";
			}		
		}
	}
	return 0;
}