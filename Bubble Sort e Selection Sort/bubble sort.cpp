#include <iostream> 

using namespace std;

void bubble_sort(int *v, int n) {
    if(n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            int aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
    } 
    bubble_sort(v, n - 1);   
}

int main() {
    int v[5] = {7, 2, 5, 4, 9};
    bubble_sort(v, 5);
    for(int i = 0; i <5; i++) {
        cout << v[i] << " ";
    }
    return 0;
}