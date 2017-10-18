#include <stdlib.h>

int main(int argc, char **argv)
{
	int valor, contador, peso;
    
    valor=0;
    contador=10;
    peso=20;
    
    if (valor>=0)
        contador = 100;
        
    if (valor>0)
    {
        contador = contador*peso;
        valor = valor+contador;
    }    
    
   system ("pause");
	return 0;
}
