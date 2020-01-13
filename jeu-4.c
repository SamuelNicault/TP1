#include <stdio.h>
#include <string.h>


int main(){
	float vie_m = 25;
	float vie_j = 30;
	int tour = 25;
	printf("PV monstre: %f \n", vie_m);
	for (tour=25 ; tour>=0 ; tour--){
		int choix;
		scanf("%f", &choix);
		if (choix == 1){
			vie_m -= 1;
			vie_j -= 1;
			if (vie_j == 0)
			{
				break;
			}
			if (vie_m!=0){
				printf("Vous avez attaque\nLe monstre a perdu un point de vie_m\nIl n'a plus que %f points de vie\n", vie_m);
				printf("Le monstre contre-attaque\nVous perdez un point de vie\nIl vous reste %f PV\n", vie_j);
			}
			else{
				printf("Le monstre est mort");
				break;
			}
		}
		else if (choix !=1){
			vie_m -= 0;
			vie_j = vie_j-0.25;
			if (vie_j == 0)
			{
				break;
			}
			if (vie_m!=0){
				printf("Vous avez attaque\nLe monstre a perdu un point de vie_m\nIl n'a plus que %f points de vie\n", vie_m);
				printf("Le monstre contre-attaque\nVous perdez un point de vie\nIl vous reste %f PV\n", vie_j);
			}
			else{
				printf("Le monstre est mort");
				break;
			}
		}
	}
	return 0;
}