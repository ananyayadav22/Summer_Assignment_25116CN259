#include<stdio.h>
int main(){
    int count=0, rem, i, n;
    printf("Enter the no. to check if it is prime : ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++){

        rem=n%i;

        if(rem==0){
            count++;
        }
    }
    if(count==1){
        printf("the no. is prime");
    }
    else{
        printf("the no. is not prime");
    }
    return 0;
}