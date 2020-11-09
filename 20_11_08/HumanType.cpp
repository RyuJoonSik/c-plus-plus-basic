//#include <stdio.h>
//
//class Human
//{
//public : 
//	char name[12];
//	int age;
//
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human arFriend[10] = {
//		{"문동욱", 49},
//		{"김유진", 49},
//		{"박상막", 49},
//	};
//
//	Human* pFriend;
//	pFriend = &arFriend[1];
//	pFriend->intro(); // 포인터로 멤버 함수를 호출할 때는 -> 연산자 사용
//
//	/* 인스턴스 : 클래스 타입으로 선언된 변수(클래스가 메모리에 구현된 실체)
//		  객체 : 프로그램을 구성하는 독립적인 부품(인스턴스랑 같은 뜻이되 문맥의 차이)*/
//}