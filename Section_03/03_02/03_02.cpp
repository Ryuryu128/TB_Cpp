#include <iostream>

int main()
{
    using namespace std;

    // 나머지 연산자 ( % )
    int x = 7;
    int y = 4;
    int z = x % y;

    cout << x / y << " " << z << endl;  // 1 3

    // 정수의 나눗셈 주의할 점 #1
    // 나눗셈의 두 숫자 모두 정수라면 나눗셈의 결과도 정수로 나온다.
    // 나눗셈의 두 숫자 중 하나라도 실수라면 결과도 실수로 나온다.

    cout << x / y << endl;                  // 1
    cout << (float)x / y << endl;           // 1.75
    cout << x / (float)y << endl;           // 1.75
    cout << (float)x / (float)y << endl;    // 1.75

    // 정수의 나눗셈 주의할 점 #2
    // 음수를 나눌 때 소숫점은 절삭한다.
    cout << -5 / 2 << endl;     // -2

    // 정수의 나눗셈 주의할 점 #3
    // 나머지의 부호는 왼쪽 숫자의 부호를 따른다.
    cout << -5 % 2 << endl;     // -1

    int z = x;
    z += 1; // z = z + 1

    return 0;
}
