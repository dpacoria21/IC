#include <iostream>
using namespace std;

int main()
{
	cout<<"numero de elementos"<<endl;
	int x;
	cin>>x;
	int arreglo[x];
	for(int i=0;i<x;i++)
	{
	cin>>arreglo[i];
	}
	int *puntero;
	puntero=arreglo;

	//utilizado para imprimir valores de un arreglo

	for(int j=0;j<x;j++)
	{
		cout<<"Elemento ["<<j<<"]"<<*puntero++<<endl;
	}


	//puntero usado para imprimir direcciones de memoria de un arreglo

	for(int k=0;k<x;k++)
		{
			cout<<"Posicion de memoria ["<<k<<"]"<<puntero++<<endl;
		}
}




