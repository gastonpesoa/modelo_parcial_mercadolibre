/******************************************************************
 * Programación I – Laboratorio I
 * Programa: Modelo parcial primer cuatrimestre 2017
 *
 * Objetivo:
 *
 * Se debe desarrollar un sistema (en ANSI C) de venta de productos al estilo mercadolibre.
 * En este sistema existirán usuarios, los cuales ingresarán utilizando su nombre de usuario y password.
 * Mediante la plataforma se podrá comprar y vender productos, estos se encuentran definidos por un nombre y precio.
 * La porción del sistema que deberá realizarse se centrará en la venta de productos y consta de un menú con las siguientes opciones:
 *
 *	    1. ALTA DE USUARIO:​ Se piden los datos del usuario requeridos para que el sistema pueda funcionar.
 *      2. MODIFICAR DATOS DEL USUARIO:​ Se ingresa el ID del usuario, permitiendo modificar sus datos.
 *      3. BAJA DEL USUARIO:​ Se ingresa el ID del usuario y eliminará junto con todos sus productos a la venta.
 *      4. PUBLICAR PRODUCTO:​ Se ingresará el ID del usuario y se pedirán los datos del producto a publicar (nombre, precio y stock)
 *      5. MODIFICAR PUBLICACIÓN:​ Se ingresará el ID del usuario y se listarán los productos de dicho usuario mostrando todos sus campos (id, nombre, precio, cantidad vendida y stock), luego ingresar el ID del producto y se pedirá que se ingrese un nuevo precio y stock.
 *      6. CANCELAR PUBLICACIÓN:​ Se ingresará el ID del usuario y se listarán los productos de dicho usuario mostrando todos sus campos (id, nombre, precio, cantidad vendida y stock), luego ingresar el ID del producto que se quiere cancelar su publicación.
 *      7. COMPRAR PRODUCTO:​ Se ingresará el ID del producto a comprar, y en el caso que haya stock se realizará la compra, en dicho caso se ingresará una calificación para el vendedor.
 *      8. LISTAR PUBLICACIONES DE USUARIO: ​Se ingresa el ID del usuario y se mostrará una lista de productos indicando: id, nombre, precio, cantidad vendida y stock.
 *      9. LISTAR PUBLICACIONES:​ Se mostrará una lista de productos indicando: id, nombre, precio, cantidad vendida, stock y nombre del usuario.
 *      10. LISTAR USUARIOS:​ Se mostrará una lista de usuarios con la calificación promedio de cada uno.
 *
 * Aspectos a destacar:
 *
 *   El sistema soportará una capacidad máxima de 100 usuarios y 1000 productos.
 *   Se deberá desarrollar una biblioteca lib.c y lib.h la cual contendrá las funciones (Alta, Baja, Modificar, etc.).
 *   El código deberá tener comentarios con la documentación de cada una de las funciones y respetar las reglas de estilo de la cátedra.
 *
 * Version: 0.2 del 06 de mayo de 2018
 * Autor: Gaston Pesoa
 *
 * *******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "types.h"
#include "productFunctions.h"
#include "usersFunctions.h"
#include "salesFunctions.h"
#include "controllerFunctions.h"
#include "listFunctions.h"
#include "inputFunctions.h"



int main(void) {

    // Array de usuarios
    user userArray[USERS_MAX_QTY];
    setUserStatus(userArray, USERS_MAX_QTY, INACTIVE);

    // Array de productod
    product productArray[PRODUCTS_MAX_QTY];
    setProductStatus(productArray, PRODUCTS_MAX_QTY, INACTIVE);

    //Array de ventas
    sale saleArray[SALES_MAX_QTY];
    setSaleStatus(saleArray, SALES_MAX_QTY, INACTIVE);

    //HardCode con datos para test
    controller_test(productArray, userArray, saleArray);

    //Menu de opciones
    char menuPrinsipalMensaje[] =
                "\n\n1 - ALTA DE USUARIO\
                \n2 - MODIFICAR DATOS DE USUARIO\
                \n3 - BAJA DE USUARIO\
                \n4 - PUBLICAR PRODUCTO\
                \n5 - MODIFICAR PUBLICACION\
                \n6 - CANCELAR PUBLICACION\
                \n7 - COMPRAR PRODUCTO\
                \n8 - LISTAR PUBLICACIONES DE USUARIO\
                \n9 - LISTAR PUBLICACIONES\
                \n10 - LISTAR USUARIOS\
                \n11 - SALIR\
                \n\nIngrese una opcion: ";

    char menuPrinsipalMensajeError[] = "\nSe debe elegir una opcion del 1 al 11";

    int option = 0;

    while (option != 11) {
        //clearScreen();
        printf("\n\n--------------------------------------------\n|*             MENU PRINCIPAL             *|\n--------------------------------------------");

        option = getValidInt(menuPrinsipalMensaje, menuPrinsipalMensajeError, 1, 11);

        switch (option){

            case 1: // ALTA DE USUARIO
                controller_altaUser(userArray, USERS_MAX_QTY);
                break;

            case 2: // MODIFICAR DATOS DE USUARIO
                controller_modificarUser(userArray, USERS_MAX_QTY);
                break;

            case 3: // BAJA DE USUARIO
                controller_bajaUser(userArray, USERS_MAX_QTY, productArray, PRODUCTS_MAX_QTY);
                break;

            case 4: //  PUBLICAR PRODUCTO
                controller_altaProduct(productArray, PRODUCTS_MAX_QTY, userArray, USERS_MAX_QTY);
                break;

            case 5: // MODIFICAR PUBLICACION
                controller_modificarProduct(productArray, PRODUCTS_MAX_QTY, userArray, USERS_MAX_QTY);
                break;

            case 6: // CANCELAR PUBLICACION
                controller_bajaProduct(productArray, PRODUCTS_MAX_QTY, userArray, USERS_MAX_QTY);
                break;

            case 7: // COMPRAR PRODUCTO
                controller_buyProduct(productArray, PRODUCTS_MAX_QTY, userArray, USERS_MAX_QTY, saleArray, SALES_MAX_QTY);
                break;

            case 8: // LISTAR PUBLICACIONES DE USUARIO
                showUserProducts(productArray, PRODUCTS_MAX_QTY, userArray, USERS_MAX_QTY);
                getChar("\n\nENTER (para continuar)");
                break;

            case 9: // LISTAR PUBLICACIONES
                showProductArray(productArray, PRODUCTS_MAX_QTY);
                getChar("\n\nENTER (para continuar)");
                break;

            case 10: // LISTAR USUARIOS
                showUserSaleArray(userArray, USERS_MAX_QTY, saleArray, SALES_MAX_QTY);
                getChar("\n\nENTER (para continuar)");
                break;

        }//switch (option)
    }//while (option != 4)

    return 0;
}//int main(void)





