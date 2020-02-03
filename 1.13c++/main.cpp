//네임스페이스 명칭 공간
#include  <iostream>

namespace MySpace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 8;
		}
	}

   int doSomething(int a, int b)
   {
   	return a + b;
   }
}

using namespace std;

namespace  MySpace2
{
   int doSomething(int a, int b)
   {
   	return a * b;
   }
}

int main()
{
	using namespace MySpace1;
	using namespace MySpace1::InnerSpace;

	//MySpace1::InnerSpace::my_function();

	my_function();

	cout << my_function() << endl;
	cout << doSomething(3, 4) << endl;
	cout << MySpace2::doSomething(3, 4) << endl;
	
	cout << "Hello , World" << endl;
	return 0;
}