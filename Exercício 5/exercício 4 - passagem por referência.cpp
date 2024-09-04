#include <iostream>

using namespace std;

void incrementador(int *a);

int main() {
    int numb = 0;
    cin >> numb;
    incrementador(&numb);
    cout << numb << endl;
    return 0;
}

void incrementador(int *a) {
    *a+= 10;
}