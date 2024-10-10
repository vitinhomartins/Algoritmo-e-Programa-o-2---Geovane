#include <iostream>

using namespace std;

void forced_loop(int a) {
    while(a != 100) {
        a++;
    }
}

int main() {
    register int i = 0;
    forced_loop(i);
    cout << i << endl;   
    return 0;
}