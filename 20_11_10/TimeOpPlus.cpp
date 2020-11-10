//#include <stdio.h>
//
//class Time
//{
//	/* 전역 함수 선언 
//		외부의 연산자 함수가 멤버를 읽으려면 friend 선언이 필요 
//		Time은 operator+를 멤버로 포함하지 않지만 friend 지정을 통해 액세스 권한 부여*/
//	friend const Time operator +(const Time& me, const Time& other);
//private:
//	int hour, min, sec;
//
//public:
//	Time(){}
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void outTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//};
//
//const Time operator +(const Time& me, const Time& other)
//{
//	Time t;
//	t.sec = me.sec + other.sec;
//	t.min = me.min + other.min;
//	t.hour = me.hour + other.hour;
//	
//	t.min += t.sec / 60;
//	t.sec %= 60;
//	t.hour += t.min / 60;
//	t.min %= 60;
//	return t;
//}
//
//int main()
//{
//	Time t1(1, 10, 30);
//	Time t2(2, 20, 40);
//	Time t3;
//
//	t3 = t1 + t2;
//	// t3 = operator +(t1, t2);
//
//	t3.outTime();
//}