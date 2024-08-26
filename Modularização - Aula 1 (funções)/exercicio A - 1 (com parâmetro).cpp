#include <iostream>

using namespace std;

int  multiplo(int a) {

    if(a % 4 == 0) {
        return 1;
    } else {
        return 0;
    }     
}

int main () {
    int numb = 0;
    cin >> numb;
    if(multiplo(numb) == 0) {
        cout << "Nao eh multiplo!" << endl;
    } else {
        cout << "Eh multiplo!" << endl;
    }
    return 0;
}