//#include <stdio.h>
//
//class Parent
//{
//public:
//	int p;
//};
//
//class Child : public Parent
//{
//public:
//	int c;
//};
//
//int main()
//{
//	int Parent::* pp;
//	int Child::* pc;
//
//	pp = &Parent::p;
//	pc = &Child::c;
//
//	pc = &Parent::p;
//	pc = &Child::p;
//	/* pp = &Child::c; 
//		자식은 부모의 멤버를 가지지만 부모가 자식의 멤버를 가지지 않기 때문에 안된다.
//		멤버 포인터는 정적 멤버를 가리킬 수 없다.
//		레퍼런스 멤버도 가리킬 수 없다.
//		증감 연산자로 앞뒤의 다른 멤버로 이동할 수 없다. 함수 포인터와 마찬가지이다.*/ 
//}