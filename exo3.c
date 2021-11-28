#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "messages.h"

typedef struct{
	int annee;
	int mois;
	int jour;
	int heure;
	float temp;
} temp_marque_date; 


int main(int argc,char *argv[]){

	
	char memory[256];

	int moy_temp_ans;

	int j;
	int i;
	int somme_temp_ans[7];

	int longeur_data=8;
	int nombre_data;

	
	temp_marque_date *data;
	
	

	FILE *fp;
	
	data = (temp_marque_date *) malloc ((longeur_data)*sizeof(temp_marque_date));


	if(argc!=2){
		fprintf(stderr,MSG_INFO_USAGE,argv[0]);
		return(-1);
	}

	fp= fopen(argv[1],"r");

	printf(MSG_INFO_USAGE,argv[1]);
	if(fp==NULL){
		printf(MSG_ERR_OPEN,argv[1]);
		perror("Erreur c'est ");
		return(-1);
	}



	nombre_data = 0;
	while(fscanf(fp,"%s",memory)!=EOF) {
	/*fscanf lire chaque ligne et sarret quand il y a \n*/
	memory[4]=0;data[nombre_data].annee = atoi(memory);
	memory[7]=0;data[nombre_data].mois = atoi(memory+5);
	memory[10]=0;data[nombre_data].jour = atoi(memory+8);
	memory[13]=0;data[nombre_data].heure = atoi(memory+11);
	data[nombre_data].temp = atoi(memory+26);
	
	nombre_data++;
	
	if(nombre_data==longeur_data){
		longeur_data+=8;
		data = (temp_marque_date *) realloc (data,(longeur_data)*sizeof(temp_marque_date));
		
	}


	}
	fclose(fp);
 

	for(j=0;j<8;j++){
		for(i=0;i<(365*8);i++){
			somme_temp_ans[j]+=data[i].temp;



}
moy_temp_ans += somme_temp_ans[j];

printf("%d\n",moy_temp_ans);


		}	
	

	

return(EXIT_SUCCESS);

}
/*
zone de réponse
*/
