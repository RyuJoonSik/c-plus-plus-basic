//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//void InputName(char*& Name)
//{
//	Name = (char*)malloc(32);
//	strcpy(Name, "kim sang hyung");
//}
//
//int main()
//{
//	char* Name;
//
//	InputName(Name);
//	printf("이름은 %s입니다.\n", Name);
//	free(Name);
//}
//
///* 1. 레퍼런스에 대한 레퍼런스는 선언 할 수 없다.
//   2. 레퍼런스에 대한 포인터 레퍼런스는 에러처리된다.
//   3. 레퍼런스의 배열도 선언할 수 없다.*/