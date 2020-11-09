//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//private:
//	char* pname;
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		pname = new char[strlen(aname) + 1]; // 동적 할당(힙 영역)
//		strcpy(pname, aname);
//		age = aage;
//		printf("==<%s> 객체 생성 == \n", pname);
//	}
//
//	~Human() {
//		printf("==<%s> 객체가 파괴 ==\n", pname);
//		delete[] pname;
//	}
//
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", pname, age);
//	}
//};
//
//int main()
//{
//	Human boy("김수한무거북이와두루미", 12); // 정적 할당(스택)
//	boy.intro();
//
//	Human* leo; // 동적 할당(힙)
//	leo = new Human("레오나르도 디카프리오", 40);
//	leo->intro();
//	delete leo; // 파괴자 호출
//}