#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<String>

using namespace std;

const float L1 = 261.6;
const float L2 = 293.7;
const float L3 = 329.6;
const float L4 = 349.2;
const float L5 = 392;
const float L6 = 440;
const float L7 = 493.9;

const float M1 = 523.3;
const float M2 = 587.3;
const float M3 = 659.3;
const float M4 = 698.5;
const float M5 = 784;
const float M6 = 880;
const float M7 = 987.8;

const float H1 = 1045.5;
const float H2 = 1174.7;
const float H3 = 1318.5;
const float H4 = 1396.9;
const float H5 = 1568;
const float H6 = 1760;
const float H7 = 1975.5;

int main() {
	void start();
	void stop();
	char key = 0;
	string next = "0";
	int M = 500;
	cout << "傻逼小程序1：钢琴" << endl;
	Start:cout << "请设定音长(默认输入500)：" << endl;
	cin >> M;
	cout << "使用小键盘区域以弹奏：" << endl;
	cout << "按下ESC键停止" << endl;
	for (;;) {
		if (_kbhit()) {
			key = _getch();
			switch (key) {
				//低音
			case 75:Beep(L1, M); break;
			case 80:Beep(L2, M); break;
			case 77:Beep(L3, M); break;
			case 72:Beep(L4, M); break;
			case 48:Beep(L5, M); break;
			case 46:Beep(L6, M); break;
			case 13:Beep(L7, M); break;
				//中音
			case 49:Beep(M1, M); break;
			case 50:Beep(M2, M); break;
			case 51:Beep(M3, M); break;
			case 52:Beep(M4, M); break;
			case 53:Beep(M5, M); break;
			case 54:Beep(M6, M); break;
			case 55:Beep(M7, M); break;
				//高音
			case 56:Beep(H1, M); break;
			case 57:Beep(H2, M); break;
			case 43:Beep(H3, M); break;
			case 47:Beep(H5, M); break;
			case 42:Beep(H6, M); break;
			case 45:Beep(H7, M); break;
			}
			if (key == 27) {
				break;
			}
		}
	}
	cout << endl << "输入\"re\"梅开二度，输入\"0\"退出" <<endl;
	cin >> next;
	if (next == "re")
		goto Start;
	system("cls");
	cout << "Build on Nov.26th by YMX" << endl;
	cout << "All Rights Reserved" << endl;
	system("pause");
	return 0;
}
