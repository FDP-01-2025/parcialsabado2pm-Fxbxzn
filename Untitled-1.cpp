#include <iostream>
using namespace std;

int main(){
   int nota;

   cout << "Ingresa la nota de su examen: ";
   cin >> nota;

   if (nota > 89 && 100){
    cout << "Su nota es excelente" << endl;

   } else if (nota >=
     75 && 89){
    cout << "Su nota es buena" << endl;
   
   } else if (nota > 60 && 74){
    cout << "Su nota es regular" << endl;

   } else if (nota <= 60){
    cout << "Su nota es mala" << endl;

   } else {

   }










    return 0;
}