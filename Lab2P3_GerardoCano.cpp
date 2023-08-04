// Lab2P3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> <cmatch>


using namespace std;
//inicio ejercicio1
void tablero(int n) {
    cout << "tablero de dimension: " << n<<"\n";
    for (int i = 0; i <n; i++)
    {
            
        for (int j = 0; j <n; j++)
        {
            
            if ((i+j)%2==0) {
                cout << "0";
            }
            else {
                cout << "1";
            }


            
        }
        cout << "\n";
    }
    
}
//fin ejercicio 1
//inicio ejercicio 2
void raiz() {
    double raiz,  rad;
    int iera;
    cout << "Valor de x: ";
    cin >> raiz;
    cout << "Valor de n: ";
    cin>> rad;
    cout << "Numero de iteraciones: ";
    cin>> iera;
    double mid, max, min, resultado;
    min = 1;
    max = raiz;
    mid = (min + max) / 2;
    double val;
    for (int i = 0; i < iera; i++)
    {
        val = pow(mid, i);
        if (val > raiz) {
            min = min;
            max = mid;
        }
        if (val < raiz) {
            min = mid;
            max = mid;
        }
        if (val == raiz) {
            break;
        }
    }
    cout << "Raiz  " << raiz << " de " << rad << " = " <<val;

    //fin ejercicio 2
}

int main()
{
    //menu
    int opcion;
    do {
        
        std::cout << "\n1-Tablero Ajedrez\n2-Raiz de n mediante iteraciones\n0-salir\nSeleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            int n;
            cout << "Ingrese dimensiones del tablero: ";
            cin >> n;
            tablero(n);
            break;
        case 2:
            raiz();
            break;
        default:
            cout << "Saliendo";
        }
        //fin menu
    } while (opcion);
    }


