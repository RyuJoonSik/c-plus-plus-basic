//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//private:
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
//private:
//	int stunum;
//
//public:
//	/* 부모로부터 상속받은 멤버는 자식이 초기화 할 수 없다.
//		상속받은 멤버를 초기화할 때는 초기화 리스트에서 부모의 생성자를 호출하여
//		부모에게 부탁한다. 부모 멤버변수를 우선적으로 초기화한다. 
//		여러 이유로 상속받은 멤버는 반드시 초기화 리스트로 초기화한다. */
//	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
//		stunum = astunum;
//	}
//	/*	name 멤버가 private로 선언되어 있기 때문에 Human 자신만 사용 할 수 있다.
//	void report() {
//		printf("이름 : %s, 나이 : %d 보고서 제출합니다.\n", name,stunum);
//	}*/
//	void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//};
//
//int main()
//{
//	Human kim("김상형", 29);
//	kim.intro();
//	Student han("김한결", 15, 123456);
//	han.intro();
//	han.study();
//}