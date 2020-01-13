#include <stdio.h>
#include <string.h>


int main(){
	int vie_m = 25;
	int vie_j = 30;
	for (vie_m=25 ; vie_m>=0 ; vie_m--){
		printf("PV : %d \n", vie_m);
		vie_m -= 1;
		vie_j -= 1;
		if (vie_j == 0)
		{
			return 0
		}
		if (vie_m!=0){
			printf("Vous avez attaque\nLe monstre à perdu un point de vie_m\nIl n'a plus que %d points de vie_m\n", vie_m);
			printf("Le monstre contre-attaque\nVous perdez un point de vie\nIl vous reste %d PV", vie_j);
		}
		else{
			printf("Le monstre est mort")
		}
	}
	return 0;
}