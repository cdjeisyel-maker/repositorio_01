#include <iostream>
using namespace std;

int main(){
    string nome;
    int idade;
    float altura;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Altura: ";
    cin >> altura;
    cout << "Olá, " << nome << "! Você tem " << idade << " anos e sua altura é " << altura << " metros. " <<endl;

    return 0;
}