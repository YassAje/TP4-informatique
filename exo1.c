#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char *argv[]){

	int i=0,pas;
	int j;
	double *parametre;
	double *tableaux;
	double *tableauy;
	double deltax;
	
	                    /*éliminer les cas indésirables*/
	
	if(argc < 5){
		printf("Le nombre de parametre insuffie\n");
		return(0);
	}

	parametre = (double *) malloc ((argc)*sizeof(double));

	for(i=0;i<(argc-1);i++){
	
		*(parametre+i) = (double) atof(argv[i+1]); 
	/*transformer les parametre dans format double et les mettre dans le tableau parametre*/
		if(i==2) {pas = atoi(argv[i+1]);}

	}
	if(pas<2){
		printf("Pas possible de faire inferieur 2 pas\n");
		return(0);
	}

	tableaux = (double *) malloc (pas*sizeof(double));
	tableauy = (double *) malloc (pas*sizeof(double));

	deltax = (double) ((*(parametre+1) - parametre[0]) / (pas-1));
	               /*creation de tableau de x*/
	for(i=0;i<pas;i++){
		*(tableaux+i) = parametre[0] + deltax*i ;
	}
	                  /*calculer le polynome*/
	for(i=0;i<pas;i++){
		for(j=0;j<(argc-4);j++){
		*(tableauy+i) += pow(tableaux[i],j) * parametre[j+3];
                     

		}
	printf("%lf,%lf \n",tableaux[i],tableauy[i]);

	}
	
	

	



return(EXIT_SUCCESS);

}
/*
la commande "./exo1 -1 2 10 0 0 0 1 >> resultatExo1.csv" donne le fichier resultatExo1.csv contenant les résultats de x allant de -1 à 2 en 10 pas de la fonction X^3
*/
