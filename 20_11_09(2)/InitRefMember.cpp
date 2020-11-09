//#include <stdio.h>
//
//class Some
//{
//public:
//	// 초기화 리스트에서만 레퍼런스 초기화 가능
//	int& total;
//	Some(int &atotal) : total(atotal) {}
//	void OutTotal() { printf("%d\n", total); }
//};
//
//int main()
//{
//	int value = 8;
//	Some S(value);
//	S.OutTotal();
//}