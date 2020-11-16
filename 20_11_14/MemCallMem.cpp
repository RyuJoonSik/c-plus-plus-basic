//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#include "cusror.h"
//
//class Point
//{
//protected:
//	int x, y;
//	char ch;
//public:
//	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
//	/* 멤버 함수가 호출하는 다른 멤버 한수가 클래스별로 다르게 정의되어 있다면 이 함수는 가상으로
//		선언해야 한다.*/
//	void virtual show() {
//		gotoxy(x, y); _putch(ch);
//	}
//	void virtual hide() {
//		gotoxy(x, y); _putch(' ');
//	}
//	void move(int nx, int ny) {
//		hide();
//		x = nx;
//		y = ny;
//		show();
//	}
//};
//
//class Circle : public Point
//{
//protected:
//	int radius;
//
//public:
//	Circle(int ax, int ay, char ach, int arad) :Point(ax, ay, ach) { radius = arad; }
//	void show() {
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			_putch(ch);
//		}
//	}
//
//	void hide() {
//		for (double a = 0; a < 360; a += 10) {
//			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
//			_putch(' ');
//		}
//	}
//};
//
//int main()
//{
//	Point p(1, 1, 'P');
//	Circle c(20, 10, 'C', 12);
//
//	p.show();
//	c.show();
//
//	_getch();
//	p.move(40, 1);
//	_getch();
//	c.move(40, 10);
//	_getch();
//
//}
