//#include <stdio.h>
//
//template <typename T>
///* 타입 인수는 본체에서 사용할 타입이며 함수의 형식인수와 비슷하다.
//	함수 호출부에서 int 타입을 사용하면 T는 int가 되며 본체에서 참조하는 모든 T가 int로 대체된다.
//	함수 템플릿 정의는 함수 호출부보다 먼저 와야 한다.
//	구체화, 인스턴스화 : 템플릿으로부터 실제 함수를 만드는 과정 */
//void swap(T& a, T& b)
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
//int main()
//{
//	int a = 3, b = 4;
//	double c = 1.2, d = 3.4;
//	char e = 'e', f = 'f';
//
//	swap(a, b);
//	swap(c, d);
//	swap(e, f);
//	printf("a = %d, b = %d\n", a, b);
//	printf("c = %f, d = %f\n", c, d);
//	printf("e = %c, f = %c\n", e, f);
//}