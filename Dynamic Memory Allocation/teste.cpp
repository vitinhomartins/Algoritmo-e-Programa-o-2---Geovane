#include <iostream>

using namespace std;

int main() {
    int x = 0, *v = NULL; 
    cin >> x;
    if(!(v = new(nothrow) int[x])){
        cout << "Sem sucesso para alocação!" << endl;
        return -1;
    }
    for(int i = 0; i < x; i++) {
        v[i]*=2;
    }
    for(int i = 0; i < x; i++) {
        cout << 
    }    
    return 0;
}