#include <iostream>
#include <cmath>

using namespace std;

void raio() {
    int r = 0; float v = 0.0;
    cout << "Informe o raio da esfera!" << endl;
    cin >> r;
    v = (4 * 3.141592 * (pow(r, 2)))/3;
    cout << v << endl;
}

int main () {
    raio();   
    return 0;
}