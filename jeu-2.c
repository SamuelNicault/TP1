#include <stdio.h>
#include <string.h>


int main(){
	int vie = 25;
	for (vie=25 ; vie>=0 ; vie--){
		printf("PV : %d \n", vie);
		vie -= 1;
		if (vie!=0){
			printf("Vous avez attaqué\nLe monstre à perdu un point de vie\nIl n'a plus que %d points de vie\n", vie);
			
		}
		else{
			printf("Le monstre est mort")
		}
	}
	return 0;
}