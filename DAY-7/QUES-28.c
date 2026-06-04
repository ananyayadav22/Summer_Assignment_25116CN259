int rev=0;
int reverse(int a){
if(a==0){
   return rev;
}
else{
    rev=a%10+rev*10;
    return reverse(a/10);
}  
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. to reverse the digits : ");
    scanf("%d",&n);
    printf("The reversed no. is : %d",reverse(n));
    return 0;
}