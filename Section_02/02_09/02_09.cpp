#include <iostream>
#include "02_09_MY_CONSTANTS.h"

using namespace std;

void printMyNumber(const int my_number)
{
    // my_number = 343;
    // 이런 식으로 파라미터의 값 자체를 바꾸는 것은 
    // 입출력을 명확하게 보여주지 못하는 측면이 있기 때문에 선호되지 않는다
    // 이를 사전에 막기 위해 파라미터에 const를 붙여주는 경우가 있다.

    // 대신 파라미터를 다른 변수에 복사한 뒤 복사된 변수를 이용해 코드를 짜는 방법이 보편적이다
    int number = my_number;
    number = 343;

    cout << my_number << endl;
}

int main()
{
    // 앞에 const를 붙여주면 symbolic constants가 되며, 이후 코드에서 값을 임의로 변경할 수 없다.
    // 상수는 한 번 값이 정해지면 수정할 수 없기 때문에 선언과 동시에 초기화를 해주어야 한다.
    const double gravity{ 9.8 };

    // --------------------------------------------------------------------------- //

    constexpr int my_const(123); // 컴파일 타임에 상수의 값이 이미 결정됨 => constexpr 이용해 상수 선언해주기

    int number;
    cin >> number;

    const int special_number(number); // 런타임에 상수의 값이 결정됨 => constexpr 사용 불가능

    // --------------------------------------------------------------------------- //

    double radius;
    double circumference = 2.0 * radius * constants::pi;

    return;

}