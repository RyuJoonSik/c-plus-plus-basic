//#include <stdio.h>
//
//class Time
//{
//	/* 내장 타입인 int는 임의로 확장할 수 없어서 (int, Time)순으로 
//		인수를 받는 전역 연산자 함수가 필요하다.*/
//	friend const Time operator +(int s, const Time& me);
//private:
//	int hour, min, sec;
//
//public:
//	Time(){}
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//};
//
///* 1 + now는 가능하지만 now + 1은 안된다. */
//const Time operator +(int s, const Time& me) {
//	Time t = me;
//
//	t.sec += s;
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
//	Time now(11, 22, 33);
//	now.OutTime();
//	now = 1 + now;
//	now.OutTime();
//}