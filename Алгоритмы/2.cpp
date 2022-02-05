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
// с каждым инкрементом i будет заходить в цикл  i  раз
// получаем при
// i = 0   0 раз 
// i = 1   1 раз 
// i = 2   2 раз 
// i = 3   3 раз 
// i = 4   4 раз 
// i = 5   5 раз 
// i = 7   7 раз 
// i = 8   8 раз 
// i = 9   9 раз 
// i = 10  10 раз 
// итого зайдет во внутренний цикл 55 раз


