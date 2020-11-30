//#include <stdio.h>
//
//class Time
//{
//public:
//	int hour, min, sec; // 포인터로 읽기 위해 public으로 선언
//
//	void OutTime() {
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	
//	Time now;
//	Time* pt = &now;
//
//	int Time::* pi; // 멤버 포인터 변수
//	pi = &Time::hour;
//	now.*pi = 12;
//	pi = &Time::min;
//	now.*pi = 34;
//	pi = &Time::sec;
//	now.*pi = 56;
//	pt->*pi = 12;
//	now.OutTime();
//}