#include <iostream>
#include <conio.h>
using namespace std;
int CalcularDoble(int n);

int main(){

	int x;
	int y=0;
	int resultado;
	cout<<"ingrese un numero para saber el doble: ";
	cin>>x;
	
	resultado=CalcularDoble(x);
	
	cout<<"el doble del numero ingresado es: "<<resultado<<endl;
	getch();
	return 0;
}

int CalcularDoble(int n){
	int NumDob;
	if (n>0){
		NumDob=n*2;
	}
	else{
		NumDob=n*2;
	}
	return NumDob;
	
}