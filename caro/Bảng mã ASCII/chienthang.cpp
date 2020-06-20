#include"ham.h"
void ChienThang() //win condition
{
	if ((DKOChienThang() == 1))
	{
		gotoxy(50, 2);
		TextColor(12);
		printf("player 2 chien thang"); 
	}
	else if ((DKXChienThang() == 1))
		{
			gotoxy(50, 2);
			TextColor(11);
			printf("player 1 Chien Thang"); 
		}
}