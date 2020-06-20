#ifndef  _HAM_H_
#define _HAM_H_
#include<iostream>
using namespace std;
#include<windows.h>
#include"console.h"
#include<conio.h>
#include<string.h>
#include<fstream>
#include<MMsystem.h>
#pragma comment(lib, "winmm.lib")
#define consoleWight 80;
#define consoleHeight 25;
#define enter 13;
//khai báo hàm 
void playsound();
void setting();
void ChienThang();
int DKXChienThang();
int DKOChienThang();
void TextColor(int x);
void VeKhungintro();
void VeKhung();
void aboutus();
int exit();
void clrscr();
void startmenu();
void modeplay();
void PVP();
void gotoxy(int x, int y);
void savegame();
void load();
#endif 