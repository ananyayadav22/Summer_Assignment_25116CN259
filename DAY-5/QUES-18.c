#include<stdio.h>
int fac(int a){
    if(a==0 || a==1)
    return 1;
    else
    return a * fac(a-1);
}

int main(){
    int n,rem=0,sum=0,i;
    printf("Enter the no. to check if it is strong no. or not : ");
    scanf("%d",&n);

    i=n;
    while(i>0){
        rem=i%10;
        sum=sum+fac(rem);
        i=i/10;
    }
    if(sum==n){
        printf("the no. is strong no.");
    }
    else{
        printf("the no. is not a strong no.");
    }

}