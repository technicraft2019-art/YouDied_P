#include <iostream>
using namespace std;

int main()
{

	int a(1);
	int b = 13;

	if (b < a)
	{
		cout << "b is less than a" << endl;
	}
	else
	{
		cout << "b is not less than a" << endl;
	}
	// Pauses the program until user makes an input
	system("pause");
}