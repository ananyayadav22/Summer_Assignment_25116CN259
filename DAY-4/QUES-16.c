#include<stdio.h>
#include<math.h>
int main(){
    int j,i,n,m,rem,sum,count;
    printf("Enter the lower limit to find armstrong no. in range : ");
    scanf("%d",&n);
    printf("Enter the upper limit to find armstrong no. in range : ");
    scanf("%d",&m);
    printf("Armstrong no. in the range are :\n");

    for(i=n;i<=m;i++){
        count=0;
        sum=0;
    j=i;    
    while(j>0){
        count++;
        j=j/10;
    }
    j=i;
    while(j>0){
    rem=j%10;
    sum=sum+pow(rem,count);
    j=j/10;
    }
if(sum==i){
    printf("%d\n",i);
}
}
}