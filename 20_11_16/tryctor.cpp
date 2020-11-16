//#include <stdio.h>
//
//class Int100
//{
//private:
//	int num;
//
//public:
//	/* 초기화 리스트를 예외 처리 블록에 포함시키기 위해 이 표기법이 꼭 필요하다. */
//	Int100(int a)
//		try :num(a) {
//		if (a > 100) {
//			throw a;
//		}
//	}
//
//	catch (int a) {
//		printf("%d은 100보다 더 큽니다.\n", a);
//	}
//
//	void OutValue() {
//		printf("%d\n", num);
//	}
//};
//
//int main()
//{
//	/* 생성 단계의 예외는 개체 혼자만의 문제가 아니라 이 객체를 선언한 곳과도 관련이 있어
//		선언 주체에게도 예외 사실을 알린다. main의 try가 빠지면 미처리 예외가 된다.*/
//	try {
//		Int100 i(101);
//		i.OutValue();
//	}
//	catch (int) {
//		puts("무효한 객체임");
//	}
//}