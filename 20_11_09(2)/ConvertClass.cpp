//#include <stdio.h>
//
//class Fahrenheit;
//class Celsius
//{
//public:
//	double Tem;
//	Celsius(){}
//	Celsius(double aTem) :Tem(aTem) {}
//	operator Fahrenheit();
//	void OutTem() { printf("섭씨 = %f\n", Tem); }
//};
//
//class Fahrenheit
//{
//public:
//	double Tem;
//	Fahrenheit() {}
//	Fahrenheit(double aTem) :Tem(aTem) {}
//	operator Celsius();
//	void OutTem() { printf("화씨 = %f\n", Tem); }
//};
//
//// 각 클래의 멤버 함수가 상대방 클래스를 알아야 하므로 모두 외부 정의.
//Celsius::operator Fahrenheit()
//{
//	Fahrenheit F;
//	F.Tem = Tem * 1.8 + 32;
//	return F;
//}
//
//Fahrenheit::operator Celsius()
//{
//	Celsius C;
//	C.Tem = (Tem - 32) / 1.8;
//	return C;
//}
//
//int main()
//{
//	Celsius C(100);
//	Fahrenheit F = C;
//	C.OutTem();
//	F.OutTem();
//
//	printf("\n");
//	Fahrenheit F2 = 120;
//	Celsius C2 = F2;
//	F2.OutTem();
//	C2.OutTem();
//}
//
///* 상호의 타입으로 변환하는 함수를 제공하는 대신
//	한쪽 클래스가 변환 생성자와 변환 함수를 동시에 제공해도 상관없다. */