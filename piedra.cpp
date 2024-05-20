#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{

int  b, a, ganaste = 0, perdiste = 0, empate = 0;

cout << "Seleccione 1,2,3 para jugar: \n" << "1 es para piedra \n" << "2 es para papel \n" << "3 es para tijera \n";
cin >> a;

switch (a)
{
case 1:
cout << "A seleccionado piedra \n";
break;
case 2:
cout << "A seleccionado papel \n";
break;
case 3: 
cout << "A seleccionado tijera \n";
break;
default:
cout << "Solo se pueden seleccionar numeros del 1 al 3 \n";
}
 srand (time(NULL));
    b= rand()%3+1;
    if (b == 1)
    {
        cout << "La pc selecciono piedra \n";
    }
    else if (b == 2)
    {
        cout << "La pc selecciono papel \n";
    }
    else if (b == 3)
    {
        cout << "La pc selecciono tijera \n";
    }

    if (a == 2 && b == 1)
    {
        cout << "Ganaste \n";
        ganaste++;
    }
    else if (a == 3 && b == 2)
    {
        cout << "Ganaste \n";
        ganaste++;
    }
    else if ( a == 1 && b == 3)
    {
        cout << "Ganaste \n";
        ganaste++;
    }
    else if (a == b)
    {
        cout << "Empataste \n";
        empate++;
    }
    else
    {
      cout << "Perdiste \n"; 
      perdiste++; 
    }
    return 0;
}