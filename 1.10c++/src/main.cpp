// 1.10선언과 정의의 분리
#include <iostream>

using namespace std;

int add(int a, int b); // forward  declraration (전방 선언)
int multiply(int a, int b);
int subtract(int a, int b);


int main()
{                                                          
	cout << add(1, 2) << endl;

	return 0;
}

// definition : 정의
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}
