#include<stdio.h>
int main(){
    int rem,rev=0,n;
    printf("Enter the no. to reverse it :-");
    scanf("%d",&n);

    while(n>0){
        rem=n%10;
        rev=rem+10*rev;
        n=n/10;
    }
printf("reversed no. is :%d",rev);
}