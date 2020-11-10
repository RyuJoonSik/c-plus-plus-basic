//#include <stdio.h>
//
//class Time
//{
//	// Date 클래스에서 Time 클래스의 멤버를 접근 할 수있게 해준다.
//	friend class Date;
//private:
//	int hour, min, sec;
//
//public:
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//};
//
//class Date
//{
//private:
//	int year, month, day;
//
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d;}
//	void OutToday(Time& t) {
//		printf("오늘은 %d년 %d월 %d일이면 지금 시간은 %d:%d:%d입니다.\n",
//			year, month, day, t.hour, t.min, t.sec);
//	}
//};
//
//int main()
//{
//	Date d(2018, 06, 29);
//	Time t(12, 34, 56);
//	d.OutToday(t);
//}
//
//// MFC의 CDocument와 CView가 대표적인 사용 예