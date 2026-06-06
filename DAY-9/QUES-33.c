#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter no. of rows to print reverse star pattern : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
    printf("\n");    
    }  
}