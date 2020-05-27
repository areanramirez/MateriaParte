/*
 * Materia.h
 *
 *  Created on: 26 may. 2020
 *      Author: ylera
 */
#include<iostream>
#include<string>
#ifndef MATERIA_H_
#define MATERIA_H_
using namespace std;

class Materia {
public:
	Materia();
	virtual ~Materia();
	string nombreMateria;
	int claveMateria;
	int numGrado;

	void setNombreMateria(string nombreMateria);
	string getNombreMateria();
	void setClaveMateria(int claveMateria);
	int getClaveMateria();
	void setNumGrado(int numGrado);
	int getNumGrado();

};

#endif /* MATERIA_H_ */
