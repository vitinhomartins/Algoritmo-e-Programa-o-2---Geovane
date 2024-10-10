#include <iostream>

using namespace std;

int main(){
    int v[10] = {0, 1, 2, 3, 4, 5, 6, 8, 9, 10};
    int *p = &v[0], i = 0;
    while(i != (sizeof(v))/4) {
        cout << *p << endl;
        p++;
        i++;
    }    
}