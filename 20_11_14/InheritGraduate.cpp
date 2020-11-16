//#include <stdio.h>
//#include <string.h>
//
///* 학생은 사람이다, 대학원생은 학생이다.(IS A관계 성립. 역관계는 성립하지 않는다.)
//	복잡한 상속관계를 구성할 때 트리 형태의 그림으로 표현하는데 이를 클래스 계층도라고 한다.*/
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
//	void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//};
//
//class Graduate :public Student
//{
//protected:
//	char thesis[32];
//
//public:
//	Graduate(const char* aname, int aage, int astunum, const char* athesis) :Student
//	(aname, aage, astunum) {
//		strcpy(thesis, athesis);
//	}
//	void research() {
//		printf("%s을 연구하고 논문을 쓴다.\n", thesis);
//	}
//};
//
//int main()
//{
//	Graduate moon("문종민", 45, 920629, "게임방 상권 분석");
//	moon.research();
//}