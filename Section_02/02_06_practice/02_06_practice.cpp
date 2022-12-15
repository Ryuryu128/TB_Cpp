#include <iostream>

using namespace std;

void OddEven(int a)
{
	if (a % 2 == 0)
	{
		cout << a << " is Even" << endl;
	}
	else if (a % 2 == 1)
	{
		cout << a << " is Odd" << endl;
	}
	else
		return;
}

int main()
{
	OddEven(1);
	OddEven(4);
}