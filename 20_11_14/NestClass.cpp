//#include <stdio.h>
//#include <string.h>
//
//class Product
//{
//	char name[64];
//	char company[32];
//	int price;
//
//	/* Date 클래스가 외부에서는 전혀 필요치 않고 Product 클래스 안에서만 사용된다면 Date 클래스의
//		선언문을 통째로 Product 안으로 이동시킨다. 클래스의 동작을 도와주는 도우미 클래스가 필요하다면
//		외부에 둘 필요 없이 선언문을 중첩시킨다. Date는 지역 클래스*/
//	class Date
//	{
//	protected:
//		int year, month, day;
//	public:
//		Date(int y, int m, int d) { year = y; month = m; day = d; }
//		void OutDate() { printf("%d/%d/%d", year, month, day); }
//	};
//	Date validto;
//public:
//	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) :
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
//
//	//Date now(12, 34, 56); 에러
//	/* 도우미 클래스를 외부로 공개하고 싶다면 public영역에 선언한다.
//	Product::Date now(12, 34, 56); */
//}