#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;

    cout << 3.14 << endl;
    cout << 31.4e-1 << endl;
    cout << 0.314e1 << endl;

    // ---------------------------------------------- //

    float f(123456789.0f);
    double d(0.1);

    cout << f << endl;
    cout << d << endl;
    cout << std::setprecision(17);
    cout << f << endl;  // 123456792
    cout << d << endl;  //0.10000000000000001

    // ---------------------------------------------- //

    double d1(1.0);
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    cout << d1 << endl; // 1
    cout << d2 << endl; // 0.99999999999999989

    // ---------------------------------------------- //

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << endl; // inf
    cout << neginf << endl; // -inf
    cout << nan << endl;    //-nan(ind)

    // 계산할 때 위와 같은 결과(nan - Not A Number, inf)가 나오면 그 계산은 망했다는 것.
    // 이럴 때 변수안에 들어있는 숫자가 nan/inf인지 아닌지 알 수 있어야하는데,
    // 그럴 때 사용하는 함수가 std::isnan / std::isinf 이다.

    cout << posinf << " " << isinf(posinf) << endl;
    cout << neginf << " " << isinf(neginf) << endl;
    cout << nan << " " << isnan(nan) << endl;
    
    return 0;
}