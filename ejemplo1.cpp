#include <iostream>
using namespace std;
int main () {
    int n,max,A[30];
    cout<<"Ingrese el numero de elementos que desea ingresar: ";
    cin>>n;
    cout<<"INGRESE TODOS LOS NUMEROS"<<endl;
    for (int i=0; i<n; i++){
        cin>>A[i]; 
    } 
    max=A[0];
    for (int i=1; i<n; i++) {
        if (A[i] > max) {
            max=A[i];
        }
    }
    cout<<"el mayor elemento almacenado es: "<<max;
    return 0;
}   
