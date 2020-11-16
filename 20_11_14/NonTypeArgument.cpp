//#include <stdio.h>
//
///* 템플릿의 인수는 통상 타입을 지정하지만 상수를 전달하기도 하는데 이를 비타입 인수라고 한다.
//	비타입 인수는 정수만 사용 할 수 있다. */
//template <typename T, int N>
//class Array
//{
//private:
//	T ar[N];
//public:
//	void SetAt(int n, T v) { if (n < N && n >= 0) ar[n] = v; }
//	T GetAt(int n) { return (n < N&& n >= 0 ? ar[n] : 0); }
//};
//
//int main()
//{
//	int size = 5;
//
//	// Array<int, size>ari; 상수만 사용할 수 있으며 실행 중에 결정되는 변수는 사용할 수 없다.
//	Array<int, 5>ari;
//	ari.SetAt(1, 1234);
//	ari.SetAt(1, 15);
//	ari.SetAt(1000, 5678);
//	printf("%d\n", ari.GetAt(1));
//	printf("%d\n", ari.GetAt(5));
//}