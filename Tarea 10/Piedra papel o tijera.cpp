#include<stdio.h>

int main(){
	
	int p1,p2;
	
	printf("Bienvenido al mejor juego, revive tu infancia");
	printf("\n1.Piedra");
	printf("\n2.Papel");
	printf("\n3.Tijera");
	printf("\nElija sabiamente \n"); 
	scanf("%d",&p1);
	printf("\nElija sabiamente \n");
	scanf("%d",&p2);
	
	if ((p1==1 && p2==1)||(p1==2 && p2==2)||(p1==3 && p2==3)){
		
		printf("Empate");
	}
	
	if ((p1==1 && p2==2)||(p1==2 && p2==3)||(p1==3 && p2==1)){
		
		printf("El jugador 2 es lo maximo");
	}
	
	if ((p1==1 && p2==3)||(p1==2 && p2==1)||(p1==3 && p2==2)){
		
		printf("El jugador 1 es lo maximo");
	}
	
}
 
