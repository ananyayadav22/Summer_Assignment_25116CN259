#include<stdio.h>
int main(){
    int i,n,a;
    printf("Enter the no. to find greatest prime factor :- ");
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        while(n%i==0){
            a=i;
            n=n/i;
        }
    }
    printf("%d",a);   
    return 0;
}