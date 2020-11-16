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
//	/* 가상 함수는 포인터의 동적 타입에 따라 실제 호출 할 함수가 결정된다.
//		함수 앞에 virtual 키워드를 붙여 선언한다. 
//		다형성 : 똑같은 코드이지만 경우에 따라 다르게 동작하는 것. */
//	virtual void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
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
//
//	void intro() {
//		printf("%d학번 %s입니다.\n", stunum, name);
//	}
//	virtual void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//};
//
//void IntroSomebody(Human* pH) {
//	pH->intro();
//}
//
//int main()
//{
//	Human h("김사람", 10);
//	Student s("이학생", 15, 1234567);
//	
//	IntroSomebody(&h);
//	IntroSomebody(&s);
//}