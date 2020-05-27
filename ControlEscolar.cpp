/*
 * ControlEscolar.cpp
 *
 *  Created on: 27 may. 2020
 *      Author: ylera
 */
#include "Menu.h"
#include "ControlEscolar.h"
#include<iostream>
#include <string>

using namespace std;


ControlEscolar::ControlEscolar() {
	// TODO Auto-generated constructor stub

}

ControlEscolar::~ControlEscolar() {
	// TODO Auto-generated destructor stub
}

int  main () {


	int opc = 0 ;
	do{

	Menu * menu;
	menu = new Menu();
 menu-> mMenu();

	cout<<"Quieres ver de nuevo el menu?"<<endl;
	cin>>opc;

	} while (opc == 1 );

}
