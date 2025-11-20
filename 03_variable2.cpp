#include <iostream>
#include <climits>

using namespace std;

int main() {

    //정수형 : 소수부가 없는 수
    // 음의정수, 양의 정수, 0
    //short, int, long, long long

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // unsigned int a; 
    // unsigned short b = -1;  // 65535
    // unsigned long c;
    // unsigned long long d;

    // 실수형 : 소수부가 있는 수

    float a = 3.14;
    // int b = 3.14;
    float b = 5.23;

    cout << a << " " << b << endl;



}