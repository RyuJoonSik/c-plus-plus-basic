//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	// 정적 멤버
//	static int count;
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; }
//	void OutCount() {
//		printf("현재 객체 개수 = %d\n", count);
//	}
//};
//
//int Simple::count = 0;
///* 정적 멤버 변수는 클래스 외부에 ::연산자와 함께 소속을 밝혀 별도로 정의하고 초기화한다.
//	클래스를 별도의 모듈로 작성할 때 헤더 파일에는 선언만 들어가므로 정적 멤버에 대한 정의는
//	구현 파일(*.cpp)에 작성한다. */
