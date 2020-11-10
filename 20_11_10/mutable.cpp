//#include <stdio.h>
//
//class Some
//{
//private:
//	/* mutable 지정자는 상수 함수나 상수 객체에 대해 예외를 적용. 
//		객체의 상태를 저장하지 않는 임시 멤버에 대해 이 속성을 사용한다.*/
//	mutable int temp;
//
//public:
//	Some(){}
//	// 상수 함수
//	void method() const { temp = 0; }
//};
//
//int main()
//{
//	Some s;
//	s.method();
//	
//	const Some t;
//	t.method();
//}
//
