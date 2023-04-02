#include <iostream>
using namespace std;
int main()

{
	char des [400], gen[100], clas[100], con[100];
	int numob, ob, opci;
	float preu, pret;

	cout << ("\t ***SISTEMA DE TIENDA GAMERS***") << endl;
	cout << ("Escriba el numero de la accion que realizara") << endl;
	cout << endl << ("1.- Dar de alta un articulo");
	cout << endl << ("2.- Modificar un articulo");
	cout << endl << ("3.- Dar de baja un articulo");
	cout << endl << ("4.- Ver lista de articulos");
	cout << endl << ("5.- Limpiar la pantalla");
	cout << endl << ("6.- Salir del Sistema") << endl;
	cin >> opci;

		switch (opci)

		{
		case 1:
			cout << ("Ingrese numero de articulo") << endl;
			cin >> ob;
			cout << ("Ingrese la cantidad de articulos") << endl;
			cin >> numob;
			cout << ("Ingrese la descripcion del articulo") << endl;
			cin >> des;
			cout << ("Ingrese genero del articulo") << endl;
			cin >> gen;
			cout << ("Ingrese la clasificacion de edad del artículo") << endl;
			cin >> clas;
			cout << ("Ingrese la consola de la version registrada del juego") << endl;
			cin >> con;
			cout << ("Ingrese el precio unitario del objeto") << endl;
			cin >> preu;
			pret = (preu * numob) * 1.16;
			system("pause");
			return main();
			break;

		case 5:
			system("cls");
			return main();
			break;

		case 6:
			exit(1);
			break;
		}
}