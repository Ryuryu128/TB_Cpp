#include <iostream>

// 전처리기에서 처리하는 일은 모두 빌드 이전에 처리되기 때문에
// 빌드가 되는 시점에서는 이미 모든 일이 처리되고 난 상태이다.

using namespace std;

#define MY_NUMBER 9 // define은 선언된 파일 내에서만 유효하다
#define LIKE_APPLE

void doSomething()
{
#ifdef LIKE_APPLE
    cout << "Apple" << endl;
#else
    cout << "Orange" << endl;
#endif
}

int main()
{
    cout << MY_NUMBER << endl;

    // 만약 doSomething을 다른 파일로 빼서 관리하게 된다면
    // Orange가 출력될 것이다.
    // doSomething()의 BODY는 01_14.cpp 파일이 아닌 다른 파일에 있어서
    // LIKE_APPLE이 Define 되어 있지 않은 상태라고 판단하기 때문이다.
    doSomething();

}