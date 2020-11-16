//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//protected:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 : %s, 나이 : %d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
//		stunum = astunum;
//	}
//	void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//	void intro() {
//		Human::intro();
//		printf("%d학번 %s입니다.\n", stunum, name);
//	}
//};
//
//int main()
//{
//	Human kim("김상형", 29);
//	kim.intro();
//	Student han("김한결", 15, 123456);
//	/* 이름이 중복되면 항상 지역이 우선이라 부모의 함수는 숨겨진다.*/
//	
//	han.intro();
//}
/* 재정의(Overriding) : 상속받은 멤버 함수를 같은 원형으로
						다시 정의하여 동작을 수정하는 것.*/
