#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include<cstdio>
#include "Almuno.h"
#include "Persona.h"

using namespace std;



Almuno::Almuno()
{
    //ctor
}
void Almuno::setLegajo(int _legajo){
    legajo=_legajo;
}
void Almuno::setCarrera(char* _carrera){
    strcpy(carrera,_carrera);
}
int Almuno::getLegajo(){
    return legajo;
}
char* Almuno::getCarrera(){
    return carrera;
}
void Almuno::cargar(){
    Persona::cargar();

    cout<<"LEGAJO: ";
    cin>>legajo;
    cout<<"CARRERA: ";
    cin.ignore();
    cin.getline(carrera,30);
    system("pause");
}

void Almuno::mostrar(){
    Persona::mostrar();
    cout<<"LEGAJO: "<<legajo<<endl;
    cout<<"CARRERA: "<<carrera<<endl;
}
