#include <stdio.h>

using namespace std;

void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);

int main(){
	int x, num;
 
	bom_dia();
	printf("%d", aleat());
	x = aleat(); 	 
	num += dobro(x);
	if (dobro(x) > dobro(aleat())){
    		mostra_dobro(x);
	}
	return 0;
}