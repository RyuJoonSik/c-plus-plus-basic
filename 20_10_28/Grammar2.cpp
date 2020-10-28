#include <iostream>
using namespace std;

int main()
{
	cout << "First C++ Program" << endl;

	int i = 56;
	char ch = 'S';
	double d = 2.414;

	cout << i << ch << d << endl;

	int age;
	cout << "나이를 입력하시오 : ";
	cin >> age; // 자료형 자동 구분
	cout << "당신은 " << age << "살입니다." << endl;

	return 0;
}