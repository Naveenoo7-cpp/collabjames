#include<iostream>
using namespace std;

void fun1(int a, int b);
void fun2(int c);
void fun1(int a, int b) {
    int c = a + b;
    fun2(c);
}
void fun2(int c) {

    cout << c << endl;
}

int main() {
    int a, b;
    cout << "Enter the first number:";
    cin >> a >> b;
    fun1(a, b);
    return 0;
}
