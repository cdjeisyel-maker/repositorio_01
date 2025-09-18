#include <iostream>
using namespace std;

int main(){

    string nome;
    float peso;
    float altura;

cout << "Digite o seu nome: ";
cin >> nome;

cout << "Qual o seu peso?: ";
cin >> peso;

cout << "Qual a sua altura?: ";
cin >> altura;

float imc = peso / (altura * altura);

cout << "-----------------------" << endl;
cout << "Nome: " << nome << endl;
cout << "Peso: " << peso << endl;
cout << "Altura: " << altura << endl;
cout << "Nome: " << nome << " peso: " << peso << " Altura: " << altura << " Cálculo IMC É: " << imc << endl;

if(imc < 18 ){
    cout << "Abaixo do peso! " << endl;
}else if(imc >= 25 && imc <= 29){
    cout << " Peso normal " << endl;
}else if(imc >= 30 && imc <= 39){
    cout << " sobrepeso " << endl  ;
}else if(imc >= 40){
    cout << "Obesidade Mórbida  " << endl;  
}
     return 0;
}

