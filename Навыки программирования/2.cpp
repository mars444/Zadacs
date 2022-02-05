#include <iostream>

using namespace std;

class my_stack {
    static const int MAX_SIZE = 100;
    int stack[MAX_SIZE];
    int size;

public:
    void push(int a) {
        stack[size++] = a;
    }

    int pop() {
        return stack[--size];
    }

    my_stack() {
        size = 0;
    }

};


int main() {
    my_stack st;
    cout << "this numbers push: ";
    for (int  i = 0; i < 6; i++) {
        st.push(i);
         cout <<  i << " "; 
    }
        cout<< endl;
        cout<< "this numbers pop: " << st.pop() << st.pop() << st.pop() << st.pop() << endl;

    return 0;
}

// реализация стэка
// LIFO last in first out  
