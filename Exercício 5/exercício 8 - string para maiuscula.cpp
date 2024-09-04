#include <iostream>

using namespace std;

void converte_ai(char *s);

int main() {
    string s;
    getline(cin, s);
    converte_ai(&s[0]);
    cout << s << endl;
    return 0;
}

void converte_ai(char *s) {
    int i = 0;
    while(s[i] != '\0') {
        if(s[i] >= 97 && s[i] <= 122) {
            s[i]-= 32;
        }
        i++;
    }
}