#include <iostream>
using namespace std;

int main() {
    bool condicao = true;
    bool condicao2 = false;

    if(condicao && condicao2){
        cout << "As duas condições são verdadeiras. " <<endl;
    }
    if(condicao || condicao2){
        cout << "Pelo menos uma das condições é verdadeira. " << endl;
    }
    if(!condicao2){
        cout << "A segunda condição é falsa. " << endl;
    }
}