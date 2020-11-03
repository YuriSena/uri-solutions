#include <stdio.h>
int main(){
    int n, x, i, s=0;
        do{
            scanf("%d", &n);
        }while(n<1 || n>20);
        do{
            while(scanf("%d", &x) && x<0 || x>100000000);
                for(i=1; i<x; i++){
                    if(x%i==0){
                        s+=i;
                    }
                }
                if(s==x){
                    printf("%d eh perfeito\n", x);
                } else{
                    printf("%d nao eh perfeito\n", x);
                }

            s=0;
            n--;
        }while(n>0);


    return 0;
}