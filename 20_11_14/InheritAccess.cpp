//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//	/* 외부에 대해서는 숨기더라도 자식에 대해서는 액세스를 허용할 수 있다.*/
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
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//	/* private는 자식에게도 숨겨야할 정보를 저장할 때 사용.*/
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
//	void report() {
//		printf("이름 : %s, 학번 : %d 보고서 제출합니다.\n", name, stunum);
//	}
//};
//
//int main()
//{
//	Student han("김한결", 15, 123456);
//	han.intro();
//	han.study();
//	han.report();
//}