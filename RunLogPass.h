#pragma once
/*ѕроверка наличи€ обьектов с помощью глобального счетчика обьектов*/
const int maxPerson = 3;//максимальное количество людей которое можно работать в чате
static int countObject;
static int curSesion;//активна€ сесси€
const int maxMess = 100;//максимальное количество сообщений в чате
void createLogPass();
void deleteLogPass();
bool enterLogPass();
void showLogPass();
void createNullMess();
int showMessages();
