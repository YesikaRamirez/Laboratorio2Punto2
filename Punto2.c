/* Integrantes: Ashley Paola Romero Restrepo, Yesika Biviana Ramirez Duran*/
/* Alse grupo 5*/
/* Profesor: MARCO ANDRES ORTIZ NIÑO*/
/* Laboratorio 2 parte 2*/

 

# include <stdio.h>
# include <string.h>

# define longi_1 10
# define longi_2 10

void Escribir();
void Comparar();
void Mostrar();
void Concatenar ();
void Longitud ();
void Suma();

int main(void)
{
	int opc;
	char palabra1[longi_1], palabra2[longi_2];
	/*char p1[10]=0;
	char p2[10]=0;
	char frase;
	*/
	
	do
	{
	printf(" Menu Principal\n");
	printf(" 1- Ingresar palabras \n");
	printf(" 2- Comparar palabras \n");
	printf(" 3- Mostrar palabras al reves \n");
	printf(" 4- Concatenar palabras \n");
	printf(" 5- longitud de cada palabra \n");
	printf(" 6- Suma decimal de los caracteres de cada palabra\n");
	printf(" 7- salir \n");
	
	do
	{
	printf(" ¿Que opcion deceas hacer?\n");
	scanf("%d",&opc);
	} 
	
	while (opc< 1|| opc> 7);  /* || es o , solo puede ser entre 1 y 5*/
	
	switch(opc)
	{
		case 1 : 
					Escribir(palabra1, palabra2);
					
					break;
					   
		case 2 : 
					//Comparar(&p1, &p2);
					break;
		case 3 : 
					//Mostrar al reves(palabra1, palabra2);
					break;
		case 4 : 
					//Concatenar(&p1, &p2, &p3);
					break;
		case 5 : 
					//Longitud(&p1, &p2);
					break;
		case 6 : 
					//Suma();
					break;
		}
	
	}while (opc != 7); // no sea igual a 7
	
	return 0;
}

// Ingresar palabra//

void Escribir( char *pa1, char *pa2)
{	
	printf ("Ingresa la primera palabra:\n\n");
	fgets(pa1, longi_1, stdin);
	pa1[strlen(pa1)-1] = '\0';
	printf ("Ingresa la segunda palabra:\n\n");
	fgets(pa2, longi_2, stdin);
	pa1[strlen(pa1)-1] = '\0';
}

//Comparar palabra//

void Comparar(char *pa1, char *pa2)

{if (strcmp("pa1","pa2")==0)
	{printf("Las palabras son iguales \n\n"); }
	else 
	{printf("Las palabras son distintas\n\n");}
}

//Mostrar palabra al reves//

//void Mostrar palabras al reves();


//Concatenar Palabras //

void Concatenar(const char *pa1, const char *pa2, char *pa3)
{
	strcpy (pa3,"");
	strcat (pa3, pa1);
	strcat (pa3, "");
	strcat (pa3, pa2);
	
	printf("Las palabras concatenadas son : %s\n",pa3);
}

// Longitud de cada palabra//
void Longitud(char *pa1,char *pa2)
{
	int longitud = 0;
	char *p1, *p2;
	
	p1 = pa1;
	p2 = pa2;
	
	while (*p1 != '\0')
	{
		longitud ++;
		p1++;
		printf("La longitud de la palabra %s es %i\n",pa1,longitud);
	}
	while (*p2 != '\0')
	{
		longitud ++;
		p2++;
		printf("La longitud de la palabra %s es %i\n",pa2,longitud);
	}
}

//suma decimal de los caracteres
void Suma()
{printf ("Suma decimal de los caracteres de cada palabra\n\n");}