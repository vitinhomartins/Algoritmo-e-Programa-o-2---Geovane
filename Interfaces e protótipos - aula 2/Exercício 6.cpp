#include <iostream>
#include <ctime>

using namespace std;

int gerarNumeroAleatorio(void);

int main() {
    cout << gerarNumeroAleatorio() << endl;
    return 0;
}

int gerarNumeroAleatorio() {
    int n = 0;
    srand(time(nullptr));
    n = rand() % 100 + 1;
    return n;
}