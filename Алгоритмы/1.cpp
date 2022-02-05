#include <iostream>
#include <vector>

using namespace std;

int foo(int a, int b);

int main() {
    int a = 72;
    int b = 675;

    int c = a % b;
    printf("c == %d\n", c);

    int d = foo(b, a % b);
    printf("d == %d\n", d);

    printf("%d\n", foo(a, b));

    return 0;
}

int foo(int a, int b) {
    return b ? foo(b, a % b) : a;
}

// ну тут всегда будет выполняться  foo(b, a % b)
// и результат этой функции это ответ 