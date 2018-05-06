
#ifndef __practicaModeloParcial_1__usersFunctions__
#define __practicaModeloParcial_1__usersFunctions__

#include <stdio.h>

void setUserStatus(user userArray[],int arrayLenght,int value);

int findUserById(user userArray[],int arrayLenght,int id);
int findUserEmptyPlace(user userArray[],int arrayLenght);

void setUser(user userArray[], int freePlaceIndex, int userIdAux, char nameAux[], char passwordAux[]);

void showUserArray(user userArray[], int arrayUserLenght);
void showUser(user userArray);

#endif /* defined(__practicaModeloParcial_1__usersFunctions__) */
