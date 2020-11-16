//#include <stdio.h>
//
//class A
//{
//protected:
//	int a;
//public:
//	A(int aa) { a = aa; }
//};
//
///* 간접적으로 두 번 상속되더라도 멤버는 한 번만 상속하는 클래스를 가상 기반 클래스라고 한다.
//	상속문의 기반 클래스 앞에 virtual 키워드를 붙인다.*/
//class B : virtual public A
//{
//protected:
//	int b;
//public:
//	B(int aa, int ab) : A(aa) { b = ab; }
//};
//
//class C : virtual public A
//{
//protected:
//	int c;
//public:
//	C(int aa, int ac) :A(aa) { c = ac; }
//};
//
//class D : public B, public C
//{
//protected:
//	int d;
//public:
//	/* 다중 상속을 통해 상속받은 멤버의 초기화는 최종 클래스가 직접 처리한다.*/
//	D(int aa, int ab, int ac, int ad) :A(aa), B(aa, ab), C(aa, ac) { d = ad; }
//	void fD() {
//		b = 1;
//		c = 2;
//		a = 3;
//	}
//};
//
//int main()
//{
//	D d(1, 2, 3, 4);
//}