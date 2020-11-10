//#include <stdio.h>
//
//class MatchCalc
//{
//private:
//	// 상수 변수 선언
//	const double pie;
//
//public:
//	// 초기화 리스트에서 상수 변수 초기화. 각 개체별 상수 멤버를 따로 가지므로 다른 값으로 초기화 가능
//	MatchCalc(double apie):pie(apie){}
//	void DoCalc(double r) {
//		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pie);
//	}
//};
//
//int main()
//{
//	MatchCalc m(3.1416);
//	m.DoCalc(5);
//}