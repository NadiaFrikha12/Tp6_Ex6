//Ecrire un programme C permettant de simuler le fonctionnement de la fonction atoi
//permettant de retourner la valeur numérique représentée par CH en utilisant le mécanisme
//de pointeurs.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char ch1[10];
	int signe=1; //le signe de la valeur numérique
	char* p1;
	int resultat=0 ;
	
	//saisie
	printf("donner la chaine a convertir: ");
	gets(ch1);
	p1=ch1; // le pointeur p pointe vers le premier caractere de ch1
	
	//ignorer les espaces 
	while(isspace(*p1)){ p1++;}
	
	//chercher le signe
	if (*p1 == '+'){ signe =1; p1++;}
	if (*p1 == '-'){ signe =-1; p1++;}
	
	//conversion
	while((*p1>='0')&&(*p1<='9')){
		resultat= resultat*10 + (*p1 - '0') ;
		p1++;
	}
	
	//affichage
	printf("le resultat entier : %d",resultat*signe);
	
	return 0;
}
