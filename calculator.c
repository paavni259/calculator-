#include<stdio.h>
int main(){
    float a,b ;
    int z;
    printf("enter a\n");
    scanf("%f", &a);
    printf("enter b\n");
    scanf("%f", &b);
    printf("press 1 for addition:\n");
    printf("press 2 for subtraction:\n");
    printf("press 3 for multiplication:\n");
    printf("press 4 for division\n");
    scanf("%d", &z);
    if (z==1){
        float sum = a+b ;
        printf("%f", sum);
    }
    else if (z==2){
        float sub= a-b ;
        printf("%f", sub);
    }
    else if (z==3){
        float mul= a*b ;
        printf("%f", mul);
    }
    else if (z==4){
        if (b==0){
            printf("denominator cant be zero");
        }
        else{
              float div = a/b ;
        printf("%f", div);

        }
      
    }

return 0;
    
    }