#include <iostream>
#include <vector>

using namespace std;

#define ARR_SIZE 15

int main() {

    int arr[ARR_SIZE][ARR_SIZE] = {0};

    int n = 0;
    int max_elem = 0;
    int max_elem_i, max_elem_j;

    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 8 - i; j++) {

            n = n + 1;
            arr[i][j] = n;
            if (n > max_elem) {
                max_elem = n;
                max_elem_i = i;
                max_elem_j = j;

            }

        }
    }
    
    for (int i = 0; i <= ARR_SIZE - 1; i++) {
        for (int j = 0; j <= ARR_SIZE - 1; j++) {

            cout << arr[i][j] << " ";


        }

        cout << endl;
   
    }
    cout << "max_element ==  "<< max_elem <<
         "   indexs [ " << max_elem_i << " , " << max_elem_j << " ]" << "\n";

    return 0;
}

//  N увеличивается на каждой итерации. 
//  Значит Максимум будет на последней итерации. 
//  А индексы на последней итерации это [ 7 1 ]
