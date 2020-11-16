//#include <stdio.h>
//
//class Shape
//{
//public:
//	/* 부모 클래스가 너무 일반적이어서 동작을 정의할 수 없을 때 함수의 본체를 생략하고
//		대신 선언부의 끝에 = 0를 붙여 본체가 없음을 표시한다. 
//		순수 가상 함수를 하나 이상 가지는 클래스를 추상 클래스라고 하며 동작 중 일부가 정의되지 않아
//		인스턴스를 생성할 수 없다.
//		모든 동작이 정의된 클래스를 구체 클래스라고 한다. 구체 클래스는 부모의 가상 함수를 구체적으로 구현한다.
//		추상 클래스가 정의하는 기능 목록을 인터페이스라고한다.*/
//		
//	virtual void draw() = 0 {
//		// 본체를 가질 수 있다. 객체는 생성할 수 없다.(추상 클래스)
//	}
//
//};
//
//class Line : public Shape
//{
//public:
//	virtual void draw() { /*추상 클래스 함수*/Shape::draw(); puts("선을 긋습니다."); }
//};
//
//class Circle : public Shape
//{
//public:
//	virtual void draw() { puts("동그라미 그렸다 치고."); }
//};
//
//class Rect : public Shape
//{
//public:
//	virtual void draw() { puts("요건 사각형입니다."); }
//};
//
//class Triangle : public Shape
//{
//public:
//	virtual void draw() { puts("나는 새로 추가된 삼각형이다."); }
//};
//
//int main()
//{
//	Shape* pS[3];
//
//	// Shape s;
//	pS[0] = new Line;
//	pS[1] = new Circle;
//	pS[2] = new Rect;
//
//	for (int i = 0; i<3; i++) {
//		/* 가상 함수의 동작이 다형적이다. */
//		pS[i]->draw();
//	}
//	for (int i = 0; i < 3; i++) {
//		delete pS[i];
//	}
//}