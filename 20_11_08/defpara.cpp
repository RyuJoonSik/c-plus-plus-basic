//#include <stdio.h>
//
///* 디폴트 인수는 생략해도 상관없는 인수에 대한 기본값을 지정하여
//	활용성과 편의성을 동시에 만족 
//	주의 1: 디폴트 인수는 원형에 지정하며 정의부에는 지정하지 않는다.
//		2: 디폴트 인수는 오른쪽부터 순서대로 지정할 수 있다.*/
//int GetSum(int from, int into, int step = 1, int base = 0); // 디폴트 인수
//
//int main()
//{
//	printf("%d\n", GetSum(1, 10));
//	printf("%d\n", GetSum(1, 10, 2));
//	printf("%d\n", GetSum(1, 10, 2, 10));
//}
//
//int GetSum(int from, int into, int step/*=1*/, int base /*=0*/)
//{
//	int sum = base;
//	for (int i = from; i <= into; i += step)
//	{
//		sum += i;
//	}
//	return sum;
//}