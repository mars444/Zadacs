#include <iostream>
#include <vector>

using namespace std;


int main() {

   int a[] = {10,9,8,7,6,5,4,3,2,1};
   int sz = 10;
   int k = 0;
    
    for (int i = 0; i <= sz; i++) {
        for (int j = i; j > 0; j--) {

            if(a[j] < a[j - i]) {
                swap(a[j] , a[j - 1]);
            }

            k++;
            

        }
    cout << " pri i ==" << i << "  ";
    cout << "vhojdeniy uje  " << k  << endl;

    }   

    cout<< "itogo summa vseh vhojdeniy " << k << endl;
 
    
  
    return 0;
}

// зайдет во внутренний цикл 55 раз


