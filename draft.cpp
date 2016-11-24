#include <iostream>


int b = 10;
void foo(int i) {
    b = b*i;
}


int main() {
    int a;
    a = 5;
    foo(a);
    std::cout << b;
    return 0;
}


