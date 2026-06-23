#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("você é maior de idade.");
    }else{
        printf("Você não é maior de idade");
    }

    return 0;
}