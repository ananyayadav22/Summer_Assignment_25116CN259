#include<stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("Enter the no. to find factorial :-");
    scanf("%d",&n);

while(i<=n){
    fact=fact*i;
    i++;
}
printf("Factorial of a given no. is :-%d",fact);
}
