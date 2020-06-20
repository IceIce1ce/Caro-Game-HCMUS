#include"ham.h"
void modeplay() //bảng chọn chế độ chơi 
{
	system("cls");
	printf("Game Gomoku v1.0\n");
	printf("Dev : VNU-HCMUS\n");
	printf("Contact : 18127238@student.hcmus.edu.vn\n");
	for (int i = 0; i < 50; i++)
		printf("=");
	printf("\n");
	printf("Choose game mode : \n");
	printf("1.PvP\n2.PvE\n3.Load Game\n4.Player Statics\n5.Setting\n6.About us\n7.Exit\n");
	int a;
	cin >> a;
	switch (a)
	{
	case 1: //PVP
	{
		PVP();
		break;
	}
	case 2: //PVC
	{

		system("cls");
		cout << "Tinh nang dang duoc phat trien";
		_getch();
		return modeplay();
	}
	case 3:	//Load game
	{
		clrscr();
		load();
		PVP();
	}
	case 4: //Player Statics();
	case 5: //Setting
	{
		setting();
		break;
	}
	case 6: //About us
	{
		aboutus();
		break;
	}
	case 7: //Quit game
	{
		exit();
		break;
	}
	default: //phong chong an nham phim
	{
		return modeplay();
	}
	}
	return VeKhungintro();
}