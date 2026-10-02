#include<stdio.h>
int main(){
    int n=0;
    int a=0;
    printf("请输入一个数字：");
    scanf("%d",&n);
    do{
        a++;
        n/=10;
    }while(n>0);
    printf("这个数字是%d位数",a);
    return 0;
}