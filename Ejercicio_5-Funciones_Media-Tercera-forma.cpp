#include <iostream>

using namespace std;

float suma(float entero1, float entero2){
float resultado=0;
resultado = (entero1 + entero2)/2;
return resultado;
}

int main(){
    float n1 = 0;

    float n2 = 0;

    float respuesta = 0;

    cout << "\nIngrese n1: ";
    cin >> n1;

    cout << "\nIngrese n2: ";
    cin >> n2;

    respuesta=suma(n1, n2);
    

    cout << "\n<|||>El valor de la media es<|||>.  "<<respuesta<<"\n";

 return 0;
}