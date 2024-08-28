#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
    float *fp = NULL, numero1 = 7.3, numero2 = 0.0;
    fp = &numero1;
    cout << *fp << endl;
    numero2 = *fp;
    cout << numero2 << endl;
    cout << &numero1 << endl;
    cout << fp << endl;  
    // o endereço apresentado é o mesmo de numero1.    
    return 0; 
}
