
#ifndef __practicaModeloParcial_1__productFunctions__
#define __practicaModeloParcial_1__productFunctions__

#include <stdio.h>

void setProductStatus(product productArray[],int arrayLenght,int value);

int findProductById(product productArray[],int arrayLenght,int id);
int findProductEmptyPlace(product productArray[],int arrayLenght);

void setProduct(product productArray[], int freePlaceIndex, int productIdAux, char nameAux[], int userIdAux, float priceAux, int stockAux, int salesQtyAux);

void showProductArray(product productArray[],int arrayLenght);
void showProduct(product productArray);

#endif /* defined(__practicaModeloParcial_1__productFunctions__) */
