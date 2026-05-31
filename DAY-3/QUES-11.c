#include<stdio.h>
int gcd( int a,int b){

    int result=((a<b)? a:b);
    while(result>0){
        if(a%result==0 && b%result==0){
            return result;
        }
        result--;
    }
}

int main(){
    int a,b;
    printf("Enter the first no. : ");
    scanf("%d",&a);
    printf("Enter the second no. : ");
    scanf("%d",&b);
    printf("The gcd of the given numbers is : %d",gcd(a,b));
return 0;
}