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
///* 부모의 멤버를 상속받으면서 private로 바꾸어 버린다. 
//	private 상속은 포함과 유사한 효과가 나타나며 HAS A 관계를 구현하는 또 다른 방법이다.
//	2개 이상의 객체가 필요하다면 포함 기법을 사용하는 것이 정석이다.*/
//class Product : private Date
//{
//private:
//	char name[64];
//	char company[32];
//	int price;
//public:
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice):
//		Date(y, m, d){
//		strcpy(name, aname);
//		strcpy(company, acompany);
//		price = aprice;
//	}
//	void OutProduct() {
//		printf("이름 : %s\n", name);
//		printf("제조사 : %s\n", company);
//		printf("유효기간 : ");
//		OutDate();
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