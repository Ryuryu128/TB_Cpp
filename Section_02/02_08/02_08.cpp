#include <iostream>

int main()
{
    using namespace std;

    float pi = 3.14f;

    // Decimal  : 0 1 2 3 4 5 6 7 8 9 10 ...
    // Octal    : 0 1 2 3 4 5 6 7 10 11 12 ....
    // hexa     : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 ...

    int x = 0xF; // 16진수 표기는 앞에 0x를 붙여줌
    int y = 010; // 8진수 표기는 앞에 0을 붙여줌
    int z = 0b1010; // 2진수 표기는 앞에 0b를 붙여줌

    // tip
    // 2진수가 길어져 가독성이 떨어질 때 중간중간 ' 를 넣어주면 된다
    // 컴파일러가 알아서 무시해주기 때문에 문법적으로 오류가 나타나지 않음
    z = 0b1111'1101'0010'0110;

    cout << x << endl << y << endl << z << endl;
}
