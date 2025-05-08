#include<iostream>
#include<windows.h>
using namespace std;

void sit1(){
	cout<<"Decidiste desayunar con pan y cafe..."<<endl;
	cout<<"Una decision aceptable, o eso seria si el pan no te diera dolor de estomago"<<endl;
	cout<<"Estando en el trabajo te da un dolor de estomago horrible y tienes que regresar a casa por eso"<<endl; 
}

void sit2(){
	cout<<"Decidiste desayunar con tu cereal favorito..."<<endl;
	cout<<"Fue una buena decision"<<endl;
	cout<<"El cereal te da energía hasta la hora del almuerzo, aunque tienes que comer algo más en el trabajo ya que te da hambre despues de poco tiempo"<<endl;
}
void sit3(){
	cout<<"Decidiste desayunar con fruta..."<<endl;
	cout<<"Una decision muy saludable"<<endl;
	cout<<"Aunque tal parece que una fruta estaba ya en mal estado y no te diste cuenta, asi que te enfermaste y terminaste conociendo al creador"<<endl;
}
void sit4(){
	cout<<"Decidiste desayunar con huevos..."<<endl;
	cout<<"Un desayuno completo sin duda alguna"<<endl;
	cout<<"No te sientes con hambre en el trabajo asi que trabajas el doble que los demas, te terminan ascendiendo, felicidades"<<endl;
}
void sit5(){
	cout<<"Decidiste no desayunar..."<<endl;
	cout<<"Aunque sea tarde debiste de comer algo"<<endl;
	cout<<"Al estar en el trabajo tu estomago te pide comida y no eres nada productivo, cometes un error fatal y te terminan despidiendo, por eso siempre tienes que desayunar"<<endl;
	
}


int main () {
	
	int op1;
	int po=0;
	
	while(po==0){
	cout<<"Desayuno..."<<endl;
	cout<<"Te levantas un sabado en la mañana y tienes hambre"<<endl<<"Revisas la cocina y hay una variedad de alimentos "<<endl<<"De entre todo tienes las siguientes opciones de desayuno: "<<endl;
	cout<<"1. Desayunar solo con pan y cafe"<<endl<<"2. Desayunar con tu cereal favorito"<<endl<<"3. Desayunar con fruta"<<endl<<"4. Desayunar con huevos"<<endl<<"5. No tengo tiempo, no desayunare"<<endl; 
	cin>>op1;
	system("CLS");
	switch (op1){
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
		cout<<"Se nota que creas tus propias opciones, pero en esta opcion te encuentras con un terrible destino, asi que elige una de las anteriores...";
		Sleep(8000);
		system("CLS");
		break;
	}
	

	}
	
	
	return 0;
}

