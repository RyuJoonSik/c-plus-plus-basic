//#include <stdio.h>
//
//namespace UTIL {
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//int value;
//int main()
//{
//	using namespace UTIL;
//	int value = 5;
//
//	value = 1;
//	::value = 2;
//	UTIL::value = 3; /* 지역 변수에 의해 가려져 있으므로 소속을 밝혀야 한다. */
//
//	score = 1.2345;
//}