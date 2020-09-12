#include <stdio.h>
#include <stdlib.h>

// FRANCO GALVAN, 1°F

/*1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir*/
	
	int SumarNumeros(int primerNumero, int segundoNumero);
	int RestarNumeros(int primerNumero, int segundoNumero);
	int MultiplicarNumeros(int primerNumero, int segundoNumero);
	float dividirNumeros(int primerNumero, int segundoNumero);

	void menuDeOpciones(void);

int main(int argc, char** argv) 
{
	menuDeOpciones();
}  

void menuDeOpciones(void)
{
	int opcion;
	int primerNumero;
	int segundoNumero;
	int suma;
	int resta;
	int multiplicacion;
	float division;
	int factorial;
	int i;
   
   do
   {
       printf("--------------------------------");
	   printf("\n1. Ingresar primer operando \n2. Ingresar segundo operando \n3. Mostrar resultados \n4. Salir\n");
       printf("\nElija una opcion: ");
       scanf("%d", &opcion);

       switch(opcion)
       {
            case 1:
                printf("\nIngrese el primer numero: ");
                scanf("%d", &primerNumero);
                
            break;
            case 2:
                printf("\nIngrese el segundo numero: ");
                scanf("%d", &segundoNumero);
                
            break;
            case 3:
                suma = SumarNumeros(primerNumero, segundoNumero);
			    printf("El resultado de %d + %d es: %d\n", primerNumero, segundoNumero,suma);
			    resta = RestarNumeros(primerNumero, segundoNumero);
			    printf("El resultado de %d - %d es: %d\n", primerNumero, segundoNumero, resta);
			    multiplicacion = MultiplicarNumeros(primerNumero, segundoNumero);
			    printf("El resultado de %d * %d es: %d\n", primerNumero, segundoNumero, multiplicacion);
				if(segundoNumero!=0)
				{
					division = dividirNumeros(primerNumero, segundoNumero);
					printf("El resultado de %d / %d es: %.2f\n", primerNumero, segundoNumero, division);
				} 
					else 
				{
					printf("No se puede dividir por 0\n");
					printf("Por favor, ingrese un divisor valido\n");
				}
            break;
            case 4:
            	printf("\nSalir ");
       }

   }while(opcion!=4);

}



int SumarNumeros(int primerNumero, int segundoNumero)
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

int RestarNumeros(int primerNumero, int segundoNumero)
{
    int resta;
    resta = primerNumero - segundoNumero;
    return resta;
}

int MultiplicarNumeros(int primerNumero, int segundoNumero)
{
    int multiplicacion;
    multiplicacion = primerNumero * segundoNumero;
    return multiplicacion;
}

float dividirNumeros(int primerNumero, int segundoNumero)
{
    float division;
	division = (float)primerNumero / (float)segundoNumero;
	return division;
}
