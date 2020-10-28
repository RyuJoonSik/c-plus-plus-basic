//#include <stdio.h>
//
//int main()
//{
//	int age = 25;
//	bool isAdult = age > 19;
//	if (isAdult)
//	{
//		puts("성인입니다.");
//	}
//	
//	enum origin{EAST, WEST, SOUTH, NORTH};
//	origin mark = WEST; // 키워드 생략 가능
//	printf("%d 방향\n", mark);
//
//	struct SHuman
//	{
//		char name[12];
//		int age;
//		double height;
//	};
//
//	SHuman kim = { "김상형", 29, 181.4 }; // 키워드 생략 가능
//	printf("이름 : %s, 나이 : %d\n", kim.name, kim.age);
//
//	int a = 0;
//	printf("실수 a : %.1lf\n", float(a));
//
//	int* pi;
//
//	pi = new int(4);
//	printf("*pi : %d\n", *pi);
//
//	*pi = 123;
//	printf("*pi : %d\n", *pi);
//
//	delete pi;
//
//	int* ar; 
//
//	ar = new int[5];
//	for (int i = 0; i < 5; i++)
//	{
//		ar[i] = i;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d번째 = %d\n", i, ar[i]);
//	}
//
//	delete[] ar;
//
//	return 0;
//}