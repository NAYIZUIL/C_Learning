#include<stdio.h>
int main(){
    int x;
    printf("请输入一个数：");
    scanf("%d",&x);
    int digit;
    int ret=0;
    while(x>0){
        digit=x%10;
        ret=ret*10+digit;
        printf("x=%d digit=%d ret=%d\n",x,digit,ret);
        x/=10;
    }
    printf("这个数的倒叙是%d\n",ret);
    return 0;
}