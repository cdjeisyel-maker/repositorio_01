#include <iostream>
using namespace std;

int main(){

    float numa, numb;
    char operacao;

    int execucao = 0;
    while(execucao == 0){
        cout << "Digite o primeiro número: ";
        cin >> numa;
        cout << "Digite o segundo número: ";
        cin >> numb;
        cout << "Digite a operação que você deseja fazer: (+ , -, *, /): ";
        cin >> operacao;
        if(operacao == '+'){
            cout << "Resultado: " << numa + numb << endl;
        }else if(operacao == '-'){
            cout << "Resultado: " << numa - numb << endl;
        }else if(operacao == '*'){  
            cout << "Resultado: " << numa * numb << endl;
        }else if(operacao == '/'){
        if(numb != 0){
            cout << "Resultado: " << numa / numb << endl;
        }else{
            cout << "Erro: Divisão pro zero!" << endl;
    }        
        }else{
                cout << "Operação inválida!" << endl;
    }
    cout << "Deseja fazer outra operação? (0 - Sim / 1 - Não): ";
    cin >> execucao;
}
}
