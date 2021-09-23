/*
Se toma este archivo como demo para probar GIT
*/

#include <iostream>
#include <string.h>
#include <conio.h>
#include "datos2.h"

#define LIM 10

using namespace std;

int main(int argc, char **argv)
{
	struct datos Personas[LIM][LIM];
	struct datosFulbol PersonasF[LIM / 2][LIM / 2];
	struct datosNatacion PersonasN[LIM / 2][LIM / 2];
	struct datosBaloncesto PersonasB[LIM / 2][LIM / 2];
	struct datosTenis PersonasT[LIM / 2][LIM / 2];

	int opcion;

	do
	{
		cout << endl;
		cout << "***************************************" << endl;
		cout << "*          Bienvenido usuario         *" << endl;
		cout << "***************************************" << endl;
		cout << "*  Seleccione la opcion:              *" << endl;
		cout << "*  1. Ingresar persona                *" << endl;
		cout << "*  2. Mostrar todo                    *" << endl;
		cout << "*  3. Salir                           *" << endl;
		cout << "***************************************" << endl;
		cin >> opcion;
		switch (opcion)
		{

		case 1:
			int opcion2;

			do
			{
				cout << "********************************************" << endl;
				cout << "*   Seleccione la opcion:                  *" << endl;
				cout << "*   1. Ingresar deportistas de futbol      *" << endl;
				cout << "*   2. Ingresar deportistas de baloncesto  *" << endl;
				cout << "*   3. Ingresar deportistas de tenis       *" << endl;
				cout << "*   4. Ingresar deportistas de natacion    *" << endl;
				cout << "*   5. Salir                               *" << endl;
				cout << "********************************************" << endl;
				cin >> opcion2;

				switch (opcion2)
				{
				case 1:

					cout << "Se ingresaran 25 deportistas" << endl;

					for (int i = 0; i < LIM / 2; i++)
					{
						for (int j = 0; j < LIM / 2; j++)
						{
							PersonasF[i][j] = ingresarPersonaFulbol();
						}
					}
					break;

				case 2: //Error se repite mas de 16 veces

					cout << "Se ingresaran 25 deportistas" << endl;

					for (int i = LIM / 2; i < LIM; i++)
					{
						for (int j = 0; j < LIM / 2; j++)
						{
							PersonasB[i][j] = ingresarPersonaBaloncesto();
						}
					}
					break;

				case 3:

					cout << "Se ingresaran 25 deportistas" << endl;

					for (int i = 0; i < LIM / 2; i++)
					{
						for (int j = LIM / 2; j < LIM; j++)
						{
							PersonasT[i][j] = ingresarPersonaTenis();
						}
					}
					break;

				case 4: //No inicia el for

					cout << "Se ingresaran 25 deportistas" << endl;

					for (int i = LIM / 2; i < LIM; i++)
					{
						for (int j = LIM / 2; j < LIM; j++)
						{
							PersonasN[i][j] = ingresarPersonaNatacion();
						}
					}
					break;
				}
			} while (opcion2 != 5);
			break;

		case 2:

			imprimirTodoF(PersonasF, LIM / 2);
			imprimirTodoB(PersonasB, LIM / 2);
			imprimirTodoT(PersonasT, LIM / 2);
			imprimirTodoN(PersonasN, LIM / 2);

			//strcpy(imprimirTodoF(PersonasF, LIM / 2),imprimirTodoB(PersonasB, LIM / 2));
			break;
		}

	} while (opcion != 3);

	return 0;
}
