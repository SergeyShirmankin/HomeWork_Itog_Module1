#pragma once
/*Проверка наличия обьектов с помощью глобального счетчика обьектов*/
const int maxPerson = 3;//максимальное количество людей которое можно работать в чате
static int countObject;
void createLogPass();
void deleteLogPass();
bool enterLogPass();
void showLogPass();