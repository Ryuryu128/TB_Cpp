#include <iostream>

int main()
{
    using namespace std;

    bool bValue = true;
    char chValue = 'A'; // 65
    float fValue = 3.141592f;
    double dValue = 3.141592;
    auto aValue = 'a';

    cout << bValue << endl;
    cout << (int)chValue << endl;
    cout << chValue << endl;
    cout << fValue << endl;
    cout << dValue << endl;
    cout << aValue << endl;

    // sizeof
    cout << sizeof(aValue) << endl; // 1 (1byte)

    //initialization 방법 3가지
    int a = 123;    // copy initialization
    int b(123);     // direct initialization
    int c{ 123 };   // uniform initialization (좀 더 엄격. 데이터 타입이 안맞을 경우에는 컴파일 자체를 x. 에러를 띄운다.)

    // 여러 개의 변수 동시 선언
    // 같은 데이터 타입의 변수들끼리만 동시 선언 가능.
    int k, l, m;
    int k1 = 1, l1(2), m1{ 1 };

}
