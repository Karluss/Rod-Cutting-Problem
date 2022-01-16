//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#include <stdio.h>
#include <locale.h>

int corteDaHaste(int n, int price[]){
    if (n <= 0){
        return 0;
    }
    int preco = 0;
    int lucro = preco;
    for(int i = 1; i <= n; i++){
        preco = price[i-1] + corteDaHaste(n-i, price);
        if (preco > lucro){
            lucro = preco;
        }
    }
    return lucro;

}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int length[] = {1,2,3,4,5,6,7,8,9,10};
    int price[] = {1,5,8,9,10,17,17,20,24,30};
    int haste;

    printf("Insira o tamanho da haste(de 1 a 10): ");
    scanf("%d", &haste);

    printf("Lucro pelo corte da haste é %d", corteDaHaste(haste,price));

}
