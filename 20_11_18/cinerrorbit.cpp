//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i;
//
//	cin >> i;
//	/* failbit, eofbit, badbit, goodbit 
//	   에러 발생시 계속 에러 상태를 유지하며 이 상태에서는 다음 입력을 받지 못한다.
//	   입력을 재개하려면 에러 상태를 리셋한다. */
//	if (cin.good()) {
//		cout << i << endl;
//	}
//	else {
//		cout << "실패" << endl;
//	}
//}