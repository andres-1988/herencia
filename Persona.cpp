#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include<cstdio>
#include "Persona.h"
#include "Almuno.h"

using namespace std;

Persona::Persona()
{
    //ctor
}

void Persona::setNombre(char* _nombre){
    strcpy(nombre,_nombre);
}
void Persona::setEdad(int _edad){
    edad=_edad;
}
char* Persona::getNombre(){
    return nombre;
}
int Persona::getEdad(){
    return edad;
}
void Persona::cargar(){
    cout<<"NOMBRE: ";
    cin.getline(nombre,50);
    cout<<"EDAD: ";
    cin>>edad;
}
void Persona::mostrar(){
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"EDAD: "<<edad<<endl;
}
