#include <stdio.h>
int main(){
    int i=0,n;
    printf("Enter the no. to find it's set bits : ");
    scanf("%d",&n);

    while(n>0){
       if(n&1){
        i++;
       }
     n=n>>1;  
    }
    printf("The set bits are : %d",i);
}    