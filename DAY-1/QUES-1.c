#include<stdio.h>
int main(){
    int i=0,n,sum=0;
    printf("Enter the number to sum :- ");
    scanf("%d",&n);

    while(i<=n){
        sum=sum+i;
        i++;
    }
printf("Sum of natural no. upto %d is %d",n,sum);
return 0;
}