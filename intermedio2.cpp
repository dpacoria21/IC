#include <iostream>
#include <conio.h> 
#include <stdlib.h>
#include <time.h> 
//Problema:
//Simular un lanzamiento de n dados para m concursantes, indicar el ganador con su respectivo puntaje
using namespace std;
int Dado(int a);
int main(){
	int n,m,dado1;
	srand(time(NULL));
	cout<<"Ingrese número de dados a lanzar: ";   cin>>n;
	cout<<"Ingrese número de personas a jugar: "; cin>>m;  
    int per[m];
	for(int i=0;i<m;i++){
		per[i]=Dado(n); 
	}
	int max=0;
	for(int j=0;j<m;j++){
		cout<<"Player "<<j+1<<"---->"<<per[j]<<endl;
		if(per[j]>=max){
			max=per[j];
		}
		else if(per[j]<=max){
			max=max;
		} 
	}
	int contador=0;
	cout<<"Los Ganadores son: "<<endl; 
	for(int k=0;k<m;k++){
		if(per[k]==max){
			cout<<"El player "<<k+1<<" "<<"obtuvo el mayor puntaje: "<<max<<endl; 
			contador++;
		}
		else{
		}	
	}
	return 0; 
} 
int Dado(int a){
	int suma=0;
	for(int i=0;i<a;i++){
		int alea=rand()%(6-1+1)+1;
		suma=suma+alea; 
		alea=0; 
	}
	return suma; 
}

