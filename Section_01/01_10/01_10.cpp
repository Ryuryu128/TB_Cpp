#include <iostream>

using namespace std;

// [ 함수의 선언과 정의의 분리 ] //


// forward declaration (전방 선언) => 함수의 프로토타입
int add(int a, int b);
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
    cout << add(1, 2) << endl;
}

// definition => 실제 기능을 수행하는 부분
int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}


