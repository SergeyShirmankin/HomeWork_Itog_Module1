#include<iostream>
#include "LogPass.h"
/*Проверка наличия обьектов с помощью глобального счетчика обьектов*/
static int countObject;
const int maxPerson = 3;//максимальное количество людей которое можно работать в чате
int main()
{
	countObject = 0; // количество созданых обьектов или количество элементов в массиве
	Log_pass* personsPtr[maxPerson];//указатель на элементы массива
	char choice='n';//переменная для упраления цикла
	do
	{
		try {
			if (maxPerson < countObject)throw "\n massive out range"; //выбрасываем ислючение если массив 
			personsPtr[countObject] = new Log_pass;  //вышел за границы 
		}
		catch (const char* report)
		{
			std::cout << report;
			return 0;
		}
		std::cout << "If continue to press 'y' ";
		std::cin >> choice;
		countObject++;

	} while (choice == 'y' && 'Y');
	//Проверка логини пароля на ввод 
	//если логин и пароль не верны то вызвать исключение на ввод нового 
	//пароля и логина
	
	return 0;

}