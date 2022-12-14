#include <iostream>

using namespace std;

int main()
{
    int x = 2; // x is a variable, 2 is literal.

    cout << "Hello World" << endl;
    cout << 1 + 2 << endl; // 1, 2 are literal, 1+2 is expression.

    // 삼항 연산자
    // 비교와 분기가 동시에!
    // 괄호 안의 조건문이 참이면 왼쪽, 거짓이면 오른쪽을 적용한다.
    // 현재 x = 2 이 이므로 y에는 1이 대입될 것이다.
    int y = (x > 0) ? 1 : 2;
    cout << y << endl;

    return 0;
}