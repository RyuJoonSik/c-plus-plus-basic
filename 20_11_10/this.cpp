//#include <stdio.h>
//
//// 객체의 크기는 멤버 변수 크기의 총합
//class Simple
//{
//private:
//	int value;
//
//public:
//	Simple(int avalue) :value(avalue) {}
//	void OutValue() {
//		printf("value = %d\n", value);
//	}
//};
//
//int main()
//{
//	Simple A(1), B(2);
//	A.OutValue();
//	B.OutValue();
//}
//
///* 보통은 첫 번째 인수로 객체의 포인터를 전달. 암시적으로 전달하는 객체 포인터를 this라고 칭한다.
//	this 인수는 함수를 호출한 객체의 포인터. 멤버를 참조하는 모든 문장 앞에 this->가 암시적으로 적용
//	(thiscall)*/