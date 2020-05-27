/*
 * Menu.cpp
 *
 *  Created on: 26 may. 2020
 *      Author: ylera
 */
#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include "Menu.h"
#include "VistaMateria.h"
using namespace std;

Menu::Menu() {
	// TODO Auto-generated constructor stub

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::mMenu(){
	int numero;

	cout<<"1. Registrar Materia"<<endl;
	cout<<"2. Registrar Alumno"<<endl;

	cin>>numero;

	switch(numero){
	case 1:
		VistaMateria * vistaMateria;
		vistaMateria = new VistaMateria;
		vistaMateria->wRegistraMateria ();
		break;
	case 2:
	break;
	}

}
