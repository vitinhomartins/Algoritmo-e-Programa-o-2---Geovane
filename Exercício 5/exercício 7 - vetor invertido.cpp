#include <iostream>

using namespace std;

void converte_ai(int *v, int tamanho);

int main() {
    int x = 0, i = 0;
    cin >> x;
    int v[x + 1];
    i = x;
    while(i--) {
        cin >> v[i];
    }
    converte_ai(v, x);
    return 0;
}

void converte_ai(int *v, int tamanho){
    for(int i = 0; i < tamanho; i++) {
        v[tamanho + 1] = v[i];
        
    }
}
