
#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int n1, n2, suma = 0, resta = 0, divicion = 0, multiplicacion = 0, raiz = 0;
	
	cout<<"\tBienvenido a tu calculadora virtual"<<endl;
	
	cout<<"Digite un numero: "; cin>>n1;
	
	cout<<"Digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	divicion = n1 / n2;
	multiplicacion = n1 * n2;
	raiz = pow(n1,n2);
	
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	cout<<"El resultado de la resta es: "<<resta<<endl;
	
	cout<<"El resultado de la divicion es: "<<divicion<<endl;
	
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
	
	cout<<"El resultado de la raiz es: "<<raiz<<endl;
	
	cout<<"Espero te haya ayudado, ten un buen dia:)";
	
	cout<<"Hecho por Luz3 y EmanuelUnk" ;
	
}
