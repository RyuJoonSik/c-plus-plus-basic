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
//	Time(int abssec) {
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//
//	Time(double d) {
//		hour = int(d) % 24;
//		min = int((d - int(d)) * 100) % 60;
//		sec = 0;
//	}
//
//	void outTime() {
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(3.14);
//	now.outTime();
//}
//
///* 변환 생성자는 A를 B로 바꾸는 일대일의 연산을 수행하므로
//	인수를 하나만 취하며 인수가 둘 이상이면 변환 생성자가 안니다.*/