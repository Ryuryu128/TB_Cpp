#include <iostream>
using namespace std;
// 함수명, 반환형식, 매개변수가 같지만 기능은 다른 함수를 선언하고 싶을 때.
// namespace를 만들어 카테고리를 나눠주는 방법이 있다.

namespace mySpace1
{
    int doSomething(int a, int b)
    {
        return a + b;
    }

    namespace InnerSpace
    {
        int my_fuction()
        {
            return 0;
        }
    }
}

namespace mySpace2
{
    int doSomething(int a, int b)
    {
        return a * b;
    }
}

int main()
{
    using namespace mySpace1::InnerSpace;
    using namespace mySpace1;

    mySpace1::InnerSpace::my_fuction();

    cout << doSomething(2, 3) << endl;  // 5
    cout << mySpace2::doSomething(2, 3) << endl;  // 6
    

    return 0;
}
