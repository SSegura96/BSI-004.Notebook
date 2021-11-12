//Segio Segura Vidal
//Organiz. Archivos y Estructura de Datos
//Prof

Variable puntero se identifica con "*"

Por ejemplo *"nombre_Variable"

Para conocer la direccion de memoria se usa &

Ejemplo: &"nombre_Variable"

A la hora de mostrar en pantalla 

Puntero =  mostraria la dirrecion de memoria
*Puntero = mostraria el valor que tiene el puntero

Clase ejemplo punteros:

// EjemploListas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Persona.h"

int _tmain(int args, _TCHAR* argv[])
{
	

	int x = 5;
	int y = x;
	int *puntero = &x;

	y = 10;
	*puntero = 8;

	cout << x << endl;

	cout << y << endl;

	cout << puntero << endl;

	cout << *puntero << endl;

	//Persona *AlgunaPersona = new Persona();

	//cout << AlgunaPersona->getCedula() << endl;

	system("PAUSE");
	
	return 0;
}
 