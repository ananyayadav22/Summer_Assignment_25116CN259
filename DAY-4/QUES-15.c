#include<stdio.h>
#include<math.h>
int main(){
    int n,n1,rem,sum=0,count=0;
    printf("Enter the no. to check if it is armstrong or not : ");
    scanf("%d",&n);

n1=n;
    while(n1>0){
        count++;
        n1=n1/10;
    }
n1=n;

while(n1>0){
    rem=n1%10;
    sum=sum+pow(rem,count);
    n1=n1/10;
}
if(sum==n){
    printf("The no. is armstrong");
}
else{
    printf("The no. is not armstrong");
}
}