#include <stdio.h>

int main(void)
{
	int a,b; //initialisation des variables
	printf("donnez a:\n"); //Afficher un message a l'utilisateur pour entrer a
	scanf("%d", &a); // enregistrer le nombre a
	printf("donnez b:\n"); //afficher un message a l'utilisateur pour entrer b
	scanf("%d", &b);// enregistrer le nombre b
	printf("la somme est: %d\n", a+b); // faire l'equation a+b et afficher la somme
	return 0;
}
