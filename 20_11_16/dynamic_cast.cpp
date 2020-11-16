//#include <stdio.h>
//#include <typeinfo>
//
//class Parent
//{
//public:
//	virtual void PrintMe() { printf("I am Parent\n"); }
//};
//
//class Child : public Parent
//{
//private:
//	int num;
//public:
//	Child(int anum):num(anum){}
//	/* RTTI는 가상 함수를 가진 클래스에 대해서만 사용할 수 있다. */
//	virtual void PrintMe() { printf("I am Child\n"); }
//	void PrintNum() { printf("Hello Child = %d\n", num); }
//};
//
//void func(Parent* p)
//{
//	p->PrintMe();
//	/* 안전한 변환이 아닌 경우 NULL을 리턴하여 위험한 변환을 허가하지 않는다. 
//	dynamic_cast는 상속 관계의 포인터끼리 변환할 때 사용하는데 레퍼런스에 대해서도 사용할 수 있다.
//	다만 레퍼런스는 NULL이 없으므로 캐스팅할 수 없을 때 bad_cast 예외를 던진다. 레퍼런스에 대해
//	이 캐스팅을 적용할 때는 코드를 try 블록에 작성하고 bad_cast 예외를 처리해야 한다. */
//	Child* c = dynamic_cast<Child*>(p);
//	if (c) {
//		c->PrintNum();
//	}
//	else {
//		puts("이 객체는 num을 가지고 있지 않습니다.");
//	}
//}
//
//int main()
//{
//	Parent p;
//	Child c(5);
//
//	func(&c);
//	func(&p);
//}