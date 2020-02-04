#include <iostream>
#include <algorithm>
using namespace std;

void doSomething()
{
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
	//#endif

	//#ifndef 
#else 
	cout << "Orage" << endl;
#endif
}