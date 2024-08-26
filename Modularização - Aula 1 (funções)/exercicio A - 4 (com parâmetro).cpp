#include <iostream>
#include <cmath>

using namespace std;

float raio(int a) {
    float v = 0.0;
    v = (4 * 3.141592 * (pow(a, 2)))/3;
    return v;
}

int main () {
    int r = 0;
    cout << "Informe o raio da esfera!" << endl;
    cin >> r;
    cout << raio(r) << endl;   
    return 0;
}