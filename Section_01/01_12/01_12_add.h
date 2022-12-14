// 주석 처리된 부분과 #pragma once는 동일한 기능을 수행하는 헤더가드이다.
// 헤더파일이 직/간접적으로 여러번 링크되어 동일한 함수가 한 파일에 2번 이상 선언되는 등의 오류를 막아준다.
#pragma once

// #ifndef my_add
// #define my_add

int add(int a, int b)
{
    return a + b;
}

// #endif