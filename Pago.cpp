#include <iostream>
using namespace std;

void MenuPago();
void PagoServicios(float pago, int opcion);

/*Una empresa desea implementar un sistema para pago de colectores con efectivo,  se requieren de las siguientes funcionalidades, a través de un menú.

1.  Consultar, el usuario podrá visualizar los tipos de recibos que se pueden pagar según el tipo de servicio indique el usuario (agua, energía         eléctrica, alcaldía), finalmente la función deberá imprimir si el tipo de servicio requerido se puede pagar o no en ese centro de atención.

2.  Pagar un colector, el usuario podrá pagar el colector a través de la cantidad a pagar, tipo de servicio y cantidad de efectivo con que pagará, tomando en cuenta que se le debe entregar cambio si el efectivo es mayor a la cantidad a pagar, finalmente la función deberá retornar el cambio a entregar si aplica.

Consultar al usuario si desea salir del sistema y si no deberá continuar.*/


int main()
{
    int opcion, contadorWhile = 1;


    while(contadorWhile == 1)
    {

        cout << "Bienvenido al sistema de pago.\nA continuacion se le presentara un menu el cual mostrara los tipos de recibos que se pueden pagar, favor seleccionar una de las siguientes opciones:\n[1] Recibo de Agua\n[2] Recibo de Energia Electrica\n[3] Recibo de Alcaldia\n[4] Realizar pagos\n[5] Salir del programa" << endl;

        //Se hace la seleccion de la opcion
        cin >> opcion;

        switch(opcion)
        {
            case 1:
            //Recibo de Agua
                cout << "Recibo de Agua.\n Monto a pagar: 32.50$" << endl;
            break;

            case 2:
            //Recibo de Energía Eléctrica
                cout << "Recibo de Energia Electrica.\n Monto a pagar: 95.70$" << endl;

            break;

            case 3:
            //Recibo de Alcaldía
                cout << "Recibo de Alcaldia.\n Monto a pagar: 110.80$" << endl;

            break;
            
            case 4:
            //Pasar a pagar
                //Llama a la funcion MenuPago para proseguir con el proceso de pago
                MenuPago();

            break;

            case 5:
            //Terminar programa
                cout << "Pase un buen dia!";
                contadorWhile = 0;

            break;


            default:
            //En caso de ingresar una opción que no se encuentra en el menú
                cout << "Disculpe, no poseemos este servicio o puede que se haya equivocado al seleccionar la opcion, le solicitamos que vuelva a ingresar una opcion valida." << endl;

            break;

        }

    }

    return 0;
}

void MenuPago()
{
    int  contadorWhile2 = 1, opcion2, respuesta;
    float pago;

    while(contadorWhile2 == 1)
    {
        cout << "Ingrese el solamente el numero de la opcion:\n1. Pago de Recibo de agua\n2. Pago de Recibo de Energia Electrica\n3. Pago de Recibo de Alcaldia\n4. Regresar al menu" << endl;

        cin >> opcion2;

        //En cada caso se pide el pago del servicio y se llama a la funcion PagoServicios para realizar el calculo del vuelto en caso de ser necesario
        switch(opcion2)
        {

            case 1:
            //Pago de agua
              cout << "Ingrese la cantidad a pagar:\n";
             cin >> pago;
                PagoServicios(pago, opcion2);
            break;

            case 2:
            //Pago de Energia
              cout << "Ingrese la cantidad a pagar:\n";
             cin >> pago;
             PagoServicios(pago, opcion2);
            break;

            case 3:
            //Pago de Alcaldia
              cout << "Ingrese la cantidad a pagar:\n";
             cin >> pago;
             PagoServicios(pago, opcion2);
            break;

            default:
                cout << "Ingrese una opcion valida\n";

            break;

        }

        cout << "Desea realizar otro pago?\n[1] Si\n[0] No" << endl;
        cin >> respuesta;
        contadorWhile2 = respuesta;

    }

}


//En esta funcion se calcula el vuelto si es necesario, o si el pago es insuficiente

void PagoServicios(float pago, int opcion)
{
    float vuelto;

    switch(opcion)
        {

            case 1:
            //Pago de agua
              if(pago > 32.5)
              {
                vuelto = (pago - 32.5);
                cout << "Gracias por su pago, su vuelto es de: " << vuelto << "$." << endl;
              }
              else if(pago == 32.5)
              {
                cout << "Gracias por su pago"<<endl;
              }
              else
              {
                cout << "Por favor ingrese una cantidad válida"<<endl;
              }

            break;

            case 2:
            //Pago de Energia
              if(pago > 95.7)
              {
                vuelto = (pago - 95.7);
                cout << "Gracias por su pago, su vuelto es de: " << vuelto << "$." << endl;
              }
              else if(pago == 95.7)
              {
                cout << "Gracias por su pago"<<endl;
              }
              else
              {
                cout << "Por favor ingrese una cantidad válida"<<endl;
              }

            break;

            case 3:
            //Pago de Alcaldia
                if(pago > 110.8)
              {
                vuelto = (pago - 110.8);
                cout << "Gracias por su pago, su vuelto es de: " << vuelto << "$." << endl;
              }
              else if(pago == 110.8)
              {
                cout << "Gracias por su pago"<<endl;
              }
              else
              {
                cout << "Por favor ingrese una cantidad válida"<<endl;
              }

            break;

        }

    
}