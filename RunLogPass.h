#pragma once
/*�������� ������� �������� � ������� ����������� �������� ��������*/
const int maxPerson = 3;//������������ ���������� ����� ������� ����� �������� � ����
static int countObject;
static int curSesion;//�������� ������
const int maxMess = 100;//������������ ���������� ��������� � ����
void createLogPass();
void deleteLogPass();
bool enterLogPass();
void showLogPass();
void createNullMess();
int showMessages();
