#include <iostream>

using namespace std;

void subtraia(int a);

int main() {
    int numb = 0;
    cin >> numb;
    subtraia(numb);
    return 0;
}

void subtraia(int a) {
    a-= 5;
    cout << a << endl;
}