//求和1+1/2+1/3+1/4+1/5+...+1/n使用for循环
//求和1+1/2-1/3+1/4-1/5+...+1/n使用for循环,使用sign作为分子不停反转极性
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    double sum=0.0;
    double sign=1.0;
    for(i=1;i<=n;i++){
        sum+=sign/i;
        sign=-sign;
        

    }
    printf("求和等于%f",sum);
    return 0;
    
    
}