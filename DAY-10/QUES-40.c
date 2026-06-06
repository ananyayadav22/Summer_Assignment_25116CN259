#include<stdio.h>
int main(){
    char n,i,j;
    printf("Enter no. to print character pyramid pattern : ");
    scanf("%c",&n);

    for(i='A';i<=n;i++){
        for(j=n-i;j>=0;j--){
            printf(" ");
        }
        for(j='A';j<=i;j++){
            printf("%c",j);
        }
        for(j=i-1;j>='A';j--){
            printf("%c",j);
        }
        printf("\n");
    }
}            