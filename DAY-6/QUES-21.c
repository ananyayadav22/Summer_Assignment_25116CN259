#include<stdio.h>
int main(){
    int n,i=0,j,binary[32],rem;
    printf("Enter the decimal no. to convert in binary : ");
    scanf("%d",&n);
    printf("Binary no. is :-");

    while(n>0){
        rem=n%2;
        binary[i]=rem;
        i++;
        n=n/2;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    return 0;
}