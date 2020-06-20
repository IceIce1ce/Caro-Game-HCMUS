#include"ham.h"
void aboutus() //hàm về giới thiệu nhóm
{
	struct chuchay
	{
		char name1[400], name2[400], name3[400], name4[400];
		int x, y; //hoanh do x va tung do y 
	};
	chuchay A;
	strcpy_s(A.name1, "Project leader\n                                           Splash Screen and PVP developer\n\t\t\t\t\t\t   Phong Minh Tri");
	strcpy_s(A.name2, "Project Assistant\n                                                  Tran Hai Dang");
	strcpy_s(A.name3, "AI PVC developer\n                                                    Tran Quang Luc");
	strcpy_s(A.name4, "AI PVC developer\n                                                       Tran Dai Chi");
	A.x = 52;
	A.y = 30;
	for (int i = 0; i < 29; i++)
	{
		system("cls");
		gotoxy(A.x, A.y);
		TextColor(11);
		printf("%s", A.name1);
		A.y--;
		Sleep(150);
	}
	A.x = 48;
	A.y = 30;
	for (int i = 0; i < 29; i++)
	{
		system("cls");
		gotoxy(A.x, A.y);
		TextColor(12);
		printf("%s", A.name2);
		A.y--;
		Sleep(150);
	}
	A.x = 52;
	A.y = 30;
	for (int i = 0; i < 29; i++)
	{
		system("cls");
		gotoxy(A.x, A.y);
		TextColor(14);
		printf("%s", A.name3);
		A.y--;
		Sleep(150);
	}
	A.x = 52;
	A.y = 30;
	for (int i = 0; i < 29; i++)
	{
		system("cls");
		gotoxy(A.x, A.y);
		TextColor(9);
		printf("%s", A.name4);
		A.y--;
		Sleep(150);
	}
	return modeplay();
} //Credits