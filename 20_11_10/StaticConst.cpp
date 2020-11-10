//#include <stdio.h>
//
//class MathCalc
//{
//private:
//	/* 객체별로 값이 달라지지 않는 고정된 상수라면 정적 상수 멤버로 선언
//	공유 상수 */
//	static const double pie;
//
//public:
//	// 열거형
//	enum{value = 123};
//	MathCalc(){}
//	void DoCalc(double r) {
//		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pie);
//	}
//};
//
//// 정적 멤버는 생성자에서 초기화 할 수 없고 외부에서 정의하면서 초기화.
//const double MathCalc::pie = 3.1416;
//
//int main()
//{
//	MathCalc m;
//	m.DoCalc(5);
//	printf("%d", m.value);
//}