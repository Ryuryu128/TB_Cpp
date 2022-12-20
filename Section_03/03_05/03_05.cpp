#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    //정수끼리의 비교
    while (true)
    {
        break; // 임시

        int x, y;
        cin >> x >> y;
        cout << "Your input vlues are: " << x << " " << y << endl;

        if (x == y)
            cout << "equal" << endl;
        if (x != y)
            cout << "not equal" << endl;
        if (x > y)
            cout << "x is greater than y" << endl;
        if (x < y)
            cout << "x is less than y" << endl;
        if (x >= y)
            cout << "x is greater than y or equal to y" << endl;
        if (x <= y)
            cout << "x is less than y or equal to y" << endl;
    }

    //소수끼리의 비교
    double d1(100-99.99);   // 0.01
    double d2(10 - 9.99);   // 0.01

    cout << d1 << " " << d2 << endl;

    /*if (d1 == d2)
        cout << "equal" << endl;
    else
    {
        cout << "not equal" << endl;
        if (d1 > d2)
            cout << "d1 > d2" << endl;
        else
            cout << "d1 < d2" << endl;
    }*/
        
    // 부동소수점 비교에 대응하는 한가지 예시
    // epsilon 값을 정의해두고 두 소수의 차이 절대값이 epsilon값보다 작을 경우 두 수를 같다고 판정한다.
    // epsilon 값을 어떻게 정의하냐에 따라 비교 결과가 달라지기 때문에 epsilon은 매우 중요!!
    // epsilon 값을 어떤 값으로 정의하냐는 그때그때 직면한 문제에 따라 달라진다.
    // 이걸 적절히 정하는 것도 엔지니어로서의 능력

    const double epsilon = 1e-10;

    if (std::abs(d1 - d2) < epsilon)
        cout << "Approximately equal" << endl;
    else
        cout << "Not Equal" << endl;

    return 0;
}
