//#include <stdio.h>
//
//class Date;
//class Time
//{
//	friend void OutToday(Date&, Time&);
//
//private:
//	int hour, min, sec;
//
//public:
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//};
//
//class Date
//{
//	friend void OutToday(Date&, Time&);
//private:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//};
//
///* 한쪽 클래스의 멤버 함수로 선언하면 반대쪽의 멤버를 읽을 수 없다.
//	이럴 대는 외부에 전역 함수를 정의하고 양쪽 클래스에 프렌드로 지정한다.*/
//void OutToday(Date& d, Time& t)
//{
//	printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",
//		d.year, d.month, d.day, t.hour, t.min, t.sec);
//}
//
//int main()
//{
//	Date d(2018, 06, 29);
//	Time t(12, 34, 56);
//	OutToday(d, t);
//}