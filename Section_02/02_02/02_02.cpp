#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short   s = 1;
    int     i = 1;
    long    l = 1;
    long long ll = 1;

    cout << sizeof(s) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(l) << endl;
    cout << sizeof(ll) << endl;

    cout << std::pow(2, sizeof(short) * 8 -1) -1  << endl;
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;

    s = 32767;
    s += 1; // 32768

    cout << s << endl; // => 오버플로우 : 자료형이 표현할 수 있는 숫자 범위를 벗어나는 숫자를 대입할 때 오버플로우가 일어난다.

    return 0;
}
