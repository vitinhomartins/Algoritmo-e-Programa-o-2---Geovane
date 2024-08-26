#include <iostream>

using namespace std;

int fatorial(int b) {

    if(b <= 1) {
        return 0;
    }
    int fat = b;
    b = 1;
    for(int a = fat; a > 0; a--) {
        b = b * a;
    }
    return b;
}

int main () {
    int numb = 0;
    cout << "Digite um numero para obter seu fatorial: ";
    cin >> numb; 
    while(fatorial(numb) == 0) {
        cout << "Digite um numero para obter seu fatorial: ";
        cin >> numb;        
    }  
    cout << "O fatorial eh: " << fatorial(numb) << endl;
    return 0;
}