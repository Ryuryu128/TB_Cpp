#include <iostream>

int main()
{
    using namespace std;

    char c1(65);
    char c2('A');

    cout << c1 << " " << c2 << " " << endl;
    cout << (int)c1 << " " << (int)c2 << " " << endl;

    // c-style casting
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    // cpp-style casting
    cout << char(65) << endl;
    cout << int('A') << endl;

    // 위의 casting은 강제적으로 형변환을 하는 반면
    // static_cast는 컴파일러에게 이렇게 형변환을 해도 괜찮나요? 라고 물어본 뒤 형변환을 한다.
    cout << static_cast<char>(65) << endl;
    cout << static_cast<int>('A') << endl;

    cin >> c1;
    cout << c1 << " " << static_cast<int>(c1) << endl;
    cin >> c1;
    cout << c1 << " " << static_cast<int>(c1) << endl;
    cin >> c1;
    cout << c1 << " " << static_cast<int>(c1) << endl;
    cin >> c1;
    cout << c1 << " " << static_cast<int>(c1) << endl;

    return 0;
}

