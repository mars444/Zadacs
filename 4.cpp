#include <iostream>
#include <vector>

using namespace std;

void show(unsigned int num);

int main() {
    
    show(255);
    
    return 0;
}

void show(unsigned int num){

    for (int i = 128; i > 0; i = i / 2) {
        if(num & i ) {
            cout<< "1";
        } else {
            cout<< "0";
        }
    }
    cout<< "\n";
}

// программа переводит в 2-чную систему счисления 
//максимальное значение которое может вывести это 255
