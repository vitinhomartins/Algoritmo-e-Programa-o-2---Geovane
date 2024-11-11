#include <iostream> 

using namespace std;

void selection(int *v, int n) {
    int i = 0, j = 0, maior = 0;
    for(i = 0; i < n - 1; i++) {
        maior = i;
        for(j = i + 1; j < n; j++) {
            if(v[j] > v[maior]) {
                maior = j;
            }
        }
        if(v[maior] != v[i]) {
            int aux = v[maior];
            v[maior] = v[i];
            v[i] = aux;
        }
    }
}

int main() {
    int v[5] = {7, 2, 5, 4, 9};
    selection(v, 5);
    for(int i = 0; i <5; i++) {
        cout << v[i] << " ";
    }
    return 0;
}