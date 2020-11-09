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
//	// 생성자
//	// 접두를 붙여 멤버 이름과 구분(인수 : aname, 멤버 : m_name)
//	/*this(객체 자신을 의미하는 포인터 상수) 키워드 사용
//		Human(const char *name, int age){
//		strcpy(this->name, name);
//		this->age = age;
//		}
//
//		 클래스 이름과 멤버 연산자를 사용
//		 Human(const char *name, int age){
//		 strcpy(Human::name, name);
//		 Human::age = age;
//		 }
//	*/
//
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//int main()
//{
//	// 암시적인 방법
//	Human kim("김상형", 29); 
//	// 명시적인 방법 : Human kim = Human("김상형", 29);
//	kim.intro();
//}