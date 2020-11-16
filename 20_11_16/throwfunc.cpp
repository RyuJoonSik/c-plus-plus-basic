//#include <stdio.h>
//
///* 예외를 던지는 throw문은 try 블록 안에 있는 것이 원칙이지만 함수 안에서는 단독으로 올 수 있다.
//	이 경우 함수가 직접 예외를 처리하지 않고 함수를 호출한 곳에서 처리한다. 따라서 호출원이 try, catch
//	블록을 작성하여 예외를 처리해야 한다.*/
//
//void divide(int a, int d) {
//	if (d == 0) throw "0으로는 나눌 수 없습니다.";
//	printf("나누기 결과  = %d입니다.\n", a / d);
//}
//
//int main()
//{
//	try {
//		divide(10, 0);
//	}
//	catch (const char* message) {
//		puts(message);
//	}
//	divide(2, 0);
//}