//#include <stdio.h>
//
//class Int100
//{
//private:
//	int num;
//
//public:
//	Int100(int a) {
//		if (a <= 100) {
//			num = a;
//		}
//		else {
//			throw a;
//		}
//	}
//
//	Int100& operator +=(int b) {
//		if (num + b <= 100) {
//			num += b;
//		}
//		else {
//			throw num +b;
//		}
//		return *this;
//	}
//	void OutValue() {
//		printf("%d\n", num);
//	}
//};
//
//int main()
//{
//	/* try 블록에서 선언하면 블록 지역 변수가 되어 블록 바깥에서 참조 할 수 없다.
//		이 객체를 사용하는 모든 코드가 블록 안에 포함되어야 한다.*/
//	try {
//		Int100 i(85);
//		i += 20;
//		i.OutValue();
//	}
//	catch (int n) {
//		printf("%d는 100보다 큰 정수이므로 다룰 수 없습니다.\n", n);
//	}
//
//	//i += 12; // 불가능
//	//i.OutValue(); // 불가능
//}