#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
/*
 En un juego de dados que consiste en lanzar 2 dados y ver su suma. Imprimir tipo
tabla las frecuencias de cada suma posible. Confirmar que el 7 es la suma con
más probabilidad. Hacer experimento con n lanzamientos
 */
int main()
{

	int dado1,dado2,suma;
	int valor7=0;//contador del valor 7 como suma
	cout<<"Ingrese la cantidad de lanzamientos"<<endl;
	int cant;
	cin>>cant;
	int array[]={0,0,0,0,0,0,0,0,0,0,0};
	srand(time(NULL));

	for(int i=0;i<cant;i++){

		suma=(rand()%(6-1+1)+1)+(rand()%(6-1+1)+1);//4 4 4 4

		for(int j=2;j<=12;j++)
		{
			if(suma==j)
			{
				array[j-2]++;
			}
		}
	}

	for(int k=0;k<11;k++)
	{
		cout<<"Suma "<<k+2<<": "<<array[k]<<" "<< (array[k]*100/cant)<<"%"<<endl;
	}

	int acumulador=0;
	for (int z=0;z<11;z++)
	{
		acumulador=acumulador+array[z];
	}
	cout<<"total de repeticiones: "<<acumulador<<endl;


	/* int aleatorio = rand()%(100-0+1)+0;
	 cout<<aleatorio;
	*/
	return 0;
}
