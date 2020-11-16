//#include <stdio.h>
//
//template <typename T>
//void swap(T& a, T& b)
//{
//	T t;
//	t = a; a = b; b = t;
//}
//
///* 특정 타입에 대해 약간 다르게 동작하는 함수를 만들고 싶다면 해당 타입에 대해 별도의 함수를 정의할 수 
//	있는데 이를 특수화 라고 한다.
//	template <> void swap<>(double &a, double &b) 가능
//	template <> void swap(double &a, double &b) 가능*/
//template <> void swap<double>(double& a, double& b)
//{
//	int i, j;
//
//	i = (int)a;
//	j = (int)b;
//	a = a - i + j;
//	b = b - j + i;
//}
//
//int main()
//{
//	double a = 1.2, b = 3.4;
//	printf("a = %g, b = %g\n", a, b);
//	swap(a, b);
//	printf("a = %g, b = %g\n", a, b);
//}