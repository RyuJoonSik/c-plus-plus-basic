//#include <stdio.h>
//
//class Time;
//class Date
//{
//private:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d;}
//	void OutToday(Time& t);
//};
//
//class Time
//{
//	friend void Date::OutToday(Time& t);
//private:
//	int hour, min, sec;
//public:
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//};
//
//void Date::OutToday(Time& t) {
//	printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",
//		year, month, day, t.hour, t.min, t.sec);
//}
//
//int main()
//{
//	Date d(2018, 06, 29);
//	Time t(12, 34, 56);
//	d.OutToday(t);
//}
//
///* 복수의 대상에 대해 프렌드 지정을 할 수 있지만 한 번에 하나씩만 가능하다.
//	프렌드 관계는 상속되지 않는다. 그러나 부모의 멤버함수로 프렌드 클래스 멤버를 엑세스 할 수 있다.*/