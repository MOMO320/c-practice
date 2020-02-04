// 1. 14 전처리기와의 첫 만남

#include <iostream>
#include <algorithm>
using namespace std;

#define MY_NUMBER "Hello World" // 매크로는 대문자
#define MAX(a,b) ((a > b) ? a:b)
// 매크로는 정의되어 있는 파일안에서만 효력이 있다.
#define LIKE_APPLE

void doSomething();

//매크로는 문서 편집기

int main()
{
// 전처리기 
	doSomething();

	cout << MY_NUMBER << endl;
	cout << MAX(1+3, 2) << endl;

	//include <algorithm> 안에 있는 기능
	cout << std::max(1+3,2) << endl;  

	return 0;
}
