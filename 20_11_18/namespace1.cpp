//#include <stdio.h>
//
//int value; /* 전역 네임스페이스 소속. 원래부터 존재하므로 별도의 이름은 없다. */
//namespace A {
//	/* 명칭이 같아도 소속이 다르다.
//		중첩이 가능하다. 
//		두 번 선언되어도 컴파일 단계에서 병합된다.
//		익명 네임스페이스를 정의 할 수 있다.(일반적인 전역 변수와 동일하며 static으로 선언한 외부 정적 변수와 성격이 같다)
//		네임스페이스 안에 함수를 정의 할 수 있다.*/
//	double value;
//}
//
//namespace B {
//	int value;
//}
//
//int main()
//{
//	int value; /* main 소속 */
//	value = 1;
//	::value = 2; /* 전역 네임스페이스 value */
//	A::value = 12.345;
//	B::value = 123;
//}