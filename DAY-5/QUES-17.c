#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the no. to check if it is a perfect no. :- ");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;
    }   
        if(sum==n){
            printf("The no. is perfect no.");
        }
        else{
            printf("The no. is not a perfect no.");
        }
    return 0;
}