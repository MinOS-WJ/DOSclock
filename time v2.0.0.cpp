/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <Windows.h>
#define width 100
#define hight 26

using namespace std;

int nowtime_year;
int nowtime_mon;
int nowtime_day;
int nowtime_hr;
int nowtime_mi;
int nowtime_se;
char t[hight][width];



void getNowTime() {
	SYSTEMTIME time;
	GetLocalTime(&time);
	nowtime_year = time.wYear;
	nowtime_mon = time.wMonth;
	nowtime_day = time.wDay;/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */
	nowtime_hr = time.wHour;
	nowtime_mi = time.wMinute;
	nowtime_se = time.wSecond;
}
/*
0123456789
############0
############1
############2
############3
############4
############5
############6
############7
0123456789
*/

void resettext() {
	for (int i = 0; i < hight; i++) {
		for (int j = 0; j < width; j++) {
			t[i][j] = ' ';
		}
	}
}

void setyear(int x, int y) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 12; j++) {
			if ((i + j == 2) || (j == 6 && i >= 1) || (i == 5) || (i == 3 && j >= 2 && j <= 10) || (i == 1 && j >= 1) || (i == 4
			        && j == 2)) {/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */
				t[i + y][j + x] = '#';
			} else {
				t[i + y][j + x] = ' ';
			}
		}
	}
}

void setmonth(int x, int y) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 12; j++) {
			if (((i == 0 || i == 2 || i == 4) && (j >= 2 && j <= 9)) || ((j == 2 || j == 9) && (i >= 0 && i <= 6)) || (i == 7
			        && j == 1) || (i == 7 && j == 9) || (i == 6 && j == 8)) {
				t[i + y][j + x] = '#';
			} else {
				t[i + y][j + x] = ' ';
			}
		}
	}
}

void setday(int x, int y) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 12; j++) {
			if (((i == 1 || i == 4 || i == 7) && (j >= 2 && j <= 9)) || ((j == 2 || j == 9) && (i >= 1 && i <= 7))) {
				t[i + y][j + x] = '#';
			} else {
				t[i + y][j + x] = ' ';
			}
		}
	}
}


void setchar(int x, int y, int value) {
	switch (value) {
		case 0:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if (((i == 0 || i == 7) && j >= 3 && j <= 8) || ((i >= 2 && i <= 5) && (j == 1 || j == 10)) || ((i == 1 || i == 6)
					        && (j == 2 || j == 9))) {
						t[i + y][j + x] = '#';/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		case 1:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((j == 7) || (i == 7 && j <= 10 && j >= 3) || ((j == 4 || j == 5) && i == 1) || (j == 6 && i == 0)) {
						t[i + y][j + x] = '#';
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		case 2:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((i == 7 && j <= 10 && j >= 2) || (i == 0 && j <= 8 && j >= 4) || ((i == 1 || i == 2) && (j == 2 || j == 10))
					        || (i == 6 && j <= 5 && j >= 4) || (i + j == 12 && i <= 5 && i >= 2)) {
						t[i + y][j + x] = '#';
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		case 3:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((j <= 9 && j >= 3 && i == 7) || (i == 0 && j <= 8 && j >= 4) || (i == 3 && j <= 8 && j >= 5) || (i == 1 && j == 3)
					        || (i == 6 && j == 2) || ((i == 1 || i == 2 || i == 4) && j == 9) || ((i == 5 || i == 6) && j == 10)) {
						t[i + y][j + x] = '#';/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		case 4:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((j == 6) || (i == 4 && j >= 1 && j <= 10) || (i + j == 5 && j >= 1)) {
						t[i + y][j + x] = '#';
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		case 5:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((i + j == 5 && j >= 2) || (i == 0 && j <= 8 && j >= 4) || (i == 3 && j <= 8 && j >= 2) || (i == 7 && j <= 8
					        && j >= 2) || (i == 6 && j == 1) || (i == 6 && j == 9) || (i == 4 && j == 9) || (i == 5 && j == 10)) {
						t[i + y][j + x] = '#';
					} else {
						t[i + y][j + x] = ' ';
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
						/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */t[i + y][j + x] = '#';
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		case 7:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if ((i == 0 && j >= 1 && j <= 10) || (i + j == 10 && j >= 6) || (j == 6 && i >= 4)) {
						t[i + y][j + x] = '#';
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		case 8:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if (((i == 0 || i == 7 || i == 3) && j >= 3 && j <= 8) || ((i == 1 || i == 2 || i == 4 || i == 6) && (j == 2
					        || j == 9)) || ((j == 1 || j == 10) && i == 5)) {
						t[i + y][j + x] = '#';
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		case 9:
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 12; j++) {
					if (((i == 0 || i == 3) && j >= 3 && j <= 8) || ((i == 1 || i == 2) && (j == 2 || j == 9)) || (i + j == 12 && i >= 3)) {
						t[i + y][j + x] = '#';
					} else {
						t[i + y][j + x] = ' ';
					}
				}
			}
			break;
		default:
			break;
	}
}

void setgap(int x, int y) {
	t[0 + y][x] = ' ';
	t[1 + y][x] = ' ';
	t[2 + y][x] = '@';
	t[3 + y][x] = ' ';
	t[4 + y][x] = ' ';
	t[5 + y][x] = '@';
	t[6 + y][x] = ' ';
	t[7 + y][x] = ' ';
}


void setprinttext(int nowtime_year, int nowtime_mon, int nowtime_day, int nowtime_hr, int nowtime_mi, int nowtime_se) {
	resettext();
	setchar(0, 0, nowtime_year / 1000);
	setchar(12, 0, (nowtime_year % 1000) / 100);
	setchar(24, 0, (nowtime_year % 100) / 10);
	setchar(36, 0, nowtime_year % 10);
	setyear(48, 0);
	setchar(0, 9, nowtime_mon / 10);
	setchar(12, 9, nowtime_mon % 10);
	setmonth(24, 9);/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */
	setchar(36, 9, nowtime_day / 10);
	setchar(48, 9, nowtime_day % 10);
	setday(60, 9);
	setchar(0, 18, nowtime_hr / 10);
	setchar(12, 18, nowtime_hr % 10);
	setgap(24, 18);
	setchar(25, 18, nowtime_mi / 10);
	setchar(37, 18, nowtime_mi % 10);/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */
	setgap(49, 18);
	setchar(50, 18, nowtime_se / 10);
	setchar(62, 18, nowtime_se % 10);
}

void printtext() {
	for (int i = 0; i < hight; i++) {
		for (int j = 0; j < width; j++) {
			cout << t[i][j];
		}
		cout << endl;
	}
}


int main() {

	while (1) {
		getNowTime();
		setprinttext(nowtime_year, nowtime_mon, nowtime_day, nowtime_hr, nowtime_mi, nowtime_se);
		printtext();/*版权所有，盗用追任*/
/*作者：王姜雨竹 中国 湖北 武汉 */
/*邮箱：13871575863@139.com */
		Sleep(1000);
		system("cls");
	}
	return 0;
}





