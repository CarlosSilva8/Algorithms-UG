                        

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
    double: 0.57985
    bool: true, false
    string: "Ola mundo"
    char: "a", "x", "8", ":"
    wchat_t: caracteres que usam 2 bytes ao invés de 1
    void: vazio
*/
}

// Bloco 3 - User Input and Constants           
void bloco3(){
   
    cout << "Executando o Bloco 3:\n";
     /*
    float n;
    const float gravidade = -9.8; // Variável constante
    cout << "Digite um numero: " << endl;
    cin >> n;  //character input junto com o operador de extração ">>"
    cout << "Voce digitou: " << n << endl;
    */
    int n, x, soma;
    cout << "Digite o primeiro numero: ";
    cin >> n;
    cin.clear(); // .clear() é um método usado para esvaziar contêineres da STL (como std::vector, std::string, std::map). Ele remove todos os elementos, definindo o tamanho do contêiner como 0.
    cin.ignore(1000, '\n'); // .ignore() (especificamente std::istream::ignore) é usada para extrair e descartar caracteres do buffer de entrada. Ela é fundamental para evitar erros de leitura quando você alterna entre diferentes métodos de entrada, como cin >> e getline(). 
    cout << "Digite o segundo numero: ";
    cin >> x;
    soma = n + x;
    cout << "\nResultados:\n" << soma << endl;
}

// Bloco 4 - Arithmetic 

void bloco4(){
    /*
    Aritmeticos:
    Operadores:
    Basicos: +, -, /, *
    Compostos: -=, +=, ++ (adiciona 1), -- (subtrai 1), *=, /=

    Ordem dos operadores:

    C olchetes 
    E xpoentes
    D ivisão
    M ultiplicação
    A dição
    S ubtração

    Comparação (Retornam true [1] ou false [0]):
    Maior que: <
    Menor que: >
    Menor ou igual: <=
    Maior ou igual: >=
    Diferente de: !=
    Equivalente a: == 
    */
    float x;
    double y;
    bool teste1 = 'a' < 'B'; // Maiúsculas e minúsculas possuem valores específicos em ASCII
    x = 2.00;
    y = 2;
    bool teste = x == y;
/*
    int n1, n2;
    cout << "Escreva o primeiro número: ";
    cin >> n1;
    cout << "Escreva o segundo número: ";
    cin >> n2; 
    cout << "Esses números são os mesmos? " << (n1 == n2); */
/*
    Operadores Lógicos:
    NOT: !
    AND: &&
    OR: ||
    */
    bool teste2 = !(true || !true && true) && true;
    cout << teste2;
}

// Função Main gerencia o inicio, execução e finalização das tarefas. Int indica que ao final da execução, um número inteiro será retornado
int main() {
    bloco4();
    return 0; // retorna o zero como indicativo de sucesso na execução do bloco. Process returned 0 (0x0)   execution time : 1.407 s

} // Todo o bloco dentro das chaves é executado em uma run em ordem sequencial


