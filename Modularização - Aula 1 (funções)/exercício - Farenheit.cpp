#include <iostream>
#include <cmath>

using namespace std;

int farenheit(int celcius) {
    int f = 0;
    f = (celcius * 1.8) + 32;
    return f;
}

int main() {
    int a = 0;
    cin >> a;
    cout << farenheit(a) << endl;
}