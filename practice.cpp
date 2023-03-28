#include <iostream>

using namespace std;

void Add(int a, int b) {
    int result = a + b;
    cout << result << endl;
}
void Sub(int a, int b) {
    int result = a - b;
    cout << result << endl;
}
void Div(int a, int b) {
    int result = a / b;
    cout << result << endl;
}
void Mul(int a, int b) {
    int result = a * b;
    cout << result << endl;
}
void Rem(int a, int b) {
    int result = a % b;
    cout << result << endl;
}
int main()
{
    int a = 0;
    int b = 0;
    char op = 0;

    cout << " A _ B 계산기" << endl;

    while (true) {
        cout << "하고 싶은 연산 입력('+', '-', '/', '*', '%' 끝내고 싶으면 'E' 입력) : ";
        cin >> op;
        if (op == 'E') {
            break;
        }
        cout << "연산할 숫자 A 입력 : ";
        cin >> a;
        cout << "연산할 숫자 B 입력 : ";
        cin >> b;
        switch (op) {
        case '+':
            Add(a, b);
            break;
        case '-':
            Sub(a, b);
            break;
        case '/':
            Div(a, b);
            break;
        case '*':
            Mul(a, b);
            break;
        case '%':
            Rem(a, b);
            break;
        }
    }

    return 0;
}