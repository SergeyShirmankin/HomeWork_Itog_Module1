#include<iostream>
#include "LogPass.h"
#include "RunLogPass.h"
void createLogPass()
{
	countObject = 0; // количество созданых обьектов или количество элементов в массиве
	Log_pass* personsPtr[maxPerson];//указатель на элементы массива
	char choice = 'n';//переменна€ дл€ упралени€ цикла
		try {
			if (maxPerson < countObject)throw "\n massive out range"; //выбрасываем ислючение если массив 
			personsPtr[countObject] = new Log_pass;  //вышел за границы 
		}
		catch (const char* report)
		{
			std::cout << report;
		}
		std::cout << "If continue to press 'y' ";
		std::cin >> choice;
		countObject++;

//	} while (choice == 'y' && maxPerson > countObject);//выходим из создани€ обьектов если дошли на границу массива

//	for (int i = 0; i < countObject; ++i) { delete personsPtr[i]; }//освобрждаем пам€ть от обьектов

}
void showLogPass()
{
	for (int i = 0; i < countObject; ++i)
	{
		//std::cout<<"personsPtr"[i]<<">> "<< personsPt
	}
}
void deleteLogPass()
{
	std::cout << "deleteLogPass" << std::endl;
}

void enterLogPass()
{
	std::cout << "enterLogPass" << std::endl;
}
