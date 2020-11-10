//#include <stdio.h>
//
//class Simple
//{
//private:
//	int value;
//	// 정적 멤버 변수
//	static int count;
//
//public:
//	Simple() { count++; }
//	~Simple() { count--; }
//	// 정적 멤버 함수
//	static void InitCount() {
//		// 정적 멤버만 참조할 수 있다.
//		count = 0;
//	}
//	static void OutCount() {
//		printf("현재 객체 개수 = %d\n", count);
//	}
//};
//	// 정적 멤버 변수 외부 정의
//	int Simple::count; 
//
//	int main()
//	{
//		//정적 멤버는 객체 없이 사용 가능하다.
//		Simple::InitCount();
//		Simple::OutCount();
//		Simple s, * ps;
//		Simple::OutCount();
//		ps = new Simple;
//		Simple::OutCount();
//		delete ps;
//		Simple::OutCount();
//		printf("크기 : %d\n", sizeof(s));
//	}