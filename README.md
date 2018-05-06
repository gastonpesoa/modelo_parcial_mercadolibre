# Modelo de parcial del primer cuatrimestre del 2017 de Laboratorio de computación I UTN FRA
*********************************************************************************************

Consigna:\n

    Se debe desarrollar un sistema (en ANSI C) de venta de productos al estilo mercadolibre.\n 
    En este sistema existirán usuarios, los cuales ingresarán utilizando su nombre de usuario y password.\n 
    Mediante la plataforma se podrá comprar y vender productos, estos se encuentran definidos por un nombre y precio.\n 
    La porción del sistema que deberá realizarse se centrará en la venta de productos y consta de un menú con las siguientes opciones:\n\n
    
        1. ALTA DE USUARIO:​ Se piden los datos del usuario requeridos para que el sistema pueda funcionar.\n
        2. MODIFICAR DATOS DEL USUARIO:​ Se ingresa el ID del usuario, permitiendo modificar sus datos.\n
        3. BAJA DEL USUARIO:​ Se ingresa el ID del usuario y eliminará junto con todos sus productos a la venta.\n
        4. PUBLICAR PRODUCTO:​ Se ingresará el ID del usuario y se pedirán los datos del producto a publicar (nombre, precio y stock)\n
        5. MODIFICAR PUBLICACIÓN:​ Se ingresará el ID del usuario y se listarán los productos de dicho usuario mostrando todos sus campos (id, nombre, precio, cantidad vendida y stock), luego ingresar el ID del producto y se pedirá que se ingrese un nuevo precio y stock.\n
        6. CANCELAR PUBLICACIÓN:​ Se ingresará el ID del usuario y se listarán los productos de dicho usuario mostrando todos sus campos (id, nombre, precio, cantidad vendida y stock), luego ingresar el ID del producto que se quiere cancelar su publicación.\n
        7. COMPRAR PRODUCTO:​ Se ingresará el ID del producto a comprar, y en el caso que haya stock se realizará la compra, en dicho caso se ingresará una calificación para el vendedor.\n
        8. LISTAR PUBLICACIONES DE USUARIO: ​Se ingresa el ID del usuario y se mostrará una lista de productos indicando: id, nombre, precio, cantidad vendida y stock.\n
        9. LISTAR PUBLICACIONES:​ Se mostrará una lista de productos indicando: id, nombre, precio, cantidad vendida, stock y nombre del usuario.\n
        10. LISTAR USUARIOS:​ Se mostrará una lista de usuarios con la calificación promedio de cada uno.\n\n

Nota 0: El sistema soportará una capacidad máxima de 100 usuarios y 1000 productos.\n
Nota 1: Se deberá desarrollar una biblioteca lib.c y lib.h la cual contendrá las funciones (Alta, Baja, Modificar, etc.).\n
Nota 2: El código deberá tener comentarios con la documentación de cada una de las funciones y respetar las reglas de estilo de la cátedra.\n
