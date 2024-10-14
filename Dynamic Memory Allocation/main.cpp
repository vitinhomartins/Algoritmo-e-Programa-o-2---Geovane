#include <iostream>

using namespace std;

extern float calcular(float a, char b, float c);
float result = 0;

int main() {
    float a = 0, b = 0; char op = ' ';
    cin >> a >> op >> b;
    result = calcular(a, op, b);  
    cout << result << endl;
}