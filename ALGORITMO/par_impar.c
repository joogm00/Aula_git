#include <stdio.h>

int ehpar(int n){
    if(n % 2 == 0){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    int r;

    r = ehpar(5);

    if(r == 1){
        printf("numero PAR");
    }else{
        printf("numeor IMPAR");
    }

    return 0;
}