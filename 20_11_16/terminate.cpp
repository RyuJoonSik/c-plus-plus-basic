//#include <stdio.h>
//#include <exception>
//using namespace std;
//
//void myterm()
//{
//	puts("처리되지 않은 예외 발생");
//	exit(-1);
//}
//
//int main()
//{
//	/* 미처리 예외 */
//	set_terminate(myterm);
//	try {
//		throw 1;
//	}
//	catch (char* m) {
//
//	}
//
//	/* 임의의 모든 예외를 다 받을 수 있다. 컴파일러는 등장하는 순서대로 catch블록을 점검하여 타입이
//	*	일치하는 핸들러를 찾는다. 따라서 특수한 타입이 앞에 와야 하며 모든 예외를 받는 catch(...)는
//	*	제일 마지막에 와야 한다.
//	catch (...) {
//	
//	}
//	*/
//
//	/*
//	* 예외 처리를 위한 예외 객체의 타입 점검이 굉장히 엄격하다.(1234u로 수정하면 가능)
//	* 예외적으로 void*타입을 받는 핸들러는 임의의 포인터 타입을 받을 수 있고 부모 타입의 포인터를 받는
//	* 핸들러는 자식 타입의 객체를 받을 수 있다.
//	try {
//		if (true) throw 1234;
//	}
//	catch(unsigned a){
//		printf("%d에 대한 예외 발생\n", a);
//	}
//	*/
//}