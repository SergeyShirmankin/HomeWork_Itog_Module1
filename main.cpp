#include<iostream>
#include "RunLogPass.h"
int main()
{
	char op;//запись символа операции
	std::cout << "Press key:'q'-quit, 'n'-create log pass, 'd'-delete log pass, 'e'-enter log pass" << std::endl;
	while (true) {
		std::cout << ">> ";
		std::cin >> op;//
		if (op == 'q') {
			exit(0);
		}
		switch (op) {
		case'n':
			createLogPass();
			break;
		case'd':
			deleteLogPass();
			break;
		case'e':
			enterLogPass();
			break;
		}
		return 0;
		//	for (int i = 0; i < countObject; ++i) { delete personsPtr[i]; }//освобрждаем память от обьектов

	}
}