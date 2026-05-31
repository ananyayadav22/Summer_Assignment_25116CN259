#include<stdio.h>
int main(){
    int i,j,count,n,m;
    printf("Enter the first no. of range");
    scanf("%d",&n);
     printf("Enter the last no. of range");
    scanf("%d",&m);
    printf("prime no. in the range %d-%d\n",n,m);
    
    for(i=n;i<=m;i++){
        count=0;
        for(j=2;j<=i/2;j++){

            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            printf("%d\n",i);
        }
    }
    return 0;
}