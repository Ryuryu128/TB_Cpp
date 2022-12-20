#include <iostream>

int main()
{
    using namespace std;

    // sizeof
    float a;

    sizeof(float);  // 4
    sizeof(a);      // 4
    sizeof a;       // 4 (괄호가 없이 사용가능)


    // comma operator
    // 대표적인 사용 예: for문
    int x = 3;
    int y = 10;
    int z = (++x, ++y); // 앞의 ++x가 실행되고, 뒤의 ++y가 실행된 다음 z에는 뒤의 y의 값이 대입된다. (괄호 때문에)
    cout << x << " " << y << " " << z << endl;  // 4 11 11

    z = x, y; // 의 경우 =이 ,보다 우선순위가 높기 때문에 x가 대입된다.
    z = (x, y); //의 경우에는 ,연산자에 의해 z에는 y가 대입된다.

    // 연산자 우선순위를 항상 염두에 두자!!
    // 무리해서 콤마 연산자를 쓸 필요는 없음.


    // conditional operator (arithmetric if)
    // (현재까지 유일한 삼항연산자)
    bool onSale = true;

    /*int price;

    if (onSale)
        price = 10;
    else
        price = 20;

    cout << price << endl;*/

    const int price = (onSale) ? 10 : 20;

    cout << price << endl;
}
