// Punteros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//Tamaño variables
	cout << "================= " << endl;
	cout << "Espacio en bytes de variables " << endl;
	cout << "================= " << endl;
	cout << "Char: " <<sizeof(char) <<endl;
	cout << "Int: " << sizeof(int) << endl;
	cout << "Long: " << sizeof(long) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "Double: " << sizeof(double) << endl;
	
	//Declarando punteros
	//Tamaño siempre es 2 bytes
	cout << "================= " << endl;
	cout << "Declarando punteros " << endl;
	cout << "================= " << endl;
	cout << "Ej: int* ptrenteros" << endl;
	int* ptrenteros;
	char* cadena;
	float* numero;
	
	//Asignando valores
	cout << "================= " << endl;
	cout << "Asignando valores " << endl;
	cout << "================= " << endl;

	int y;
	int x;
	int* ptrentero;
	int* ptrentero2;

	y = 16;
	x = 88;
	ptrentero = &y;//asigno dirección de memoria de y
	ptrentero2 = &x;//asigno dirección de memoria de x

	cout << "y = " << y << endl;
	cout << "x = " << x << endl;
	cout << "ptrentero = " << ptrentero << endl;
	cout << "&y = " << &y << endl;
	cout << "ptrentero2 = " << ptrentero2 << endl;
	cout << "&x = " << &x << endl;

	//Imprimir valores
	cout << "================= " << endl;
	cout << "Imprimir valores " << endl;
	cout << "================= " << endl;
	int z;
	int w;
	int* pentero;
	int* pentero2;

	z = 77;
	w = 59;

	pentero = &z;//asigno dirección de memoria de z
	pentero2 = &w;//asigno dirección de memoria de w

	//Obtengo el valor a partir de la
	//variable puntero
	cout << *pentero<<endl;
	cout << *pentero2 << endl;

	//Alterar valores
	cout << "================= " << endl;
	cout << "Alterar valores " << endl;
	cout << "================= " << endl;
	int a;
	int b;
	int* pent;
	int* pent2;

	a = 100;
	b = 150;

	pent = &a;//asigno dirección de memoria de a
	pent2 = &b;//asigno dirección de memoria de b

	//Operaciones
	*pent = *pent + 200;
	*pent2 = *pent2 + 100;

	//Imprimir
	cout << *pent << endl;
	cout << a << endl;
	cout << *pent2 << endl;
	cout << b << endl;
	
	_getch();
    return 0;


}

