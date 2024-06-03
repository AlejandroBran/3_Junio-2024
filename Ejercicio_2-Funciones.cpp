#include <iostream>

using namespace std;

int suma(int entero1, int entero2){
int resultado=0;
resultado = (entero1 + entero2);
return resultado;
}

int resta(int entero1, int entero2){
int resultado=0;
resultado = (entero1 - entero2);
return resultado;
}

int multiplicacion(int entero1, int entero2){
int resultado=0;
resultado = (entero1 * entero2);
return resultado;
}

float division(float entero1, float entero2){
float resultado=0;
resultado = (entero1 / entero2);
return resultado;
}



int main(){
    float n1 = 0;

    float n2 = 0;

    int respuesta1 = 0;

    int respuesta2 = 0;

    int respuesta3 = 0;

    float respuesta4 = 0;
cout << "Ingrese n1: ";
cin >> n1;

cout <<"\nIngrese n2: ";
cin >> n2;

    respuesta1=suma(n1, n2);
    respuesta2=resta(n1,n2);
    respuesta3=multiplicacion(n1,n2);
    respuesta4=division(n1,n2);

    cout << "\n<|||>El valor de la suma de dos numeros<|||>.  "<<respuesta1<<"\n";
    cout << "\n<|||>El valor de la resta de dos numeros<|||>.  "<<respuesta2<<"\n";
    cout << "\n<|||>El valor de la multiplicacion de dos numeros<|||>.  "<<respuesta3<<"\n";
    cout << "\n<|||>El valor de la division de dos numeros<|||>.  "<<respuesta4<<"\n";



    

 return 0;
}
    
    



