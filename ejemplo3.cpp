#include <iostream>
using namespace std;
int main() {
    int aux,n,A[30];
    cout<<"Ingrese el numero de elementos que desea ingresar: ";
    cin>>n;
    for (int i=1; i<=n; i++) {
        cout<<"Ingrese el numero: ";
		cin>>A[i];
    }
    for (int i=1; i<=(n/2); i++) {
        aux=A[i];
        A[i]=A[n-i+1];
        A[n-i+1]=aux;
    }
    cout<<"El intercambio quedaria de la siguiente manera: "<<endl;
    for (int i=1; i<=n;i++) {
        cout<<A[i]<<";";
    }
    return 0;
}