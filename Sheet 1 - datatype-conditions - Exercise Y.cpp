#include <iostream>   // biblioteca para entrada e saída padrão (cin, cout)
#include <iomanip>    // biblioteca para usar setw e setfill na formatação da saída
using namespace std;  // permite usar cout, cin, setw etc. sem escrever std::

int main() {  // função principal do programa
    long long a, b, c, d;  // declara quatro variáveis inteiras grandes para receber a entrada
    cin >> a >> b >> c >> d;  // lê os quatro números digitados

    long long m = 1;  // inicializa a variável que vai acumular o produto dos restos mod 100

    m = (m * (a % 100)) % 100;  // pega os dois últimos dígitos de a, multiplica por m e mantém só os dois últimos dígitos
    m = (m * (b % 100)) % 100;  // pega os dois últimos dígitos de b, multiplica por m e mantém só os dois últimos dígitos
    m = (m * (c % 100)) % 100;  // pega os dois últimos dígitos de c, multiplica por m e mantém só os dois últimos dígitos
    m = (m * (d % 100)) % 100;  // pega os dois últimos dígitos de d, multiplica por m e mantém só os dois últimos dígitos

    cout << setfill('0') << setw(2) << m << endl;  // imprime o resultado com exatamente 2 casas, completando com zero à esquerda se necessário

    return 0;  // encerra o programa com sucesso
}
