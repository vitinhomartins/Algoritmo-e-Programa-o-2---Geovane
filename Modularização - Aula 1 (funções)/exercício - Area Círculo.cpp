#include <iostream>
#include <cmath>

using namespace std;

double raio(int a) {
    double area = 0;
    area = pow(a, 2) * M_PI;
    return area;
}

int main() {
    int a = 0;
    cin >> a;
    cout << raio(a) << endl;
}