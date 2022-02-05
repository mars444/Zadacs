#include <iostream>

using namespace std;

class Foo {
    int x;

public:
    Foo() {
        x = 1;
    }

    void modify() {
        x = 2;
    }

    void print() {
        cout << x;
    }

};

int main(){
    const Foo x = Foo();
    Foo *p;
    const Foo **q = &p;
    *q = &x;
    p->modify();
    p->print();

    return 0;
}