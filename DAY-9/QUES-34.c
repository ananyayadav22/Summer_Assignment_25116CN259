#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the no. upto which we have to print reverse no. pattern : "); 
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    printf("\n");    
    }  
}