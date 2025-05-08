#include <iostream>

using namespace std;

int main(){

    int decision;

    cout<<"Te encuentras en una cueva en Minecraft y escuchas sonidos de monstruos cerca. Cual es tu decision? \n";
    cout<<"1. Pelear con espada \n";
    cout<<"2. Huir corriendo \n";
    cout<<"3. Bloquearte con tierra/piedra \n";
    cout<<"4. Comer para recuperar vida \n";
    cout<<"5. Usar una pocion. \n";
    cout<<"Que accion tomaras? : ";
    cin>>decision;

    switch (decision)
    {
    case 1:
        cout << "Sacaste tu espada y comenzaste a luchar. ¡Has derrotado al creeper justo a tiempo!\n";
        break;
    case 2:
        cout << "Corriste lo más rápido que pudiste... ¡pero te caíste en lava! Intenta otra estrategia la próxima vez.\n";
        break;
    case 3:
        cout << "Te encerraste con bloques a tu alrededor. ¡Ahora estás seguro por un momento!\n";
        break;
    case 4:
        cout << "Comiste algo y recuperaste vida, pero los monstruos ya están muy cerca...\n";
        break;
    case 5:
        cout << "Usaste una poción de invisibilidad. ¡Los monstruos no pueden verte!\n";
        break;
    default:
        cout<<"Debes elegir una de las opciones validas (1-5)"<<endl;
        break;
    }

}