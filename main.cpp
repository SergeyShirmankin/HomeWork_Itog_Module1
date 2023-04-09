#include<iostream>
#include "RunLogPass.h"
int main()
{
	countObject = 0; // количество созданых обьектов или количество элементов в массиве
	char op;//запись символа операции
	while (true) {
		std::cout << "Press key:'q'-quit, 'n'-create , 'd'-delete , 'e'-enter , 's'- show\n";
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
		if	(enterLogPass())
		{
			startSession();
		}
			break;
		case's':
			showLogPass();
			break;
		}
		//	for (int i = 0; i < countObject; ++i) { delete personsPtr[i]; }//освобрждаем память от обьектов
	}
	return 0;
}