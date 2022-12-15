#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);
	return result;
}

int main()
{
	using namespace std;

	bool b1 = true;
	bool b2(false);
	bool b3{ true };

	cout << b2 << endl;	// 0
	cout << b3 << endl;	// 1

	cout << std::boolalpha;	// bool	값을 0/1 이 아닌, true/false로 출력해 줌
	cout << b2 << endl;	// false
	cout << b3 << endl;	// true

	cout << std::noboolalpha;	// bool	값을 true/false이 아닌, 0/1로 출력해 줌

	// ------------------------------------------------------------- //

	// Not Operator (!)
	// false, true 앞에 !을 붙여주면 참 거짓 값이 바뀐다.
	// !true == false
	// !false == true

	// ------------------------------------------------------------- //

	cout << isEqual(0, 3) << endl;
	cout << isEqual(1, 1) << endl;

	// ------------------------------------------------------------- //

	if (5)	// 0이 아니라면 모두 true값으로 인식한다.
	{
		cout << "True" << endl;	// 이 코드가 실행됨.
	}
	else
	{
		cout << "False" << endl;
	}
	
}	
