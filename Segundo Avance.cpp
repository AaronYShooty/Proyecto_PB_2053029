#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <wchar.h>

using namespace std;

struct valores
{
	char des[400], gen[100], clas[100], con[100];
	int numob, id;
	float preu, pret;
};

int main()
{
	valores tienda[3];
	int opci;
	
	do
	{
		printf("\t***SISTEMA DE TIENDA GAMER´S***\n");
		printf("Ingrese el numero de la opcion que elegira \n");
		printf("1.- Dar de alta los articulos \n");
		printf("2.- Modificar un articulo \n");
		printf("3.- Dar de baja un articulo \n");
		printf("4.- Ver lista de articulos \n");
		printf("5.- Limpiar pantalla \n");
		printf("6.- Salir \n");
		scanf_s("%d", &opci);

		switch (opci)
		{
		case 1:

			for (int i = 1; i <= 3;i++)
			{
				printf("Ingrese el ID del articulo: \n");
				scanf_s("%d", &tienda[i].id);
				cin.ignore();
				printf("Ingrese la cantidad de articulos: \n");
				scanf_s("%d", &tienda[i].numob);
				cin.ignore();
				printf("Ingrese la descripcion del articulo: \n");
				gets_s(tienda[i].des);
				printf("Ingrese el genero del articulo: \n");
				gets_s(tienda[i].gen);
				printf("Ingrese la clasificacion de edad del articulo: \n");
				gets_s(tienda[i].clas);
				printf("Ingrese la consola de la version del articulo: \n");
				gets_s(tienda[i].con);
				printf("Ingrese el precio unitario del objeto: \n");
				scanf_s("%f", &tienda[i].preu);
			}
			break;

		case 2:
			printf("Apartado en trabajo");
			break;

		case 3:
			printf("Apartado en trabajo");
			break;

		case 4:
			for (int i = 0; i < 3;i++)
			{
				printf("ID de Objeto: %d \n", tienda[i].id);
				printf("Cantidad de articulos: %d \n", tienda[i].numob);
				printf("Descripcion del articulo: %s \n", tienda[i].des);
				printf("Genero: %s \n", tienda[i].gen);
				printf("Clasificacion de edad: %s \n", tienda[i].clas);
				printf("Consola: %s \n", tienda[i].con);
				printf("Precio unitario: %f \n", tienda[i].preu);
			}
			break;

		case 5:
			system("cls");
			break;

		case 6:
			exit(1);
			break;
		}

	} while (opci != 6);
}