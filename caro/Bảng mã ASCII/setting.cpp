#include"ham.h"
void setting() //setting games
{
	char icon1, icon2;
	icon1 = 'O'; //player 1 mặc định
	icon2 = 'X'; //player 2 mặc định
	int b, c;
	c = 40; b = 23;
	system("cls");
	int a;
	printf("1.Size of Board\n2.Changeicon\n");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1: //chỉnh cột chưa hoàn thiện
	{
		printf("row : ");
		scanf_s("%d", &c);
		printf("col : ");
		scanf_s("%d", &b);
		return modeplay();
		break;
	}
	case 2: //chọn icon 
	{
		system("cls");
		printf("player 1 icon : ");
		cin >> icon2;
		cout << "player 2 icon : ";
		cin >> icon1;
		return PVP();
		break;
	}
	}
}