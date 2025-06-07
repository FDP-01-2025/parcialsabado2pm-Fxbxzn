#include <iostream>
using namespace std;

int main (){
   int numero;

   cout << "Pide un numro del 1-12: ";
   cin >> numero;

   if (numero < 12){
    cout << "El mes tiene 31 dias" << endl;
   } else if (numero < 11){
    cout << "El mes tiene 30 dias" << endl;
   } else if (numero < 10){
    cout << "El mes tiene 31 dias" << endl;
   } else if (numero < 9){
    cout << "El mes tiene 30 dias" << endl;
   } else if (numero < 9){
    cout << "El mes tiene 31 dias" << endl;
   } else if (numero < 8){
    cout << "El mes tiene 30 dias" << endl;
   } else if (numero < 7){
    cout << "El mes tiene 31 dias" << endl;
   } else if (numero < 6){
    cout << "el mes tiene 30 dias" << endl;
   } else if (numero < 5){
    cout << "el mes tiene 31 dias" << endl;
   } else if (numero < 4){
    cout << "el mes tiene 30 dias" << endl;
   } else if (numero < 3){
    cout << "el mes tiene 31 dias" << endl;
   } else if (numero < 2){
    cout << "el mes tiene 30 dias" << endl;
   } else if (numero < 1){
    cout << "el mes tiene 31 dias" << endl;
   } else {
    
   }



   


    return 0;
}