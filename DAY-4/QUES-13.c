#include<stdio.h>
int main(){
    int a=0,b=1,c,n,i;
     printf("Enter the no. of term to create fibonacci series : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
    }
return 0;    
}