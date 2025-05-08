//Situación 4: Juego de preguntas El programa hace una pregunta, y el usuario elige entre 5 respuestas posibles.

#include <iostream>
using namespace std;

int main(){ 
	
	int opcion;
	
	cout<<"¿Si un amigo/a se cae, como acturias"<<endl;
	cout<<"1) Lo ayudo"<<endl;
	cout<<"2) Le pregunto si se cayó"<<endl;
	cout<<"3) Me rio, lo ayudo, le pregunto si esta bien y me vuelvo a reir"<<endl;
	cout<<"4) Le tomo una foto"<<endl;
	cout<<"5) Me rio y espero Espero que se levante solo"<<endl;
	cin>>opcion;
	
	switch(opcion){
	case 1:
		cout<<"Muy bien, actuaste bien"<<endl;
		break;
	case 2:
		cout<<"Algo ilogica la pregunta pero es mejor preguntar a quedarse con la duda"<<endl;
		break;
	case 3:
		cout<<" Perfectamente equilibrado como todo debe estar."<<endl;
		break;
	case 4:
		cout<<"No te juzgo, yo haria lo mismo"<<endl;
		break;
	case 5:
		cout<<"No te juzgo, tiene que aprender que en la vida aveces te caeras y te tendras que levantar, aunque aquí sea literal"<<endl;
		break;
		
		return 0;
	}
}
	
	
	
	
	
