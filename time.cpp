#include <iostream>
#include <cstdio>
#include <Windows.h>
using namespace std;

int nowtime_hr;
int nowtime_mi;
int nowtime_se;
char t[8][128];



void getNowTime() {
	SYSTEMTIME time;
	GetLocalTime(&time);

	nowtime_hr = time.wHour;
	nowtime_mi = time.wMinute;
	nowtime_se = time.wSecond;
}
/*
0123456789
############
############
############
############
############
############
############
############
*/

void resettext() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 64; j++) {
			t[i][j] = ' ';
		}
	}
}

void setchar(int x, int value) {
	switch (value) {
		case 0:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if (((i == 0 || i == 7) && j >= 3 && j <= 8) || ((i >= 2 && i <= 5) && (j == 1 || j == 10)) || ((i == 1 || i == 6)
					        && (j == 2 || j == 9))) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 1:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((j == 7) || (i == 7 && j <= 10 && j >= 3) || ((j == 4 || j == 5) && i == 1) || (j == 6 && i == 0)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 2:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((i == 7 && j <= 10 && j >= 2) || (i == 0 && j <= 8 && j >= 4) || ((i == 1 || i == 2) && (j == 2 || j == 10))
					        || (i == 6 && j <= 5 && j >= 4) || (i + j == 12 && i <= 5 && i >= 2)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 3:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((j <= 9 && j >= 3 && i == 7) || (i == 0 && j <= 8 && j >= 4) || (i == 3 && j <= 8 && j >= 5) || (i == 1 && j == 3)
					        || (i == 6 && j == 2) || ((i == 1 || i == 2 || i == 4) && j == 9) || ((i == 5 || i == 6) && j == 10)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 4:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((j == 6) || (i == 4 && j >= 1 && j <= 10) || (i + j == 5 && j >= 1)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 5:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((i + j == 5 && j >= 2) || (i == 0 && j <= 8 && j >= 4) || (i == 3 && j <= 8 && j >= 2) || (i == 7 && j <= 8
					        && j >= 2) || (i == 6 && j == 1) || (i == 6 && j == 9) || (i == 4 && j == 9) || (i == 5 && j == 10)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 6:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((i + j == 5 && j >= 2) || (i == 0 && j <= 8 && j >= 5) || (i == 3 && j <= 8 && j >= 2) || (i == 7 && j <= 8
					        && j >= 2) || (i == 6 && j == 1) || (i == 6 && j == 9) || (i == 4 && j == 9) || (i == 5 && j == 10) || (i == 4
					                && j == 1) || (i == 5 && j == 0)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 7:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((i == 0 && j >= 1 && j <= 10) || (i + j == 10 && j >= 6) || (j == 6 && i >= 4)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 8:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if (((i == 0 || i == 7 || i == 3) && j >= 3 && j <= 8) || ((i == 1 || i == 2 || i == 4 || i == 6) && (j == 2
					        || j == 9)) || ((j == 1 || j == 10) && i == 5)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		case 9:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if (((i == 0 || i == 3) && j >= 3 && j <= 8) || ((i == 1 || i == 2) && (j == 2 || j == 9)) || (i + j == 12 && i >= 3)) {
						t[i][j + x] = '#';
					} else {
						t[i][j + x] = ' ';
					}
				}
			}
			break;
		default:
			break;
	}
}

void setgap(int x) {
	t[0][x] = ' ';
	t[1][x] = ' ';
	t[2][x] = '@';
	t[3][x] = ' ';
	t[4][x] = ' ';
	t[5][x] = '@';
	t[6][x] = ' ';
	t[7][x] = ' ';
}


void setprinttext(int nowtime_hr, int nowtime_mi, int nowtime_se) {
	setchar(0, nowtime_hr / 10);
	setchar(12, nowtime_hr % 10);
	setgap(24);
	setchar(25, nowtime_mi / 10);
	setchar(37, nowtime_mi % 10);
	setgap(48);
	setchar(50, nowtime_se / 10);
	setchar(62, nowtime_se % 10);
}

void printtext() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 128; j++) {
			cout << t[i][j];
		}
		cout << endl;
	}
}


int main() {

	while (1) {
		getNowTime();
		setprinttext(nowtime_hr, nowtime_mi, nowtime_se);
		printtext();
		Sleep(1000);
		system("cls");
	}
	return 0;
}




/*


#include <stdio.h>
int main()
{

}



*/
