#include <iostream>

using namespace std;

typedef struct {
    float x;
    float y;
    float z;
}vetores; 

void somaVetores(vetores *v1, vetores *v2, vetores *v3);

int main() {
    vetores v[3];
    cout << "Digite as coordenadas x y z do primeiro vetor: ";
    cin >> v[0].x >> v[0].y >> v[0].z;
    cout << "Digite as coordenadas x y z do segundo vetor: ";
    cin >> v[1].x >> v[1].y >> v[1].z;
    somaVetores(&v[0], &v[1], &v[2]);
    cout << "As coordenadas do vetor resultante da soma sao:" << endl;
    cout << "x = " << v[2].x << " y = " << v[2].y << " z = " << v[2].z << endl;
}

void somaVetores(vetores *v1, vetores *v2, vetores *v3) {
    v3->x = v1->x + v2->x;
    v3->y = v1->y + v2->y;
    v3->z = v1->z + v2->z;
}