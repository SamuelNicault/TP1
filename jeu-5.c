#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int rand_a_b(int a, int b){
			return rand()%(b-a) +a;
}

int main(){
	float vie_m = 25;
	float vie_j = 30;
	int tour = 100;
	int a = 1;
	int b = 2;
	printf("PV monstre: %f \n", vie_m);
	for (tour=100 ; tour>=0 ; tour--){
		int choix_j;
		int choix_m = rand_a_b(1,2);
		
		scanf("%d", &choix_j);
		if (choix_j == 1){
			if (choix_m == 1){
				vie_m -= 1;
				vie_j -= 1;
				
				if (vie_j == 0){
					printf("YOU DIED\n");
					break;
				}
				
				if (vie_m!=0){
					printf("Vous avez attaque\nLe monstre a perdu un point de vie\nIl n'a plus que %f points de vie\n", vie_m);
					printf("Le monstre contre-attaque\nVous perdez un point de vie\nIl vous reste %f PV\n", vie_j);
				}
				
				else{
					printf("Le monstre est mort");
					break;
				}
			}
			else if (choix_m != 1){
				vie_m -= 0.25;
				vie_j -= 0;
				
				if (vie_j == 0)
				{
					printf("YOU DIED\n");
					break;
				}
				
				if (vie_m!=0){
					printf("Vous avez attaque\nLe monstre a perdu quart de point de vie\nIl n'a plus que %f points de vie\n", vie_m);
				}
				
				else{
					printf("Le monstre est mort");
					break;
				}
			}
			
		else if (choix_j != 1){
			if (choix_m == 1){
				vie_m -= 0;
				vie_j -= 0.25;
				
				if (vie_j == 0){
					printf("YOU DIED\n");
					break;
				}
				
				if (vie_m!=0){
					printf("Vous n'avez pas attaque\nLe monstre n'a perdu aucun point de vie\nIl a encore %f points de vie\n", vie_m);
					printf("Le monstre attaque\nVous vous etes protege, vous perdez un quart de point de vie\nIl vous reste %f PV\n", vie_j);
				}
				
				else{
					printf("Le monstre est mort");
					break;
				}
			}
			else if (choix_m != 1){
				vie_m -= 0;
				vie_j -= 0;
				
				if (vie_j == 0){
					printf("YOU DIED\n");
					break;
				}
				
				if (vie_m!=0){
					printf("Vous n'avez pas attaque\nLe monstre n'a perdu aucun point de vie\nIl a encore %f points de vie\n", vie_m);
					printf("Le monstre se protege \nVous ne perdez aucun point de vie\nVous avez toujours %f PV\n", vie_j);
				}
				
				else{
					printf("Le monstre est mort");
					break;
				}
			}
		}
	}
	return 0;
}
}