#include <iostream>


// �޸� �ּҴ� ��� �ؼ� �ٲ��.
// char = 1����Ʈ ( 01001000 ) <- char a = 'H' �� ��� 2������ ǥ�� [�޸��ּҴ� ��� ����]
// int	= 4����Ʈ ( 00000000 , 00000000 , 00000000 , 00000001 ) <- int i = 1 �� ��� 2������ ǥ�� [�޸��ּҴ� ��� ����]
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
	cout << "========== bool�� ������ ���� ================" << endl;
	 
	// bool Ÿ���� 2������ ��Ÿ���� �ִ�.( �� : 1, �� : 0 ) 0�� �ƴϸ� true �Դϴ�.
	bool bValue = false;  // bool Ÿ�� �ʱ�ȭ
	cout <<"bool Ÿ�� �׳� ��� : " << bValue << endl;    
	cout << (bValue ? 1 : 0) << endl;

	//===============================================================
	cout << "========== ���� ������ ���� ================" << endl;

	char chValue = 'A';    // �������� 10������ �ٲ㼭 �����Ѵ�.
	char chValue1 = 65;     // �׷��� ���ڸ� ���ڷ� ǥ���Ҽ� �ִ�.
	cout << chValue1 << endl;
	cout << chValue << endl;

	//===============================================================
	cout << "========== �ε� �Ҽ� �� ������ ���� ================" << endl;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	cout << fValue << endl;
	cout << dValue << endl;
	//===============================================================
	cout << "========== AUTO ������ ���� ================" << endl;

	auto aValue = 3.141592;
	auto aValue1 = 3.141592f;
	cout <<"auto �������� : " << aValue << endl;
	cout <<"auto ��������1 : " << aValue1 << endl;
	cout <<"auto ������ ������ Ȯ�� : " << sizeof(aValue) << endl;
	cout <<"auto ������ ������ Ȯ��1 : " << sizeof(aValue1) << endl;
	// sizeof�� �������� ������(����Ʈ ũ�� �˾ƺ��°�)

	//===============================================================
	cout << "========== int ������ ���� ================" << endl;
	
	int q( 123 );		// direct initialization
	cout <<"int q : " << q << endl;
	int b{ 123 };	// uniform initialization
	cout <<"int b : " << b << endl;
	int  z = (int)3.1415;  // copy initialization
	cout <<"int z : " << z << endl;

	int k, l; //���� ������ �� �� �ִ�.(���� ������������ ���� ������ �Ҽ��ִ�.)

	return 0;
}
