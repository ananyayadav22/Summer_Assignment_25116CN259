#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the no. to find prime factors :- ");
    scanf("%d",&n);
    printf(" prime factors are :");

    for (i = 2; i <= n; i++){
        if(n%i==0){
            printf("%d ",i); 
            
            while(n%i==0){
                n=n/i;
            }
        }
    }
    return 0;
}
