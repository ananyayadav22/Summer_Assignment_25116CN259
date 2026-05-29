#include<stdio.h>
int main(){
    int i=1,n,product=1;
    printf("Enter the no. to print table of :-");
    scanf("%d",&n);
    
    while(i<=10){
        product=n*i;
        printf("%d * %d = %d\n",n,i,product);
        i++;
    }
return 0;
}

