//#include <stdio.h>
//
//struct SHuman
//{
//	char name[12];
//	int age;
//
//	void intro(); // 원형 선언
//};
//
//void SHuman::intro() // 본체 정의. inline 키워드를 붙이면 인라인 함수로 선언 될 수도 있다.
//{
//	printf("이름 = %s, 나이 = %d\n", name, age);
//}
//
//int main()
//{
//	SHuman kim = { "김상형", 29 };
//	kim.intro();
//}
//
///* 함수 본체 내부 정의 : 인라인 속성(빠르지만 자주 호출하면 실행 파일이 커진다.)
//		    외부 정의 : 멤버 함수 호출(분기 발생)*/