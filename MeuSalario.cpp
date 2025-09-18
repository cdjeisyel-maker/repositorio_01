#include <iostream>
using namespace std;

int main(){

    float salarioHora;
    int horasTrabalhadas;
    double salarioBruto;
    float impostoDeRenda;
    float INSS;
    double salarioLiquido;

    cout << "Digite seu salario Hora: ";
    cin >> salarioHora;
    cout << "Digite a quantidade de horas que você trabalhou no mês: ";
    cin >> horasTrabalhadas;
    salarioBruto = salarioHora * horasTrabalhadas;
    impostoDeRenda = salarioBruto * 0.11;
    INSS = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - impostoDeRenda - INSS;  
    cout << "Seu salário bruto é: " << salarioBruto << endl;
    cout << "Seu salário líquido é: " << salarioLiquido << endl;
    cout << "O valor do imposto de renda é: " << impostoDeRenda << endl;
    cout << "O valor do INSS é: " << INSS << endl;  
    return 0;
    
}