#include"ham.h"
char a[80][25], phim, icon1, icon2;
int x, y, i, m1, n1, c, m, n, b; //x,y là tọa độ, i là biến đếm , m1,n1,n,m xét dk chiến thắng ,c,b setting bàn cờ
errno_t f; //phuc vu cho save va load game
FILE *file; //phuc vu cho save va load game
struct ToaDo
{
	int x, y;
};
int main() //chương trình chính 
{
	b = 23; //chiều rộng khung mặc định
	c = 40; //chiều dài khung mặc định
	icon1 = 'O'; //player 1 mặc định
	icon2 = 'X'; //player 2 mặc định
	playsound();
	VeKhungintro();
	startmenu();
	modeplay();
	gotoxy(50, 15);
	printf("Goooood Byeeeeeeee!!!!!!!");
	Sleep(500);
}
int Chan(int i) // Kiem tra chan le de phuc vu cho chia luot
{
	if (i % 2 == 0) return 1;
	else return 0;
}

int OX(int i) //phục vụ cho việc chia lượt
{
	if (Chan(i) == 1) return icon2;
	else return icon1;
}

void VeOX()// ve OX
{
	if (a[n][m] != icon1 && a[n][m] != icon2)
	{
		if (Chan(i) == 1) TextColor(11); else TextColor(12);
		a[n][m] = OX(i);
		cout << a[n][m];
		i += 1;
	}
	else a[n][m];
	TextColor(7);
}

void ConTro(int x, int y) //Phuc vu cho di chuyen
{
	gotoxy(x, y);
	n = x; m = y;
}
//dieu khien 
void AnSangTrai()
{
	x = x - 1;
	if (x <= 38) x = 39;
}

void AnSangPhai()
{
	x = x + 1;
	if (x >= 78) x = 77;
}

void AnLenTren()
{
	y = y - 1;
	if (y < 6) y = 6;
}

void AnXuongDuoi()
{
	y = y + 1;
	if (y >= 24) y = 24;
}
void gameinfo() //thong tin trận 
{
	TextColor(7);
	//Thong tin
	gotoxy(0, 0);
	if (i % 2 == 0)
	{
		printf("Luot cua O");
	}
	else
	{
		printf("Luot cua X");
	}
	printf("    Q : Thoat tran dau.");
	printf("         T: Save game\n");
	printf("Luot thu: %d", i);
}
void dieukhien() // ho tro cho viec dieu khien
{
	phim = _getch();
	if (phim == 'a' || phim == 'A' || int(phim == 75))AnSangTrai(); else
	if (phim == 'd' || phim == 'D' || int(phim == 77)) AnSangPhai(); else
	if (phim == 'w' || phim == 'W' || int(phim == 72)) AnLenTren(); else
	if (phim == 's' || phim == 'S' || int(phim == 80)) AnXuongDuoi(); else
	if (phim == 13) VeOX();
}
void PVP() //PVP
{
	system("cls");
	VeKhung();
	x = 39; y = 6;
	i = 0;
	do {
		gameinfo();
		ConTro(x, y);
		ChienThang();
		dieukhien();
		if (phim == 't' || phim == 'T')
			savegame();
	} while (phim != 'q' && phim != 'Q');
	system("cls");
}//mode chơi 2 người
//Xet dieu kien
int DKOChienThang() //Dieu kien de ben O chien thang
{
	//Theo hang ngang
	m1 = m; n1 = n;
	while (a[n1][m] == icon1)
		n1++;
	n1--;
	//Doan tren nham muc dich chuen con tro den vi tri 'O' dau hang de tien cho viec xet vi neu 'O' duoc nhap o giau hang se khong xet
	if ((a[n1][m] == icon1) && (a[n1 + 1][m] == icon1) && (a[n1 + 2][m] == icon1) && (a[n1 + 3][m] == icon1) && (a[n1 + 4][m] == icon1)) return 1; else
		if ((a[n1][m] == icon1) && (a[n1 - 1][m] == icon1) && (a[n1 - 2][m] == icon1) && (a[n1 - 3][m] == icon1) && (a[n1 - 4][m] == icon1)) return 1;
	//Theo hang doc
	m1 = m; n1 = n;
	while (a[n][m1] == icon1)
		m1++;
	m1--;
	//Theo duong cheo chinh
	if ((a[n][m1] == icon1) && (a[n][m1 + 1] == icon1) && (a[n][m1 + 2] == icon1) && (a[n][m1 + 3] == icon1) && (a[n][m1 + 4] == icon1)) return 1; else
		if ((a[n][m1] == icon1) && (a[n][m1 - 1] == icon1) && (a[n][m1 - 2] == icon1) && (a[n][m1 - 3] == icon1) && (a[n][m1 - 4] == icon1)) return 1;
	//Theo duong cheo phu
	m1 = m; n1 = n;
	while (a[n1][m1] == icon1) {
		m1++; n1++;
	}
	m1--; n1--;
	if ((a[n1][m1] == icon1) && (a[n1 + 1][m1 + 1] == icon1) && (a[n1 + 2][m1 + 2] == icon1) && (a[n1 + 3][m1 + 3] == icon1) && (a[n1 + 4][m1 + 4] == icon1)) return 1; else
		if ((a[n1][m1] == icon1) && (a[n1 - 1][m1 - 1] == icon1) && (a[n1 - 2][m1 - 2] == icon1) && (a[n1 - 3][m1 - 3] == icon1) && (a[n1 - 4][m1 - 4] == icon1)) return 1;
	m1 = m; n1 = n;
	while (a[n1][m1] == icon1) {
		n1++; m1--;
	}
	n1--; m1++;
	if ((a[n1][m1]) == icon1 && (a[n1 + 1][m1 - 1]) == icon1 && (a[n1 + 2][m1 - 2]) == icon1 && (a[n1 + 3][m1 - 3]) == icon1 && (a[n1 + 4][m1 - 4] == icon1)) return 1; else
		if ((a[n1][m1]) == icon1 && (a[n1 - 1][m1 + 1]) == icon1 && (a[n1 - 2][m1 + 2]) == icon1 && (a[n1 - 3][m1 + 3]) == icon1 && (a[n1 - 4][m1 + 4] == icon1)) return 1;
	return 0;
}
int DKXChienThang() //Dieu kien de ben x chien thang
{
	//Theo hang ngang
	m1 = m; n1 = n;
	while (a[n1][m] == icon2)
		n1++;
	n1--;
	//Doan tren nham muc dich chuen con tro den vi tri 'O' dau hang de tien cho viec xet vi neu 'O' duoc nhap o giau hang se khong xet
	if ((a[n1][m] == icon2) && (a[n1 + 1][m] == icon2) && (a[n1 + 2][m] == icon2) && (a[n1 + 3][m] == icon2) && (a[n1 + 4][m] == icon2)) return 1; else
		if ((a[n1][m] == icon2) && (a[n1 - 1][m] == icon2) && (a[n1 - 2][m] == icon2) && (a[n1 - 3][m] == icon2) && (a[n1 - 4][m] == icon2)) return 1;
	//Theo hang doc
	m1 = m; n1 = n;
	while (a[n][m1] == icon2)
		m1++;
	m1--;
	//Theo duong cheo chinh
	if ((a[n][m1] == icon2) && (a[n][m1 + 1] == icon2) && (a[n][m1 + 2] == icon2) && (a[n][m1 + 3] == icon2) && (a[n][m1 + 4] == icon2)) return 1; else
		if ((a[n][m1] == icon2) && (a[n][m1 - 1] == icon2) && (a[n][m1 - 2] == icon2) && (a[n][m1 - 3] == icon2) && (a[n][m1 - 4] == icon2)) return 1;
	//Theo duong cheo phu
	m1 = m; n1 = n;
	while (a[n1][m1] == icon2) {
		m1++; n1++;
	}
	m1--; n1--;
	if ((a[n1][m1] == icon2) && (a[n1 + 1][m1 + 1] == icon2) && (a[n1 + 2][m1 + 2] == icon2) && (a[n1 + 3][m1 + 3] == icon2) && (a[n1 + 4][m1 + 4] == icon2)) return 1; else
		if ((a[n1][m1] == icon2) && (a[n1 - 1][m1 - 1] == icon2) && (a[n1 - 2][m1 - 2] == icon2) && (a[n1 - 3][m1 - 3] == icon2) && (a[n1 - 4][m1 - 4] == icon2)) return 1;
	m1 = m; n1 = n;
	while (a[n1][m1] == icon2) {
		n1++; m1--;
	}
	n1--; m1++;
	if ((a[n1][m1]) == icon2 && (a[n1 + 1][m1 - 1]) == icon2 && (a[n1 + 2][m1 - 2]) == icon2 && (a[n1 + 3][m1 - 3]) == icon2 && (a[n1 + 4][m1 - 4] == icon2)) return 1; else
		if ((a[n1][m1]) == icon2 && (a[n1 - 1][m1 + 1]) == icon2 && (a[n1 - 2][m1 + 2]) == icon2 && (a[n1 - 3][m1 + 3]) == icon2 && (a[n1 - 4][m1 + 4] == icon2)) return 1;
	return 0;
}
void savegame() //Save game
{
	errno_t f;
	FILE *file;
	f = fopen_s(&file, "savegame.txt", "wt");
	for (int i = 0; i <= 80; i++)
	{
		for (int j = 0; j <= 25; j++)
			fprintf(file, "%c", a[i][j]);
		printf("\n");
	}
	fclose(file);
}
void load() //Load game 
{
	errno_t f;
	FILE *file;
	VeKhung();
	f = fopen_s(&file, "savegame.txt", "rt");
	for (int i = 1; i <= 80; i++)
	{
		for (int j = 1; j <= 25; j++)
		{
			fscanf_s(file, "%c", &a[i][j]);
			if (a[j][i] != ' ')
				gotoxy(i + 1, j + 1);
			printf("%c", a[i][j]);
		}
	}
	VeKhung();
	x = 39, y = 6;
	do {
		gameinfo();
		ConTro(x, y);
		dieukhien();
		if (phim == 't' || phim == 'T')
			savegame();
	} while (phim != 'q' && phim != 'Q');
}