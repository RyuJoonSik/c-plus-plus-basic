//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//
//public:
//	Time(){}
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutTime() {
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//	Time operator++() {
//		sec++;
//		min += sec / 60;
//		sec %= 60;
//		hour += min / 60;
//		min %= 60;
//		return *this;
//	}
//
//	/* 후위형 구분을 위해 더미 인수를 취한다. 더미 인수는 사용되지 않지만
//		오버로딩 요건을 충족시켜 두 형식의 증가 연산자를 모두 정의할 수 있도록
//		하는 보조 역할을 수행한다. */
//	const Time operator++(int dummy) {
//		Time t = *this;
//		++* this;
//		return t;
//	}
//};
//
//int main()
//{
//	Time t1(1, 1, 1);
//	Time t2;
//	
//	t2 = t1++;
//	t1.OutTime();
//	t2.OutTime();
//	t2 = t1++;
//	t1.OutTime();
//	t2.OutTime();
//}