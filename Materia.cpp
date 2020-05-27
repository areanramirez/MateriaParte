/*
 * Materia.cpp
 *
 *  Created on: 26 may. 2020
 *      Author: ylera
 */
#include<iostream>
#include<string>
#include "Materia.h"
using namespace std;

Materia::Materia() {
	// TODO Auto-generated constructor stub

}

Materia::~Materia() {
	// TODO Auto-generated destructor stub
}

void Materia::setClaveMateria(int claveMateria){
	this->claveMateria = claveMateria;
}
int Materia::getClaveMateria(){
	return claveMateria;
}

void Materia::setNumGrado(int numGrado){
	this->numGrado = numGrado;
}
int Materia::getNumGrado(){
	return numGrado;
}

void Materia::setNombreMateria(string nombreMateria){
	this->nombreMateria = nombreMateria;
}
string Materia::getNombreMateria(){
	return nombreMateria;
}
