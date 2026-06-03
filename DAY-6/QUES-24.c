#include <stdio.h>
int main(){
    int i=1,n,x;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the raised power of base : ");
    scanf("%d",&n);

    while(n>0){
        i=i*x;
        n--;
    }
    printf("The answer is : %d",i);
    return 0;
}