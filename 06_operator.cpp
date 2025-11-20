#include <iostream>

using namespace std;

int main() {

    // + - * / %(실수형 자료에서는 사용이 불가함)

    int a = 10;
    int b = 3;
    int h = 5;

    // cout << a << endl;

    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b;
    int g = a%b;

    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;

    //C++가 복잡한 산술 연산을 수행할 수 있을까? -> 쌉가능
    
    int multiple = a / b * h;

    cout << multiple << endl;

    float i = 9.0;
    int j = 5;

    cout << i / j << endl;

    //auto
    //C++에서 알아서 자료형 정해줌, 복잡한 변수형을 다룰때 유용하게 다룸 근데 맹신 ㄴㄴ ->
    // auto x = 0.0;
    // float y = 0;
    // auto z = 0;
    // 이렇게 3개의 float자료형을 저장하려는데 z는 int가 될 수 있음  

    auto n = 100;
    auto x = 1.5;
    auto y = 1.3e12L;

    return 0;
}