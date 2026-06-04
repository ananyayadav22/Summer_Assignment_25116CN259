int fact(int a){
if(a==0 || a==1){
   return 1;
}
else{
    return a*fact(a-1);
}  
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. to find factorial : ");
    scanf("%d",&n);
    printf("The factorial is : %d",fact(n));
    return 0;
}