#include <iostream>
#include <vector>

using namespace std;

int foo(int a, int b, int *x, int *y);

int main() {
    int a = 3;
    int b = 7;
    int x, y;

    int res = foo(a, b, &x, &y);

    cout << x << " "<< y << " " << res << endl;;
  
    return 0;
}

int foo(int a, int b, int *x, int *y) {

    if(a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }
    cout << "a != 0 znachit: " << endl;

    int x1, y1;
    cout << "b na vhode " << b << "  ";
    cout << "a na vhode " << a << endl;
    int d = foo(b % a, a, &x1, &y1);

    cout << "b % a  == : " << b % a <<  "  ";
    cout << "a =  : " << a <<   "  ";
    cout << "x1 == : " << x1 <<   "  ";
    cout << "y1 == : " << y1 <<   "  ";
    cout << "d == : " << y1 <<  endl  << endl;

    *x = y1 - (b / a) * x1;
    cout << "x na viihode  " << *x << " | ";
    *y = x1;
    cout << "y na viihode " << *y << " | ";
    cout << "d na viihode " << d << endl;
    return d;
}
// ответ (-2 1 1)
// преобразуем переменные а и б и записываем 
// их по указателю в переменные x и y

