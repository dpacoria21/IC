#include <iostream>
using namespace std;

int main()
{
	cout<<"Ingrese el tamaño del arreglo"<<endl;
	int x;
	cin>>x;
	int arreglo[x];
	cout<<"Ingrese los valores:"<<endl;
	for(int i=0;i<x;i++)
	{
		cin>>arreglo[i];
	}

	for(int y=0;y<x;y++)
	{
		cout<<arreglo[y]<<" ";

	}

	return 0;
}


