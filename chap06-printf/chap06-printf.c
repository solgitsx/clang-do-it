/*
* printf(...) 함수 예제
*/
#include <stdio.h>

#define TITLE "C표준 라이브러리와 표준 출력함수(printf)"

void printBasic();
void printWidth();
void printUnsigned();

void main()
{
    printf("%s\n", TITLE);
    // printBasic();
    printWidth();
    // printUnsigned();
}

void printUnsigned()
{

}

void printWidth()
{
    char ch = 'a';
    short st = 1234;
    int integer = 1234567890;
    float real = 0.123456f;
    double real2 = 0.123456789;

    /*
     * [출력폭]
     * 1. 오른쪽 정렬
     * 2. 지정된 자릿수보다 값이 크면 자릿수는 무시
     * 3. 실수(%10f)는 자리수에 소숫점이 포함, 소숫점 이하는 기본 6자리
     * 4. 실수(%15.10f)는 전체 자릿수는 20자리, 소숫점 이하는 10자리, 소숫점은 전체 자릿수에 포함
    */
    printf("char(%4c), short(%5d), int(%5d), float(%9.6f), double(%15f)(%15.10f)\n",
        ch, st, integer, real, real2, real2);
    printf("char(%-4c), short(%-5d), int(%-5d), float(%-9.6f), double(%-15f)(%-15.10f)\n",
        ch, st, integer, real, real2, real2);
}
void printBasic()
{
    char ch = 'a';
    short st = 1234;
    int integer = 1234567890;
    float real = 0.123456f;
    double real2 = 0.123456789;

    // format: 실수형 -> %f는 기본적으로 소숫점 이하 6자리까지 출력
    // format: 실수형 -> %.10f
    printf("char(%c), short(%d), int(%d), float(%f), double(%.10f)\n",
        ch, st, integer, real, real2);

    printf("char(%c), short(%d), int(%d), float(%f), double(%.10f)\n",
        'b', 4321, 987654321, 0.654321, 0.987654321);
}