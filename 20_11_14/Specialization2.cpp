//#include "cusror.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class PosValue
//{
//private:
//	int x, y;
//	T value;
//public:
//	PosValue(int ax, int ay, T av):x(ax), y(ay), value(av){}
//	void outvalue() {
//		gotoxy(x, y);
//		cout << value << endl;
//	}
//};
//
//template <> class PosValue<double>
//{
//private:
//	int x, y;
//	double value;
//public:
//	PosValue(int ax, int ay, double av):x(ax),y(ay),value(av){}
//	void outvalue() {
//		gotoxy(x, y);
//		cout << "[" << value << "]" << endl;
//	}
//};
//
//int main()
//{
//	PosValue<int> iv(10, 10, 2);
//	PosValue<char> cv(25, 5, 'C');
//	PosValue<double> dv(30, 15, 3.14);
//	iv.outvalue();
//	cv.outvalue();
//	dv.outvalue();
//}
//
///* 부분 특수화 : 템플릿 인수가 여러 개 있을 때 그중 하나에 대해서만 특수화 하는 것.
//	template<typename T1, typename T2> class SomeClass{...}
//	template<typename T1> class SomeClass<T1, double> {...} */