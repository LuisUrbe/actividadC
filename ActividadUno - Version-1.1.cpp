 /******************************************************************************
 autor -> Luis Acosta
 Carrera -> Ing. Informatica
 *******************************************************************************/

 // Libreria
#include <iostream>
 // Final de librerias

using namespace std; // Facilidad para hacer el codigo

int main(){// Comienzo del prgrama

    // Variables

    int vuelta, entrada, opcion, panesP;// Variables enteras
    string dia[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Vienes", "Sabado", "Domingo"}; // dias de la semanas
    int verificacion, verificacionDos; // para la verificacion para ver si se puede hacer una comparacion
    float panaderia[7]; // precio por pieza por dia
    float panaderiaDos[7]; // precio por Kilogramos por dia en dolares
    float pieza[6], kilo[6], dolar, resultadoTotal, resultadoTotalDolar, dolarAbs, bsAdolar, panesK; // float

    //Fin de Variables

entrada = true;
while(entrada == true){ // Inicio del programa en un bucle

    cout << "#######################################"<<endl;
    cout << "autor -> Luis Acosta"<<endl;
    cout << "Carrera -> Ing. Informatica"<<endl;
    cout << "#####################################"<<endl;

    cout << "\n#########################################################################"<<endl;
    cout << "Bienvenido al Programa para evaluar el lugar mas economico para la compra"<<endl;
    cout << "#########################################################################"<<endl;
    
    cout << "\n################################# AVERTENCIA ####################################"<<endl;
    cout << "1- Recuerda Comprar la misma cantidad de panes o no se podra hacer la comparacion"<<endl;
    cout << "   Si la cantidad de panes en la compra semana no es igual se repetira el preceso"<<endl;
    cout << "\n2- Recuerda que un Kilogramos equivale a 16 panes por pieza"<<endl;
    cout << "#################################################################################"<<endl;
    system("Pause");

    cout << "\nPrimero empezo con saber el precio Actual del Dolar en BS : "; cin >> dolar; // Para saber el precio del dolar
    system("CLS");

    cout << "\n##########################################"<<endl;
    cout << "Datos de la primera panaderia por pieza: "<<endl;
    cout << "#########################################"<<endl;
 
    for (int i = 0; i <= 6; ++i) // bucle para introducir el precio y marcar cada dia de la semana automaticamente
    {
    	cout << "\nPrecio del dia " <<dia[i]<< " Panes por pieza en Bs: "; cin >>panaderia[i]; // Se india el dia y el precio de los panes
        cout << "Cantidad de panes a comprar por pieza: "; cin >> pieza[i]; // Cantidad a comprar por pieza
    } // final bucle for

    cout << "\n##############################################"<<endl;
    cout << "Datos de la segunda panaderia por Kilogramos : "<<endl;
    cout << "##############################################"<<endl;
    
    for (int i = 0; i <= 6; ++i) // bucle for para introducir el precio y marcar cada dia de la semana automaticamente
    {
    	cout << "\nPrecio del dia " <<dia[i]<< " Panes por Kilogramos en Dolares : "; cin >>panaderiaDos[i]; // Se india el dia y el precio de los panes 
        cout << "Cantidad de Kilogramos de panes a comprar : "; cin >> kilo[i];  // Cantidad a comprar por Kilogramos
    } // final bucle for

     // Verificar si es la misma cantida de panes comprada

    verificacion = pieza[0] + pieza[1] + pieza[2] + pieza[3] + pieza[4] + pieza[5] + pieza[6]; // se reunen la cantidad de panes comprados
    verificacionDos = (16*kilo[0]) + (16*kilo[1]) + (16*kilo[2]) + (16*kilo[3]) + (16*kilo[4]) + (16*kilo[5]) + (16*kilo[6]); // se reunen la cantidad de panes comprados

    if (verificacion == verificacionDos)
        {

    //Calcular los precios

    //Pieza
    resultadoTotal = (pieza[0]*panaderia[0]) + (pieza[1]*panaderia[1]) + (pieza[2]*panaderia[2]) + (pieza[3]*panaderia[3]) + (pieza[4]*panaderia[4]) + (pieza[5]*panaderia[5]) + (pieza[6]*panaderia[6]); //Cantidad de panes comprados por pieza
    bsAdolar = resultadoTotal / dolar; //Resultado en Dolar total Pieza

    //Kilo
    resultadoTotalDolar = (kilo[0]*panaderiaDos[0]) + (kilo[1]*panaderiaDos[1]) + (kilo[2]*panaderiaDos[2]) + (kilo[3]*panaderiaDos[3]) + (kilo[4]*panaderiaDos[4]) + (kilo[5]*panaderiaDos[5]) + (kilo[6]*panaderiaDos[6]); //Cantidad de panes comprados por Kilogramos
    dolarAbs = resultadoTotalDolar * dolar; //Resultado en bs total Kilo

    //final de Calcular los precios

    //Evaluar los mejores precios
    if (resultadoTotal == dolarAbs) // Si los precios son iguales
    {
        cout << "\n#####################################################################"<<endl;
        cout << "El precio es el mismo puede comprar en cualquiera de esta 2 panaderia"<<endl;
        cout << "#####################################################################"<<endl;
        
        cout << "\nDeseas ver el monto de la compra? : 1-Si / 2-No"; cin >> opcion;

        if (opcion == 1) // 1 para ver el precio
        {
            cout << "\nPrimera panaderia monto total de la semana en compra por pieza : "<<endl;
            cout << "Monto en BS: "<<resultadoTotal <<endl; //Monto en BS
            cout << "Monto en Dolares: "<<bsAdolar <<endl; //Monto en dolares

            cout << "\nSegunda panaderia monto total de la semana en compra por Kilogramos : "<<endl;
            cout << "Monto en BS: "<<dolarAbs <<endl; //Monto en BS
            cout << "Monto en Dolares: "<<resultadoTotalDolar <<endl; //Monto en dolares
        }

        else { // para no ver el precio // igual funciona con cualquier otro numero que no sea 1
            cout << "\nOK!!"<<endl;
        }
    }

    else if (resultadoTotal < dolarAbs) // Si es mejor comprar por pieza
    {
        cout << "\n################################################"<<endl;
        cout << "Te recomiendo comprar por Pieza es mas economico"<<endl;
        cout << "################################################"<<endl;

        cout << "\nPrimera panaderia monto total de la semana en compra por pieza : "<<endl;
        cout << "Monto en BS: "<<resultadoTotal <<endl; //Monto en BS
        cout << "Monto en Dolares: "<<bsAdolar <<endl; //Monto en dolares

        cout << "\nDeseas ver el monto de la compra por Kilogramos? : 1-Si / 2-No : "; cin >> opcion;

        if (opcion == 1) // 1 para ver el precio
        {
            cout << "\nSegunda panaderia monto total de la semana en compra por Kilogramos : "<<endl;
            cout << "Monto en BS: "<<dolarAbs <<endl; //Monto en BS
            cout << "Monto en Dolares: "<<resultadoTotalDolar <<endl; //Monto en dolares
        }

        else { // para no ver el precio // igual funciona con cualquier otro numero que no sea 1
            cout << "\nOK!!"<<endl;
        }
    }

    else if (resultadoTotal > dolarAbs) // Si es mejor comprar por Kilo
    {
        cout << "\n#####################################################"<<endl;
        cout << "Te recomiendo comprar por Kilogramos es mas economico"<<endl;
        cout << "#####################################################"<<endl;

        cout << "\nSegunda panaderia monto total de la semana en compra por Kilogramos : "<<endl;
            cout << "Monto en BS: "<<dolarAbs <<endl; //Monto en BS
            cout << "Monto en Dolares: "<<resultadoTotalDolar <<endl; //Monto en dolares

        cout << "\nDeseas ver el monto de la compra en Pieza? : 1-Si / 2-No : "; cin >> opcion;

        if (opcion == 1) // 1 para ver el precio
        {
            cout << "\nPrimera panaderia monto total de la semana en compra por Pieza : "<<endl;
            cout << "Monto en BS: "<<resultadoTotal <<endl; //Monto en BS
            cout << "Monto en Dolares: "<<bsAdolar <<endl; //Monto en dolares
        }

        else { // para no ver el precio // igual funciona con cualquier otro numero que no sea 1
            cout << "\nOK!!"<<endl;
        }
    }

     } // Final de la Verificacion de la misma cantida de panes comprada

     else{
        cout << "\n\n##########################################################"<<endl;
        cout << "Cantidad no es iguales, no se podra hacer la comparacion!!"<<endl;
        cout << "##########################################################"<<endl;
     }

    // Terminar o empezar de nuevo el programa
    cout << "\nDesea Volver a ejecutar el programa? 1-Si / 2-No : ";
    cin >> vuelta;

    if (vuelta == 1){ // Empezar de nuevo el programa
      	cout << "\nVolvemos!!!!!!\n"<<endl;
      	system("CLS");
    } // final de if comienzo

    else if (vuelta == 2){ // Cerrar el programa
        entrada = false;
    } // final del else if opcion 2 dentro del if

    else{  // Repuesta incorrecta y cierra el programa
        cout << "\nRepuesta incorrecta!! el programa se terminara!!";
        entrada = false;
    } // final del else dentro del if

}// Final del while

cout << "\nFin del Programa Vuelve pronto!!";

    return 0; // Fin
}
