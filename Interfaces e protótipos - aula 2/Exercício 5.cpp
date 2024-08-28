#include <iostream>

using namespace std;

double calcularAreaRetangulo(double comprimento, double largura);

int main() {
    double largura = 0, comprimento = 0;
    cin >> largura >> comprimento;
    cout << calcularAreaRetangulo(comprimento, largura) << endl;
    return 0; 
}

double calcularAreaRetangulo(double comprimento, double largura) {
    double area = 0.0;
    area = comprimento * largura;
    return area;
}