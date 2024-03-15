#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct autos{
	char marca[20];
	char color[20];
	float precio;

};

struct nodo {
	struct autos desee;
	struct nodo *next;
	struct nodo *back;
};


enum boolean {falso, verdadero};


#include "showColaCircular.c" //#include "showCola.c"
#include "desencolar.c"
#include "encolar.c"
#include "menuCC.c" //menuC
#include "showColaDoble.c" //showPila
#include "desencolardoble.c" //pop
#include "encolardoble.c" //push
#include "menuCD.c" //menuP
#include "menu.c"

int main (){
	menu();
	return 0;
}
