#include <stdio.h>
#include <string.h>


int main(){
	int vie = 25;
	while (vie > 20){
		printf("PV : %d \n", vie);
		vie -= 1;
		printf("Vous vous etes fait attaquer\nVous avez perdu un point de vie\nVous n'avez plus que %d points de vie", vie);
	}
	return 0;
}