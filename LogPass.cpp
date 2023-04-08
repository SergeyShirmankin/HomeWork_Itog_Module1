#include "LogPass.h"

Log_pass::Log_pass()
{
	std::cout << " Please enter new login: ";
	std::cin >> login;//¬водим новый логин
	std::cout<<std::endl;
	std::cout << "Please enter new pasword: ";
	std::cin >> password;
	std::cout << std::endl;

}
