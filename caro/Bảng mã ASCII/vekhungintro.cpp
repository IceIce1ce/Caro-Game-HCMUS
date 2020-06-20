#include"ham.h"
void VeKhungintro()
{
	short i, n = 10;
	gotoxy(38, 5);
	for (i = 0; i <= 40; i++)
	{
		TextColor(9);
		printf("%c", 219); Sleep(n);
	}
	for (i = 3; i <= 23; i++) {
		gotoxy(38, i + 2);
		Sleep(n);
		TextColor(10);
		printf("%c", 219);
	}
	gotoxy(38, 25);
	for (i = 0; i <= 40; i++)
	{
		TextColor(12);
		printf("%c", 219); Sleep(n);
	}
	for (i = 3; i <= 23; i++) {
		gotoxy(78, i + 2);
		Sleep(n);
		TextColor(14);
		printf("%c", 219);
	}
	Sleep(500);
	system("cls");
}