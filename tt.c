#include <stdio.h>
#include <stdlib.h>

void multiplication(int a){
    int i, n;
    printf("la table de multiplication de %d est \n", a);
    for(i=0;i<=10;i++){
        printf("%d x %d = %d \n", a, i, a*i);
    }
printf(".......................\n");
    printf("veuillez entrer la denominateur:\n");
    scanf("%d", &n);
for(i=0;i<=10;i++){
      if(a*i % n == 0 ){
       printf("%d x %d = %d \n", a, i, a*i);

    }
    }
}


int main(){

    int N;
          printf("veuiller entrer la valeur de N:");
          scanf("%d", &N);
          multiplication(N);
          return 0;
          }
