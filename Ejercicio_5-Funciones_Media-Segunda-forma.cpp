#include <iostream>

using namespace std;

float suma(float entero1, float entero2);


int main(){
    float n1 = 0;

    float n2 = 0;

    float respuesta = 0;

    n1 = 8;

    n2 = 6;

    respuesta=suma(n1, n2);
    

    cout << "\n<|||>El valor de la media es<|||>.  "<<respuesta<<"\n";

 return 0;
}

float suma(float entero1, float entero2){
float resultado=0;
resultado = (entero1 + entero2)/2;
return resultado;
}
    