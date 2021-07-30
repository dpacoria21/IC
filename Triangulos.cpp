#include <iostream> 
// Cómo saber si un triángulo existe y saber si es isósceles, escanelo o equilátero
using namespace std;
int main(){
	double lado1,lado2,lado3;
	cout<<"Ingrese los 3 lados del triangulo"<<endl;
	cin>>lado1;
	cin>>lado2; 
	cin>>lado3;  
	if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){
		cout<<"Este triangulo existe"<<endl;
		if(lado1==lado2||lado2==lado3||lado3==lado1){
			cout<<"Es un triangulo isosceles"<<endl; 
		} 
		else if(lado1==lado2 && lado2==lado3){
			cout<<"Es un triangulo equilatero"<<endl;
		}
		else if(lado1!=lado2 && lado2!=lado3){
			cout<<"Es un triangulo escaleno"<<endl;
		} 
	}
	else{
		cout<<"Este triangulo no existe"<<endl;
	} 
	return 0;
}
 
