// 1. 14 ��ó������� ù ����

#include <iostream>
#include <algorithm>
using namespace std;

#define MY_NUMBER "Hello World" // ��ũ�δ� �빮��
#define MAX(a,b) ((a > b) ? a:b)
// ��ũ�δ� ���ǵǾ� �ִ� ���Ͼȿ����� ȿ���� �ִ�.
#define LIKE_APPLE

void doSomething();

//��ũ�δ� ���� ������

int main()
{
// ��ó���� 
	doSomething();

	cout << MY_NUMBER << endl;
	cout << MAX(1+3, 2) << endl;

	//include <algorithm> �ȿ� �ִ� ���
	cout << std::max(1+3,2) << endl;  

	return 0;
}
