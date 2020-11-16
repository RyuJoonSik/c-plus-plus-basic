//#include <stdio.h>
//
//class Parent {};
//class Child :public Parent {};
//
//int main()
//{
//	const char* str = "korea";
//	int* pi;
//	double d = 123.456;
//	int i;
//
//	/* static_cast 연산자는 논리적으로 변환 가능한 타입만 변환하며 그 외의 변환은 에러로 처리한다.*/
//	i = static_cast<int>(d); // 가능
//	// pi = static_cast<int*>(str); // 에러
//	pi = (int*)str;
//
//	Parent P, * pP;
//	Child C, * pC;
//	int i = 1234;
//
//	/* 자식 객체를 부모 타입으로 바꾸는데 이것은 언제나 가능하다. 상속 계층의 위쪽으로 변환하는 업캐스팅은
//		항상 안전하며 따라서 캐스팅할 필요도 없다.*/
//	pP = static_cast<Parent*>(&C); // 가능
//	/* 부모 객체의 번지를 자식 타입의 포인터로 바꾸는 다운 캐스팅은 항상 안전하지는 않아 캐스트 연산자를
//		사용해야 한다. 부모 객체가 자식 타입의 모든 멤버를 가지고 있지 않아 위험하지만
//		static_cast는 실행 중 타입 체크까지는 하지 않으므로 이 변환의 위험성을 판단할 수 없다.*/
//	pC = static_cast<Child*>(&P); // 가능하지만 위험
//	//pP = static_cast<Parent*>(&i); // 에러
//	//pC = static_cast<Child*>(&i);
//}