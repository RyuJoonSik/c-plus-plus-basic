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
//		pname = new char[strlen(aname) + 1];
//		strcpy(pname, aname);
//		age = aage;
//	}
//
//	~Human() {
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
//	Human kang("강감찬", 1424);
//	Human boy = kang;
//
//	boy.intro();
//}
//
///* 포인터가 같은 번지를 기르키기 때문에 다른 쪽이 영향을 받는다.
//	두 객체가 파괴될 때 메모리를 이중으로 정리한다.
//	포인터를 가진 클래스는 완전한 사본을 만들기 위해 깊은 복사를 해야 한다.*/