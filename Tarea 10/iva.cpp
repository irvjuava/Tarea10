#include <stdio.h>


int main(int argc, char** argv) {
	float total=0;
	float iva=0;
	float siniva=0;
	
		printf ("Inserte el precio\n");
		scanf ("%f", &total);
		iva=total*0.16;
		siniva= total-iva;
		printf ("El total es: %.2f \n ", total);
		printf ("Precio sin iva: %.2f \n", siniva);
		printf ("Total del iva: %.2f", iva); 
		

	
}
