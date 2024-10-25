#include <iostream>
using namespace std;


int fib (int n){
    if (n == 1 || n == 2) {
        return n - 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}


int main() {
    int num = 0, numfib;
    cin >> num;
    numfib = fib(num);
    cout << "O numero que esta na " << num << "° posiçao da sequencia Fibonacci é " << numfib << endl;
    return 0;
}
