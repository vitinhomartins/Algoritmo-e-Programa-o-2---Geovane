#include <iostream>

using namespace std;

extern float result; 

float calcular(float a, char b, float c) {
    switch(b){
        case '+':
            result = a + c;
            break;
        case '-':
            result = a - c;
            break;
        case '/':
            result = a / c;
            break;
        case '*':
            result = a * c;
    }
    return result;
}