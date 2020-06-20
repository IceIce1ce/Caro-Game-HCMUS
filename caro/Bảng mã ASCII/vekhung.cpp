#include"ham.h"
void VeKhung() //vẽ khung animation
{
	int b, c;
	b = 23; c = 40;
	short i, n = 10;
	gotoxy(38, 5);
	for (i = 0; i <= c; i++)
	{
		printf("%c", 219); Sleep(n);
	}
	for (i = 3; i <= b; i++) {
		gotoxy(38, i + 2);
		Sleep(n);
		printf("%c", 219);
	}
	gotoxy(38, 25);
	for (i = 0; i <= c; i++) {
		printf("%c", 219); Sleep(n);
	}
	for (i = 3; i <= b; i++) {
		gotoxy(78, i + 2);
		Sleep(n);
		printf("%c", 219);
	}
}