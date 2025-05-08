#include<iostream>
#include<windows.h>
using namespace std;

void sit1(){
	cout<<"Buscas al dueño en los alrededores..."<<endl;
	cout<<"Tu accion es recompensada, encuentras al dueño y te da una buena recompensa..."<<endl;
}
void sit2(){
	cout<<"Buscas en facebook..."<<endl;
	cout<<"Pasan varios dias y aun no aparece el dueño, cuando te encariñas con el loro al fin enceuntras al duaño "<<endl;
	cout<<"Al final decides tener uno tambien y terminas con un compañero verde en tu casa"<<endl;
}
void sit3(){
	cout<<"Te lo quedas..."<<endl;
	cout<<"Pensaste que era una buena idea, no podias estar mas equivocado"<<endl;
	cout<<"La especie del loro es una exotica y no tienes permiso para tenerlo en tu casa, terminas en la carcel"<<endl;
}
void sit4(){
	cout<<"Llevarlo a la veterinaria...";
	cout<<"Es una excelente idea, te lo llevas y encuentras a la dueña que estaba buscandolo en esa veterinaria"<<endl;
	cout<<"Te agradece y se vuelven amigos... Aunque puede que pase algo mas :)"<<endl;
}
void sit5(){
	cout<<"No haces nada..."<<endl;
	cout<<"Si bien no quieres meterte en problemas esta no era la mejor decision"<<endl;
	cout<<"De regreso a tu casa te encuentras a la dueña la cual esta buscando desesperadamente a su mascota"<<endl;
	cout<<"Te pregunta y la llevas a donde viste por ultima vez dicha mascota, solo encuentras plumas regadas por el lugar"<<endl;
	cout<<"Posiblemente otro animal lo ataco, ahora eso queda en tu conciencia por siempre"<<endl;
}


int main () {
	
	int op1 = 0, po = 0;
	
	while(po==0){
	cout<<"Una mascota perdida..."<<endl;
	cout<<"Un dia caminando por la calle encuentras un loro, lo cual es bastante inusual"<<endl;
	cout<<"Al verlo ves que tiene un anillo en la pata, lo cual significa que tiene dueño, así que tu decides:"<<endl;
	cout<<"1. Preguntar en los alrededores si es de alguien el loro"<<endl<<"2. Buscar en facebook si alguien perdio un loro"<<endl<<"3. Quedartelo"<<endl;
	cout<<"4. Llevarlo a una veterinaria por si alguien llega a reclamar al loro"<<endl<<"5. No hacer nada y pasar de largo"<<endl;
	cin>>op1;
	system("CLS");
	switch(op1){
	case 1:
		sit1();
		po++;
		break;
	case 2:
		sit2();
		po++;
		break;
	case 3:
		sit3();
		po++;
		break;
	case 4:
		sit4();
		po++;
		break;
	case 5:
		sit5();
		po++;
		break;
	default:
		cout<<"Ir en contra de las reglas es tentador, pero por favor elige una de las anteriores..."<<endl;
		Sleep(8000);
		system("CLS");
		break;
	}
	}
	return 0;
}

