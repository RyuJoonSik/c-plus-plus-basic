//#include <stdio.h>
//
//template <typename T>
//void LongFunc(T a)
//{
//	// 아주 긴 함수의 본체
//}
//
//int main()
//{
//	int i = 1;
//	unsigned u = 2;
//	short s = 3;
//
//	/* 특정한 한 타입에 대해서만 구체화하고 싶다면 호출할 때마다 원하는 타입을 명시적으로 지정한다.
//		int와 호환되는 타입은 처리하는 방식이 비슷한데 각 타입에 대해 일일이 함수를 만드는 것은 낭비이다.
//		이럴 때 호출문에 int 타입으로 구체화하라고 지시하면 낭비를 막을 수 있다.*/
//	LongFunc<int>(i);
//	LongFunc<int>(u);
//	LongFunc<int>(s);
//}