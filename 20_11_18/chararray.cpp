//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s("char array");
//
//	/* 객체의 내부 데이터를 그대로 리턴하므로 다른 형식의 문자열일 수 있다. */
//	cout << s.data() << endl;
//	/* 널종료 문자열이 아닌 경우 사본을 복사하여 널종료 문자열을 만들어 리턴한다. 
//		string객체의 문자열을 문자 배열로 복사하고 싶다면 충분한 길이의 배열을 선언하고
//		strcpy 함수로 문자열 객체의 c_str함수가 리턴한 포인터를 복사한다.*/
//	cout << s.c_str() << endl;
//
//	char str[128];
//	strcpy(str, s.c_str());
//	printf("str = %s\n", str);
//}