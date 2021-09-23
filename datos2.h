/*
Eduar Ivan Forero Espinosa
Juan Pablo Giraldo Collazos
Cristhian Fernando Montejo Martínez
*/

#include <string.h>
#include <iostream>

using namespace std;

struct datos
{
	char nombre[20] = "null";
	char deporte[20] = "null";
	char edad[20] = "0";
};

struct datosFulbol
{
	char nombre[20] = "null";
	char deporte[20] = "Futbol";
	char edad[20] = "0";
};

struct datosNatacion
{
	char nombre[20] = "null";
	char deporte[20] = "Natacion";
	char edad[20] = "0";
};

struct datosBaloncesto
{
	char nombre[20] = "null";
	char deporte[20] = "Baloncesto";
	char edad[20] = "0";
};

struct datosTenis
{
	char nombre[20] = "null";
	char deporte[20] = "Tenis";
	char edad[20] = "0";
};

struct datosFulbol ingresarPersonaFulbol()
{
	struct datosFulbol P;
	cout << "Digite nombre: ";
	cin >> P.nombre;
	cout << "Digite edad:";
	cin >> P.edad;

	return P;
}

struct datosNatacion ingresarPersonaNatacion()
{
	struct datosNatacion P;
	cout << "Digite nombre: ";
	cin >> P.nombre;
	cout << "Digite edad:";
	cin >> P.edad;

	return P;
}

struct datosBaloncesto ingresarPersonaBaloncesto()
{
	struct datosBaloncesto P;
	cout << "Digite nombre: ";
	cin >> P.nombre;
	cout << "Digite edad:";
	cin >> P.edad;

	return P;
}

struct datosTenis ingresarPersonaTenis()
{
	struct datosTenis P;
	cout << "Digite nombre: ";
	cin >> P.nombre;
	cout << "Digite edad:";
	cin >> P.edad;

	return P;
}

void imprimirTodoF(struct datosFulbol Personas[5][5], int max)
{

	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < max; j++)
		{
			cout << "[" << Personas[i][j].nombre << "--";
			cout << Personas[i][j].deporte << "--";
			cout << Personas[i][j].edad << "]"
				 << "\t";
		}
		cout << endl;
	}
}

void imprimirTodoN(struct datosNatacion Personas[5][5], int max)
{

	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < max; j++)
		{
			cout << "[" << Personas[i][j].nombre << "--";
			cout << Personas[i][j].deporte << "--";
			cout << Personas[i][j].edad << "]"
				 << "\t";
		}
		cout << endl;
	}
}

void imprimirTodoB(struct datosBaloncesto Personas[5][5], int max)
{

	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < max; j++)
		{
			cout << "[" << Personas[i][j].nombre << "--";
			cout << Personas[i][j].deporte << "--";
			cout << Personas[i][j].edad << "]"
				 << "\t";
		}
		cout << endl;
	}
}

void imprimirTodoT(struct datosTenis Personas[5][5], int max)
{

	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < max; j++)
		{
			cout << "[" << Personas[i][j].nombre << "--";
			cout << Personas[i][j].deporte << "--";
			cout << Personas[i][j].edad << "]"
				 << "\t";
		}
		cout << endl;
	}
}