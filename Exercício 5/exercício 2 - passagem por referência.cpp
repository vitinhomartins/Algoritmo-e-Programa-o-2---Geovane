#include <iostream>

using namespace std;

void resultado(int *a, int *b, int *soma);

int main() {
    int soma = 0, a = 0, b = 0;
    cin >> a >> b;
    resultado(&a, &b, &soma);
    cout << soma << endl;
    return 0;
}

void resultado(int *a, int *b, int *soma) {
    *soma = *a + * b;
}