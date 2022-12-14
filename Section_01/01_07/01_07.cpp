#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    cout << x << " " << &x << endl;

    // 영역을 구분해 주는 중괄호
    {
        int x = 1;
        cout << x << " " << &x << endl;
    }

    {
        // int x = 2;
        x = 2;
        cout << x << " " << &x << endl;
    }
}

