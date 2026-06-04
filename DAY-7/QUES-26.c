int fib(int a){
if(a==0){
   return 0;
}   
 if(a==1){
    return 1;   
}   
else{
    return fib(a-1)+fib(a-2);
}  
}

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the no. to print fibonacci series : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("%d ",fib(i));
    }
    return 0;
}