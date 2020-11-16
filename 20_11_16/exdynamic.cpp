//#include <stdio.h>
//
//class SomeClass {};
//
//void calc() throw(int)
//{
//	SomeClass obj;
//	char* p = new char[1000];
//
//	if (true/*예외 발생*/) throw 1;
//	/* throw는 뒷부분을 무시하고 예외 핸들러로 점프해 버리기 때문에 delete[]는 호출되지 않는다.*/
//	delete[] p;
//}
//
//int main()
//{
//	try {
//		calc();
//	}
//	catch (int) {
//		puts("정수형 예외 발생");
//	}
//}