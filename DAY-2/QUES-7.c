#include<stdio.h>
int main(){
    int i,n,pro=1;
    printf("Enter the no. to find product of it's digits :-");
    scanf("%d",&n);

    while(n>0){
        i=n%10;
        pro=pro*i;
        n=n/10;
    }
    printf("the product of digits is :%d",pro);
}