int sum(int a){
if(a==0){
   return 0;
}
else{
    return a%10+sum(a/10);
}  
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. to find sum : ");
    scanf("%d",&n);
    printf("The sum is : %d",sum(n));
    return 0;
}