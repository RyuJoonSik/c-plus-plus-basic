//#include <stdio.h>
//
//namespace UTIL {
//	int value;
//	double score;
//	void sub() { puts("sub routine"); }
//}
//
//int main()
//{
//	using UTIL::value; /* using선언은 하나의 명칭만 가져온다.
//						  using선언이 있는 블록에만 영향을 미친다. */
//
//	value = 3;
//	UTIL::score = 1.2345;
//	UTIL::sub();
//}
//
//void mysub()
//{
//	UTIL::value = 5;
//}