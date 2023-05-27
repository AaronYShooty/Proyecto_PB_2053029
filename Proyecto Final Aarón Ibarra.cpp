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
	int ano, numob, id, comp;
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
			if (tienda[i].id == 0)
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
	int j,k;
	printf("¿Cu%cl de los registros desea eliminar de la existencia? \n", 160);
	scanf_s("%d", &j);
	k = j;
	j = j - 1;
	for (int i = j;i == j;i++)
	{
		printf(" El registro %d ese ha ido de sab%ctico, cari%co. . . \n",k, 160,164);
		tienda[j].id = 0;
	}
}

void lista()
{
	for (int i = 0; i < cant;i++)
	{
		if (tienda[i].id = 0)
		{
			printf("Registro Eliminado");
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
	ofstream datos;
	string name;
	int txt;
	string text;

	name = "Productos.txt";

	datos.open(name.c_str(), ios::out);

	if (datos.fail())
	{
		cout << "No se guard%c el archivo", 162;
		exit(1);
	}
	
	datos << "ID" << "\t";
	datos << "NOMBRE" << "\t";
	datos << "AÑO" << "\t";
	datos << "CLASIFICACIÓN" << "\t";
	datos << "CARACTERÍSTICAS" << "\t";
	datos << "DESCRIPCIÓN" << "\t";
	datos << "GÉNERO" << "\t";
	datos << "PRECIO UNITARIO" << "\t";
	datos << "IVA" << "\t";
	datos << "PRECIO TOTAL" << "\t";
	datos << "NÚMERO DE OBJETO" << "\t";
	datos << "CONSOLA" << "\t" << "\n";

	for (int i = 0;i < cant;i++)
	{
		if (tienda[i].id = 0)
		{
			text = "Registro Eliminado";
			txt = i;
			datos << text << txt << "\n";
		}
		else
		{
			txt = tienda[i].id;
			datos << tienda[i].id << "\t" << "\t";
			text = tienda[i].nom;
			datos << tienda[i].nom << "\t" << "\t";
			txt = tienda[i].ano;
			datos << tienda[i].ano << "\t" << "\t";
			text = tienda[i].clas;
			datos << tienda[i].clas << "\t" << "\t";
			text = tienda[i].car;
			datos << tienda[i].car << "\t" << "\t";
			text = tienda[i].des;
			datos << tienda[i].des << "\t" << "\t";
			text = tienda[i].gen;
			datos << tienda[i].gen << "\t" << "\t";
			txt = tienda[i].preu;
			datos << tienda[i].preu << "\n" << "\n";
			txt = tienda[i].iva;
			datos << tienda[i].iva << "\n" << "\n";
			txt = tienda[i].pret;
			datos << tienda[i].pret << "\n" << "\n";
			txt = tienda[i].numob;
			datos << tienda[i].numob << "\t" << "\t";
			text = tienda[i].con;
			datos << tienda[i].con << "\t" << "\t";
		}
	}
	datos.close();
}