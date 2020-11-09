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
//	// explicit : 명시적인 변환만 허가. 생성자 호출이나 캐스트 연산자는 허용.
//	explicit Time(int abssec) {
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//
//	void OutTime() {
//		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//};
//
//void printTime(Time when)
//{
//	when.OutTime();
//}
//
//int main()
//{
//	Time noon(40000); // 명시적
//	Time now = (Time)60000; // 초기화
//	now.OutTime();
//	//now = 70000; // 값 변경
//	//now.OutTime();
//	noon.OutTime();
//	//printTime(80000);
//}
//
///* 컴파일러는 우변의 정수에 대해 변환 생성자를 호출하여 Time 임시 개체를 생성하고
//	그 객체를 now에 대입한다. 
//	정수와 호환되는 다른 타입도 정수를 거쳐 Time 객체로 바뀔 수 있어 혼란스럽다.*/