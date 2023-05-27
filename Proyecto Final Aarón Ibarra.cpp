#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <wchar.h>
#include <vector>

using namespace std;

struct valores
{

	char nom[50], clas[100], car[500], des[500], gen[100], con[100];
	int ano, numob, id, comp, stat;
	float preu, iva, pret;
}*tienda;

int cant, j;

void alta();
void modificar();
void baja();
void lista();
void guardar();

int main()
{
	int opci;
	do
	{
		printf("\t***SISTEMA DE TIENDA GAMERS***\n");
		printf("Ingrese el n%cmero de la opci%cn que elegir%c \n",163,162,160);
		printf("1.- Dar de alta los art%cculos \n",161);
		printf("2.- Modificar un art%cculo \n",161);
		printf("3.- Dar de baja un art%cculo \n",161);
		printf("4.- Ver lista de art%cculos \n",161);
		printf("5.- Limpiar pantalla \n");
		printf("6.- Salir \n");
		scanf_s("%d", &opci);

		switch (opci)
		{
		case 1:
			alta();
			return main();
			break;

		case 2:
			modificar();
			return main();
			break;

		case 3:
			baja();
			return main();
			break;

		case 4:
			lista();
			return main();
			break;

		case 5:
			system("cls");
			return main();
			break;

		case 6:
			guardar();
			exit(1);
			return main();
			break;
		}

	} while (opci != 6);
}

void alta()
{
	printf("Ingrese la cantidad de art%cculos a registrar \n", 161);
	scanf_s("%d", &cant);
	tienda = new valores[cant];
	for (int i = 0; i < cant;i++)
	{
		    tienda[i].stat = 1;
			printf("Ingrese un n%cmero del art%cculo original: \n", 163, 161);
			scanf_s("%d", &tienda[i].id);
			while (getchar() != '\n');
			if (tienda[i].id == tienda[j].id && j != i)
			{
				printf("Valor de ID en uso, ingrese un n%cmero del art%cculo original: \n", 163, 161);
				scanf_s("%d", &tienda[i].id);
				while (getchar() != '\n');
			}
		printf("Ingrese el nombre del art%cculo: \n", 161);
		gets_s(tienda[i].nom);
		printf("Ingrese el a%co de lanzamiento del art%cculo: \n", 164, 161);
		scanf_s("%d", &tienda[i].ano);
		while (getchar() != '\n');
		printf("Ingrese la clasificaci%cn de edad del art%cculo: \n", 162, 161);
		gets_s(tienda[i].clas);
		printf("Ingrese las caracter%csticas del art%cculo: \n", 161, 161);
		gets_s(tienda[i].car);
		printf("Ingrese la descripci%cn del art%cculo: \n", 162, 161);
		gets_s(tienda[i].des);
		printf("Ingrese el g%cnero del art%cculo: \n", 130, 161);
		gets_s(tienda[i].gen);
		printf("Ingrese el precio unitario del objeto: \n");
		scanf_s("%f", &tienda[i].preu);
		tienda[i].iva = tienda[i].preu * 0.16;
		tienda[i].pret = tienda[i].preu * 1.16;
		printf("Ingrese la cantidad de art%cculos: \n", 161);
		scanf_s("%d", &tienda[i].numob);
		while (getchar() != '\n');
		printf("Ingrese la consola de la versi%cn del art%cculo: \n", 162, 161);
		gets_s(tienda[i].con);
	}
}

void modificar()
{
	int j, op, opc;
	do
	{
		printf("¿Qu%c registro quiere modificar? \n", 130);
		scanf_s("%d", &j);
		j = j - 1;
		for (int i = j;i == j;i++)
		{
			if (tienda[i].stat == 0)
			{
				printf("Buen intento... Pero no te permitir%c sobreescribir un valor eliminado, te preguntar%c de nuevo",130,130);
				opc = 0;
			}
			else
			{
				opc = 1;
			}
		}
	} while (opc == 0);
	printf("¿Qu%c va a modificar? \n",130);
	printf("1- N%cmero del art%cculo \n", 163, 161);
	printf("2- Nombre del art%cculo \n", 161);
	printf("3- A%co de lanzamiento \n", 164);
	printf("4- Clasificaci%cn del art%cculo \n", 162, 161);
	printf("5- Caracter%csticas del art%cculo \n", 161, 161);
	printf("6- Descripci%cn del art%cculo \n", 162, 161);
	printf("7- G%cneros del art%cculo \n", 130, 161);
	printf("8- Precio del art%cculo \n", 161);
	printf("9- Cantidad de piezas \n");
	printf("10- Consola del art%cculo \n", 161);
	scanf_s("%d", &op);

	switch (opc)
	{
	case 1:
		{
			for (int i = j;i == j; i++)
			{
				printf("Ingrese un n%cmero del art%cculo corregido: \n", 163, 161);
				scanf_s("%d", &tienda[i].id);
				while (getchar() != '\n');
				if (tienda[i].id == tienda[j].id && j != i)
				{
					printf("Valor de ID en uso, ingrese un n%cmero del art%cculo original: \n", 163, 161);
					scanf_s("%d", &tienda[i].id);
					while (getchar() != '\n');
				}
			}
			break;
		}
	case 2:
	{
		for (int i = j;i == j; i++)
		{
			printf("Ingrese el nombre del art%cculo corregido: \n", 161);
			gets_s(tienda[i].nom);
		}
		break;
	}
	case 3:
	{
		for (int i = j;i == j; i++)
		{
			printf("Ingrese el a%co de lanzamiento del art%cculo corregido: \n", 164, 161);
			scanf_s("%d", &tienda[i].ano);
			while (getchar() != '\n');
		}
		break;
	}
	case 4:
	{
		for (int i = j;i == j; i++)
		{
			printf("Ingrese la clasificaci%cn de edad del art%cculo actualizada: \n", 162, 161);
			gets_s(tienda[i].clas);
		}
		break;
	}
	case 5:
	{
		for (int i = j;i == j; i++)
		{
			printf("Ingrese las caracter%csticas del art%cculo actualizadas: \n", 161, 161);
			gets_s(tienda[i].car);
		}
		break;
	}
	case 6:
	{
		for (int i = j;i == j;i++)
		{
			printf("Ingrese la descripci%cn del art%cculo actualizada: \n", 162, 161);
			gets_s(tienda[i].des);
		}
		break;
	}
	case 7:
	{
		for (int i = j;i == j;i++)
		{
			printf("Ingrese de nuevo todos los g%cneros y el o los nuevos g%cneros del art%cculo: \n", 130, 161);
			gets_s(tienda[i].gen);
		}
		break;
	}
	case 8:
	{
		for (int i = j;i == j;i++)
		{
			printf("Ingrese el precio unitario del objeto actualizado: \n");
			scanf_s("%f", &tienda[i].preu);
			tienda[i].iva = tienda[i].preu * 0.16;
			tienda[i].pret = tienda[i].preu * 1.16;
		}
		break;
	}
	case 9:
	{
		for (int i = j;i == j;i++)
		{
			printf("Ingrese la cantidad de art%cculos actualizada: \n", 161);
			scanf_s("%d", &tienda[i].numob);
			while (getchar() != '\n');
		}
		break;
	}
	case 10:
	{
		for (int i = j;i == j;i++)
		{
			printf("Ingrese la consola de la versi%cn del art%cculo: \n", 162, 161);
			gets_s(tienda[i].con);
		}
		break;
	}
	}
}

void baja()
{
	int j;
	printf("¿Cu%cl de los registros desea eliminar de la existencia? \n", 160);
	scanf_s("%d", &j);
	for (int i = j - 1;i == j - 1;i++)
	{
		printf(" El registro %d ese ha ido de sab%ctico, cari%co. . . \n",i, 160,164);
		tienda[i].stat = 0;
	}
}

void lista()
{
	for (int i = 0; i < cant;i++)
	{
		
			if (tienda[i].stat == 0)
			{
				printf("Registro Eliminado \n \n");
			}
			else
			{
				j = i + 1;
				printf("\t ***PRODUCTO %d*** \n \n", j);
				printf("N%cmero de art%cculo: %d \n", 163, 161, tienda[i].id);
				printf("Nombre del art%cculo: %s \n", 161, tienda[i].nom);
				printf("A%co de lanzamiento: %d \n", 164, tienda[i].ano);
				printf("Clasificaci%cn de edad: %s \n", 162, tienda[i].clas);
				printf("Caracter%csticas del art%cculo: %s \n", 161, 161, tienda[i].car);
				printf("Descripci%cn del art%cculo: %s \n", 162, 161, tienda[i].des);
				printf("G%cnero: %s \n", 130, tienda[i].gen);
				printf("Precio unitario: %f \n", tienda[i].preu);
				printf("IVA: %f \n", tienda[i].iva);
				printf("Precio total: %f \n", tienda[i].pret);
				printf("Cantidad de art%cculos: %d \n", 161, tienda[i].numob);
				printf("Consola: %s \n \n \n", tienda[i].con);
			}
	}
}

void guardar()
{
	ofstream archivo;
	string name;
	int txt;
	string text;

	name = "Productos.txt";

	archivo.open(name.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "No se guard%c el archivo", 162;
		exit(1);
	}
	
	archivo << "ID" << "\t" << "\t";
	archivo << "NOMBRE" << "\t" << "\t";
	archivo << "AÑO" << "\t" << "\t";
	archivo << "CLASIFICACIÓN" << "\t" << "\t";
	archivo << "CARACTERÍSTICAS" << "\t" << "\t";
	archivo << "DESCRIPCIÓN" << "\t" << "\t";
	archivo << "GÉNERO" << "\t" << "\t";
	archivo << "PRECIO UNITARIO" << "\t" << "\t";
	archivo << "IVA" << "\t" << "\t";
	archivo << "PRECIO TOTAL" << "\t" << "\t";
	archivo << "NÚMERO DE OBJETO" << "\t" << "\t";
	archivo << "CONSOLA" << "\n";

	for (int i = 0;i < cant;i++)
	{
		if (tienda[i].stat = 0)
		{
			text = "Registro Eliminado";
			txt = i + 1;
			archivo << text << txt << "\n";
		}
		else
		{
			txt = tienda[i].id;
			archivo << tienda[i].id << "\t";
			text = tienda[i].nom;
			archivo << tienda[i].nom << "\t";
			txt = tienda[i].ano;
			archivo << tienda[i].ano << "\t";
			text = tienda[i].clas;
			archivo << tienda[i].clas << "\t";
			text = tienda[i].car;
			archivo << tienda[i].car << "\t";
			text = tienda[i].des;
			archivo << tienda[i].des << "\t";
			text = tienda[i].gen;
			archivo << tienda[i].gen << "\t";
			txt = tienda[i].preu;
			archivo << tienda[i].preu << "\t";
			txt = tienda[i].iva;
			archivo << tienda[i].iva << "\t";
			txt = tienda[i].pret;
			archivo << tienda[i].pret << "\t";
			txt = tienda[i].numob;
			archivo << tienda[i].numob << "\t";
			text = tienda[i].con;
			archivo << tienda[i].con << "\n";
		}
	}
	archivo.close();
}