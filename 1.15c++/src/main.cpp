#include <iostream>


// 메모리 주소는 계속 해서 바뀐다.
// char = 1바이트 ( 01001000 ) <- char a = 'H' 일 경우 2진수로 표현 [메모리주소는 계속 변경]
// int	= 4바이트 ( 00000000 , 00000000 , 00000000 , 00000001 ) <- int i = 1 일 경우 2진수로 표현 [메모리주소는 계속 변경]
int main()
{
	using namespace std;
	                  
	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;

	//===============================================================
	cout << "========== bool형 데이터 형태 ================" << endl;
	 
	// bool 타입은 2진수로 나타낼수 있다.( 참 : 1, 불 : 0 ) 0이 아니면 true 입니다.
	bool bValue = false;  // bool 타입 초기화
	cout <<"bool 타입 그냥 출력 : " << bValue << endl;    
	cout << (bValue ? 1 : 0) << endl;

	//===============================================================
	cout << "========== 문자 데이터 형태 ================" << endl;

	char chValue = 'A';    // 문자형은 10진수로 바꿔서 저장한다.
	char chValue1 = 65;     // 그래서 문자를 숫자로 표현할수 있다.
	cout << chValue1 << endl;
	cout << chValue << endl;

	//===============================================================
	cout << "========== 부동 소수 점 데이터 형태 ================" << endl;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	cout << fValue << endl;
	cout << dValue << endl;
	//===============================================================
	cout << "========== AUTO 데이터 형태 ================" << endl;

	auto aValue = 3.141592;
	auto aValue1 = 3.141592f;
	cout <<"auto 데이터형 : " << aValue << endl;
	cout <<"auto 데이터형1 : " << aValue1 << endl;
	cout <<"auto 데이터 사이즈 확인 : " << sizeof(aValue) << endl;
	cout <<"auto 데이터 사이즈 확인1 : " << sizeof(aValue1) << endl;
	// sizeof는 데이터의 사이즈(바이트 크기 알아보는것)

	//===============================================================
	cout << "========== int 데이터 형태 ================" << endl;
	
	int q( 123 );		// direct initialization
	cout <<"int q : " << q << endl;
	int b{ 123 };	// uniform initialization
	cout <<"int b : " << b << endl;
	int  z = (int)3.1415;  // copy initialization
	cout <<"int z : " << z << endl;

	int k, l; //같이 선언을 할 수 있다.(같은 데이터형만이 같이 선언을 할수있다.)

	return 0;
}
