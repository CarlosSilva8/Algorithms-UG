                        

#include <iostream> // Inclue o código da biblioteca iostream input output stream
using namespace std; /*  em C++ serve para importar todo o conteúdo do namespace padrão (çãd) para oúescopo atuál,
            eliminando a necessidade de prefixar elementos da biblioteca padrão (como cout, cin, vector) com std::.*/

/* void é um ponteiro genérico que ocupa um endereço de memória sem especificar o tipo de dado
Uso o Void como forma de escrever diversos blocos de código
e executá-los individualmenmte na função main
Bloco 1 - Introdução ao C++               */
void bloco1() {
    cout << "Rodando bloco 1:\n" << endl;
    cout << "Hello World!" << endl; // cout é a função character output que está na biblioteca iostream
    cout << "Boa tarde, " << "Carlos." << endl; // endl pula a linha
}

// Bloco 2 - Data Types, Variables and Input Output
void bloco2() {
    float x, y, z; // Variável precisa ter seu tipo declarado corretamente
    string deus_ex_machina;
    cout << "Rodando bloco 2:\n" << endl;
    x = 2.1;
    y = 0.6;
    z = x * y; 
    deus_ex_machina = "O que eu posso fazer?";
    cout << deus_ex_machina<< endl << x << ", " << y << endl << z;
    /* 
    Tipos de dados:
    int: 1, 0, -50, 100
    float: 0.5, 3.7
    bool: true, false
    string: "Ola mundo"
    char: "a", "x", "8", ":"
*/
}
/*
Bloco 3 - User Input and Constants           */
void bloco3(){
   
    cout << "Executando o Bloco 3:\n";
     /*
    float n;
    const float gravidade = -9.8; // Variável constante
    cout << "Digite um numero: " << endl;
    cin >> n;  //character input junto com o operador de extração ">>"
    cout << "Voce digitou: " << n << endl;
    */
    int n, x;
    cout << "Digite o primeiro numero: " << endl;
    cin >> n;
    cout << "Digite o segundo numero: " << endl;
    cin >> x;
    cout << "\nResultados:\n" << n << endl << x;
}

// Função Main gerencia o inicio, execução e finalização das tarefas. Int indica que ao final da execução, um número inteiro será retornado
int main() {
    bloco3();
    return 0; // retorna o zero como indicativo de sucesso na execução do bloco. Process returned 0 (0x0)   execution time : 1.407 s

} // Todo o bloco dentro das chaves é executado em uma run em ordem sequencial



