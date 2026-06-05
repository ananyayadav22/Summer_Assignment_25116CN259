#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter alphabet upto which we have to print : ");
    scanf("%c",&n);

    for(i='A';i<=n;i++){
        for(j='A';j<=i;j++){
            printf("%c",j);
        }
    printf("\n");    
    }  
}