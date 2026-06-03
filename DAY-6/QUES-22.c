#include<stdio.h>
#include<math.h>
int main(){
    int i=0,n,decimal=0,rem;
    printf("Enter the binary no. to convert in decimal : ");
    scanf("%d",&n);

    while(n>0){
        rem=n%10;
        decimal=decimal+rem*pow(2,i);
        i++;
        n=n/10;
    }
printf("The decimal no. is :- %d",decimal);    
return 0;
}

