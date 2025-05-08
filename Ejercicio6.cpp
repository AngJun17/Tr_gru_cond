#include <iostream>

using namespace std;

int main(){

    int salida;
    cout<<"Que actividad vas a realizar el dia de hoy? \n";
    cout<<"1.Ver una serie \n";
    cout<<"2.Salir \n";
    cout<<"3.Hacer tarea/proyectos \n";
    cout<<"4.Dormir \n";
    cout<<"5.Jugar Valorant \n";
    cin>>salida;

    

    switch (salida)
    {
    case 1:
        cout<<"Hora de relajarse para ver la serie ";
        break;
    case 2:
        cout<<"Organiza la salida con tus amigos/novia/familia ";
        break;
    case 3:
        cout<<"Hora de estresarse, Suerte ;) ";
        break;
    case 4:
        cout<<"Que tengas un sueño reparador!";
        break;
    case 5:
        cout<<"Hora de carrear bots";
        break;
    default:
    cout<<"No elegiste ninguna opcion. "<<endl;
        break;
    }

}