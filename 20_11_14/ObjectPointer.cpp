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
//	void study() {
//		printf("이이는 사, 이삼은 육, 이사 팔\n");
//	}
//};
//
//int main()
//{
//	Human h("김사람", 10);
//	Student s("이학생", 15, 1234567);
//	Human* pH;
//	Student* pS;
//
//	pH = &h; // 가능
//	pS = &s; // 가능
//	pH = &s; // 가능
//	//pS = &h; // 에러
//
//	pS = (Student*)&h;
//	/* pS가 Student 타입의 포인터 이기 때문에 Student::intro가 호출된다.
//		컴파일러는 자식 타입의 포인터로 부모 타입의 객체를 가리키는 것은 금지한다.
//		정적 타입 : 포인터를 선언할 때 지정한 타입
//		동적 타입 : 포인터가 실제 가리키고 있는 대상체의 타입*/
//	pS->intro();
//}