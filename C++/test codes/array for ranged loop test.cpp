#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#define constante 10
using namespace std;


int main (){
setlocale(LC_ALL, "portuguese");
	
    /*declarando o tipo de dados que será lido e dando o nome a essa variavel que percorre de "passadas" */
    string nomes [] {"Rafael", "Rodolfo", "Rodrigo"};
for (string passadas : nomes){
	cout << passadas << "\n";
}

    /*também tem como, ao inves de declarar o tipo da variavel "passadas", 
    usar a palavra reservada "auto" para ele definir automaticamente o seu tipo */
        string nomes [] {"Rafael", "Rodolfo", "Rodrigo"};
for ( auto passadas : nomes){
	cout << passadas << "\n";
}

/*vetores dinâmicos: consegue receber valores no meio do processamento, por conta da função nomeVar.push_back(numero); */
vector <int> nomeVar =  {7, 5, 16, 8};

//processamento que recebe dados a mais para o vetor dinamico
nomeVar.push_back(25);
nomeVar.push_back(13);

//saida
for (int passadas : nomeVar){
		cout << passadas << " ";
}
system("PAUSE");
return 0;
}