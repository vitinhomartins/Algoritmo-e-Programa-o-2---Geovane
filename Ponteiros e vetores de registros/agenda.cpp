#include <iostream>

#define MAX_AGENDAS 1000

using namespace std;

typedef struct {
    int hora;
    int minuto;
    int dia;
    int mes;
    int ano;
    string cmp;
} agenda;

int agendarAlgo(agenda *ag, string s, int hora, int minuto, int dia, int mes, int ano);
void mostrarCompromissos(agenda *ag);

int main() {
    string motivo = " "; char tried = 's'; int min=0, hora=0; agenda g[MAX_AGENDAS]; int dia=0, mes=0, ano=0, compro = 0;
    do {
        cout << "Digite o compromisso, seguido do horario e data: " << endl;
        getline(cin, motivo);
        cin >> hora >> min >> dia >> mes >> ano;
        compro+= agendarAlgo(&g[compro], motivo, hora, min, dia, mes, ano); 
        cout << "Deseja continuar agendando? s/n: ";
        cin >> tried;
    } while(tried == 's');
    cout << "Compromissos agendados: " << endl;
    int i = 0;
    while(i != compro) {
        mostrarCompromissos(&g[i]);
        i++;
    }
    return 0;
}

int agendarAlgo(agenda *ag, string s, int hora, int minuto, int dia, int mes, int ano) {
    ag->ano = ano;
    ag->mes = mes; 
    ag->dia=dia;
    ag->hora=hora;
    ag->minuto= minuto;
    ag->cmp=s;
    cout << "Compromisso agendado com sucesso!" << endl;   
    return 1;
}

void mostrarCompromissos(agenda *ag) {
    cout << ag->cmp << " " << "Data: " << ag->dia << "/" << ag->mes << "/" << ag->ano << " horario: " << ag->hora << ":" << ag->minuto << endl;   
}