//#include <stdio.h>
//#include <iostream>
//#include "cusror.h"
//
//using namespace std;
//
///* 디폴트 템플릿 인수 int 
//	함수 템플릿에는 디폴트 인수를 지정할 수 없다.*/
//template <typename T = int>
//class PosValue
//{
//private:
//	int x, y;
//	T value;
//public:
//	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) {}
//	void outvalue() {
//		gotoxy(x, y);
//		cout << value << endl;
//	}
//};
//
//int main()
//{
//	/* 템플릿 클래스의 타입명에는 언제나 <> 괄호가 함께 따라다니며 객체를 선언할 때 <> 괄호 안에
//	원하는 타입을 밝힌다. */
//	PosValue<> iv(10, 10, 2);
//	PosValue<char> cv(25, 5, 'C');
//	PosValue<double> dv(30, 15, 3.14);
//	iv.outvalue();
//	cv.outvalue();
//	dv.outvalue();
//}