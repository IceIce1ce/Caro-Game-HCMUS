#include"ham.h"
void startmenu() //dựng hiệu ứng vào game 
{
	TextColor(12);
	for (int i = 0; i < 120; i++)
		printf("=");
	gotoxy(0, 29);
	TextColor(12);
	for (int i = 0; i < 120; i++)
		printf("=");
	//chữ G	
	TextColor(1);
	gotoxy(25, 12);
	printf("G GG");
	gotoxy(24, 13);
	printf("G");
	gotoxy(24, 14);
	printf("G");
	gotoxy(24, 15);
	printf("G GGG");
	gotoxy(24, 16);
	printf("G");
	gotoxy(25, 17);
	printf("G");
	gotoxy(26, 17);
	printf(" G");
	gotoxy(26, 16);
	printf(" G");
	//chữ O
	TextColor(2);
	gotoxy(37, 12);
	printf("O O O O");
	gotoxy(36, 13);
	printf("O");
	gotoxy(36, 14);
	printf("O");
	gotoxy(36, 15);
	printf("O");
	gotoxy(36, 16);
	printf("O");
	gotoxy(37, 17);
	printf("O O O O");
	gotoxy(44, 16);
	printf("O");
	gotoxy(44, 15);
	printf("O");
	gotoxy(44, 14);
	printf("O");
	gotoxy(44, 13);
	printf("O");
	//chữ M 
	TextColor(6);
	gotoxy(53, 12);
	printf("M");
	gotoxy(53, 13);
	printf("M");
	gotoxy(53, 14);
	printf("M");
	gotoxy(53, 15);
	printf("M");
	gotoxy(53, 16);
	printf("M");
	gotoxy(53, 17);
	printf("M");
	gotoxy(54, 13);
	printf("M");
	gotoxy(55, 14);
	printf("M");
	gotoxy(56, 15);
	printf("M");
	gotoxy(57, 14);
	printf("M");
	gotoxy(58, 13);
	printf("M");
	gotoxy(59, 12);
	printf("M");
	gotoxy(59, 13);
	printf("M");
	gotoxy(59, 14);
	printf("M");
	gotoxy(59, 15);
	printf("M");
	gotoxy(59, 16);
	printf("M");
	gotoxy(59, 17);
	printf("M");
	//chữ O
	TextColor(3);
	gotoxy(68, 12);
	printf("O O O O");
	gotoxy(67, 13);
	printf("O");
	gotoxy(67, 14);
	printf("O");
	gotoxy(67, 15);
	printf("O");
	gotoxy(67, 16);
	printf("O");
	gotoxy(68, 17);
	printf("O O O O");
	gotoxy(75, 16);
	printf("O");
	gotoxy(75, 15);
	printf("O");
	gotoxy(75, 14);
	printf("O");
	gotoxy(75, 13);
	printf("O");
	//chữ K
	TextColor(4);
	gotoxy(82, 12);
	printf("K");
	gotoxy(82, 13);
	printf("K");
	gotoxy(82, 14);
	printf("K");
	gotoxy(82, 15);
	printf("K");
	gotoxy(82, 16);
	printf("K");
	gotoxy(82, 17);
	printf("K");
	gotoxy(84, 14);
	printf("K");
	gotoxy(84, 15);
	printf("K");
	gotoxy(86, 13);
	printf("K");
	gotoxy(86, 16);
	printf("K");
	gotoxy(88, 12);
	printf("K");
	gotoxy(88, 17);
	printf("K");
	gotoxy(82, 12);
	printf("K");
	gotoxy(82, 12);
	printf("K");
	//chữ U
	TextColor(5);
	gotoxy(96, 12);
	printf("U");
	gotoxy(96, 13);
	printf("U");
	gotoxy(96, 14);
	printf("U");
	gotoxy(96, 15);
	printf("U");
	gotoxy(96, 16);
	printf("U");
	gotoxy(96, 17);
	printf("U");
	gotoxy(104, 12);
	printf("U");
	gotoxy(104, 13);
	printf("U");
	gotoxy(104, 14);
	printf("U");
	gotoxy(104, 15);
	printf("U");
	gotoxy(104, 16);
	printf("U");
	gotoxy(96, 17);
	printf("U");
	gotoxy(98, 17);
	printf("U");
	gotoxy(100, 17);
	printf("U");
	gotoxy(102, 17);
	printf("U");
	gotoxy(104, 17);
	printf("U");
	TextColor(15);
	//press any key to continue
	for (int i = 0; i < 9999; i++)
	{

		gotoxy(48, 23);
		printf("Press enter to continue");
		Sleep(400);
		gotoxy(48, 23);
		printf("                       ");
		Sleep(200);
		if (_kbhit())
		{
			break;
		}
		else
		{
			system("cls");
			return startmenu();
		}
	}
}