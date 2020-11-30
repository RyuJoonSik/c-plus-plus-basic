//#include <stdio.h>
//
//class MyClass
//{
//	/* 클래스 외부에 있는 포인터로 클래스 내부의 멤버를 읽으려면 대상 멤버는 public으로 선언되어
//		있어야 한다. 멤버 포인터 변수에 멤버 변수의 번지를 대입하는 것은 가리킬 대상을 알려줄 뿐
//		객체의 멤버를 직접 가리키는 것은 아니다.*/
//public:
//	int i, j;
//	double d;
//};
//
//int main()
//{
//	MyClass C;
//	int MyClass::* pi;
//	double MyClass::* pd;
//	int num;
//
//	pi = &MyClass::i;
//	pi = &MyClass::j;
//	pd = &MyClass::d;
//}