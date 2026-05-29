#include<stdio.h>
int main(){
    int rem,n,rev=0,n1;
    printf("Enter the no. to check palindrome :-");
    scanf("%d",&n);
    n1=n;

    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n1){
    printf("the no. is palindrome");
        }
    else{
     printf("the no. is not palindrome");
     }
}