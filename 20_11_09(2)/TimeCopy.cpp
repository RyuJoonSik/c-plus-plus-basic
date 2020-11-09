//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time(int h, int m, int s) {
//		hour = h;
//		min = m;
//		sec = s;
//	}
//
//	// 복사 생성자. 컴파일러가 디폴트 복사 생성자를 만들어준다.
//	Time(const Time& other) {
//		hour = other.hour;
//		min = other.min;
//		sec = other.sec;
//	}
//
//	void OutTime()
//	{
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 34, 56);
//	Time then = now; // 복사 생성
//
//	then.OutTime();
//}