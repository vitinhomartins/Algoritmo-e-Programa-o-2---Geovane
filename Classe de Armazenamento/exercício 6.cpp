#include <iostream>
using namespace std;
void fun(int y){
    static int x;
    x += y;
    cout << "x = " << x << endl;
    x++;
    cout << "x final: " << x << endl;
}
int main(){
    fun(10);
    fun(20);
    fun(30);
}