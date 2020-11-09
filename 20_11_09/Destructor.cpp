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
//		printf("%s 객체의 생성자가 호출되었습니다.\n", pname);
//	}
//
//	/* 파괴자 : 컴퓨터 안에서 동작하는 모든 것은 항상 자신이 생성되기 전의 상태로 
//				환경을 돌려놓아야 항상성을 유지한다.*/
//	~Human() {
//		printf("%s 객체가 파괴되었습니다.\n", pname);
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
//	Human boy("김수한무거북이와두루미", 12);
//	boy.intro();
//}
//
///* 생성자, 파괴자 특징1 : 리턴값이 없다.
//				   2 : 외부에서 자동으로 호출되므로 public 액세스 속성을 가져야한다.
//				   3 : 생성자는 인수를 가진다. 파괴자는 인수를 받지 않는다.(오버로딩 X)
//				   4 : 둘 다 디폴트가 있다.(초기화 할 필요가 없으면 둘 다 생략해도 무방)
//				   5 : friend나 static이 될 수 없다. 파괴자는 가상 함수로 정의할 수 있지만 생성자는 X
//				   */
//
