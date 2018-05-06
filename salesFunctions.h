
#ifndef __practicaModeloParcial_1__salesFunctions__
#define __practicaModeloParcial_1__salesFunctions__

#include <stdio.h>

void setSaleStatus(sale saleArray[], int arrayLenght, int value);
int findSaleEmptyPlace(sale saleArray[], int arrayLenght);
void setSale(sale saleArray[], int freePlaceIndex, int userIdAux, int qualificationPromAux);

void showSaleArray(sale saleArray[], int arraySaleLenght);

float qualificationAverage(sale saleArray[], int arraySaleLenght, int userIdAux);

#endif /* defined(__practicaModeloParcial_1__salesFunctions__) */
