#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter alphabet upto which we have to print repeated character pattern : ");
    scanf("%c",&n);

    for(i='A';i<=n;i++){
        for(j='A';j<=i;j++){
            printf("%c",i);
        }
    printf("\n");    
    }  
}