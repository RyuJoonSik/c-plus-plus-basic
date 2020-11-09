//#include <stdio.h>
//
//struct SHuman
//{
//	// 다른 지정자가 나올 때 까지 같은 속성이 적용
//private : // 내부적으로만 사용
//	char name[12];
//	int age;
//
//public : // 자신의 속성이나 동작을 외부로 공개하는 멤버이며 이를 인터페이스라고 한다.
//	void intro() {
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//
//	// 엑세서
//	int getAge() { return age; }
//	void setAge(int aAge) {
//		if (aAge > 0 && aAge < 120) {
//			age = aAge;
//		}
//	}
//};
//
//// protected : 외부에서 엑세스할 수 없으나 상속 관계의 자식 클래스는 가능
//
//int main()
//{
//	SHuman kim;
//	kim.setAge(286);
//	kim.intro();
//}
//
//// 정보 은폐 : 객체의 정보를 숨김으로써 안정성을 높이는 기능.