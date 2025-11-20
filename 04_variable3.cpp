#include <iostream>

using namespace std;

int main() {

    // 작은 문자형 근본적으로는 정수형으로 저장됨(아스키값)
    int a = 77;
    char b = 'a';
    // char b = "a"; -> 안되는 이유
    // null 문자 '\0' 작은 따옴표는 계속 저거를 붙여줘야함 컴파일러가 돌때 null찾을때까지 계속돔
    // 근데 " "는 << 명시적으로 null문자가 포함되는거임 -> string
    // 그래서 char에는 한글자만 들어가야하는데 ""게 들어가면 두글자되니까 안되는거임
    cout << b << endl;

    //bool : 0 혹은 1 False,True
    bool c = 0;
    bool d = 1;
    bool e = 10; // 0 이외의 모든 값은 1로 저장

    cout << c << " " << d << " " <<e << endl; 

    return 0;

}