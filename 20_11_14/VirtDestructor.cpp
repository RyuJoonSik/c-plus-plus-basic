//#include <stdio.h>
//
//class Base
//{
//private:
//	char* B_buf;
//public:
//	Base() { B_buf = new char[10]; puts("Base 생성"); }
//	virtual ~Base() { delete[] B_buf; puts("Base 파괴"); }
//};
//
//class Derived : public Base
//{
//private:
//	int* D_buf;
//public:
//	Derived() { D_buf = new int[32]; puts("Derived 생성"); }
//	virtual ~Derived() { delete[] D_buf; puts("Derived 파괴"); }
//};
//
//int main()
//{
//	// Derived d;
//	/* 파괴자는 정적 결합을 하기 때문에 파괴자를 항상 가상으로 선언해줘야한다. 
//		생성자는 가상이 아니어도 상관없으며 가상으로 선언할 수도 없다. */
//	Base* pB;
//
//	pB = new Derived;
//	delete pB;
//}