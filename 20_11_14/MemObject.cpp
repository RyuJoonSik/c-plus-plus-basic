//#include <stdio.h>
//#include <string.h>
//
//class Date
//{
//protected:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//	void OutDate() { printf("%d:%d:%d", year, month, day); }
//};
//
//class Product
//{
//private:
//	char name[64];
//	char company[32];
//	/* 포함 : 객체를 멤버로 선언하여 해당 클래스의 기능을 재활용하는 기법.*/
//	Date validto;
//	int price;
//public:
//	/* 생성자 본체가 실행되기 전에 생성자 리스트에서 포함 객체를 초기화.*/
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) :
//		/* Date 디폴트 생성자를 선언하면 다음과 같이 가능하다.
//		validto = Date(y, m, d);
//		클래스가 다른 클래스의 객체를 포함하는 관계를 HAS A 관계라고 한다.(소유 관계)
//		IS A : 상속, HAS A : 포함*/
//		validto(y, m, d) {
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() {
//		printf("이름 : %s\n", name);
//		printf("제조사 : %s\n", company);
//		printf("유효기간 : ");
//		validto.OutDate();
//		puts("");
//		printf("가격 : %d\n", price);
//	}
//};
//
//int main()
//{
//	Product shrimp("새우깡", "농심", 2020, 8, 15, 900);
//	shrimp.OutProduct();
//}