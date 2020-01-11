#include <stdio.h>
#include <stdlib.h>

int main(){
    int d,i;
    char opc;
    do{
        printf("\n\tIntroduce el n%cmero: ",163);
            scanf("%d",&d);
        printf("\n\tEstos son sus divisores:");
        printf("\n\t{ 1, ");
        for(i=2;i<d;i++){
            if(d%i==0){
                printf("%d, ",i);
            }
        }
        printf("%d }",d);
        printf("\n\n\t%cRepetir?",168);
        printf("\n\t-->(s/n) ");
            fflush(stdin);
            scanf("%c",&opc);
        for(i=0;i<100;i++){
            printf("-");
        }
    }while (opc=='s' || opc=='S');
    return 0;
}
