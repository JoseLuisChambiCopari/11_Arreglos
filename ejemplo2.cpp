#include <iostream>
using namespace std;
int main() {
    int n,s,A[30],maximo;
    float prom;
    cout<<"Ingrese la cantidad de elementos que desea ingresar: ";
    cin>>n;
    s=0;
    for ( int i=0; i<n; i++){
        cin>>A[i];
        s=s+A[i]; 
    }
    prom=s/n;
    cout<<"Los numeros mayores del promedio son: "<<endl;
    for ( int i=0;i<n; i++) {
        if (A[i] > prom) {
            cout<<A[i]<<endl; 
        }
    }
    maximo = A[0];
    for(int i = 0;i < n; i++) {
        if(A[i] > maximo) {
            maximo = A[i];
        }
    }
    cout << "El numero mayor ingresado es: " << maximo << endl;
    return 0;
}