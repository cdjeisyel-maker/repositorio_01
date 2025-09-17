   #include <iostream>
    using namespace std;
    
    int main() {
        string nome;
        int notaA, notaB, notaC;
    cout << "Digite o nome do aluno: ";
    cin >> nome;
    cout << "Digite a nota A: ";
    cin >> notaA;
    cout << "Digite a nota B: ";
    cin >> notaB;
       cout << "Digite a nota C: ";
    cin >> notaC;

    float media = (notaA + notaB + notaC) / 3.0;

    cout << "-----------------------" << endl;
    cout << "Aluno: " << nome << endl;
    cout << "Média: " << media << endl;
    cout << "Nota A: " << notaA << "notaB: " << notaB << "Nota C: " << notaC << endl;
    if(media >= 7.0){
        cout << "Aprovado!" << endl;
    }else if(media >= 5.0 && media < 7.0){
        cout << "Recuperação!" << endl;
    }else{
        cout << "Reprovado!" << endl;
    }
    cout << "-----------------------" << endl;
    return 0;
}