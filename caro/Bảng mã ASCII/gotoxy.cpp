#include"ham.h"
void gotoxy(int x, int y) //hàm tọa độ
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}