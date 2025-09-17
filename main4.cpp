#include <iostream>
using namespace std;

int main() {

    int notaA, notaB, notaC;
    cout << "Digite a nota A: ";
    cin >> notaA;
    cout << "Digite a nota B: ";
    cin >> notaB;
    cout << "Digite a nota C: ";
    cin >> notaC;
    cout << "As notas digitadas foram: " << notaA << ", " << notaB << " e " << notaC << endl;
    cout << "A nota A + a nota B é: " << notaA + notaB << endl;
    cout << "A nota A - a nota B é: " << notaA - notaB << endl;
    cout << "A nota A * a nota B é: " << notaA * notaB << endl;
    cout << "A nota A / a nota B é: " << notaA / notaB << endl;
    cout << "A nota A % a nota B é: " << notaA % notaB << endl;
    cout << "A média das notas é: " << (notaA + notaB + notaC) / 3 << endl;

    int notas =  notaA + notaB + notaC;
    cout << "A soma das notas é: " << notas << endl;
    cout << "A soma das notas é: " << (notaA + notaB + notaC) << endl;

    return 0;
}