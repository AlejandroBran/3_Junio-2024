#include <iostream>

using namespace std;

int suma(int entero1, int entero2){
int resultado=0;
resultado = (entero1 + entero2)/2;
return resultado;
}

int main(){
    float n1 = 0;

    float n2 = 0;

    int respuesta = 0;

    n1 = 8;

    n2 = 6;

    respuesta=suma(n1, n2);
    

    cout << "\n<|||>El valor de la media es<|||>.  "<<respuesta<<"\n";

 return 0;
}
    