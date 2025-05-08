//Situación 2: Camino a la escuela El usuario elige por qué medio de transporte ir (auto, bus, bicicleta, caminando, patineta

#include <iostream>
using namespace std;

int main (){
	int opcion;
	
	cout<<"Como irías a la escuela"<<endl;
	cout<<"1) En carro"<<endl;
	cout<<"2) En Bus"<<endl;
	cout<<"3) En Bicicleta"<<endl;
	cout<<"4) En Caminando"<<endl;
	cout<<"5) En Patineta"<<endl;
	cin>>opcion;
	
	switch(opcion){
	case 1:
		cout<<"LLegaste a tiempo pero casi te pasa chocando una moto"<<endl;
		break;
	case 2:
		cout<<"Llegaste tarde y el inge de progra no te dejo entrar a clase"<<endl;
		break;
	case 3:
		cout<<"Llegamos algo tarde y sudados, pero disfrutamos del recorrido"<<endl;
		break;
	case 4:
		cout<<"¿Todo bien en casa? Si vivieras cerca estaria bien pero eso de pasar 3 cerros y 2 cantones para llegar a la escuela caminando no me parece normal"<<endl;
		cout<<"¿No conoces los buses?"<<endl;
		break;
	case 5:
		cout<<"Llegaste a tiempo pero la que te gusta vio que te caías"<<endl;
		break;
	}
}
	
	
