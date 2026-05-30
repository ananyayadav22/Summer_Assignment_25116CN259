#include<stdio.h>
int main(){
    int i,n,count=0;
    printf("Enter the no. to count digits :-");
    scanf("%d",&n);

    while(n>0){
        i=n%10;
        count++;
        n=n/10;
    }
    printf("digits of a given no. are :-%d",count);
}