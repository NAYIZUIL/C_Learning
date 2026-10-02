//给一个数字用while循环求是几位数
#include<stdio.h>
int main(){
    int n=0;
    int a=0;
    printf("请输入一个数字：");
    scanf("%d",&n);
    a++;//第8、9行是为了防止输入0为0位数的情况，可以用do while的形式以删除8、9行
    n /=10;
    while(n>0){
        a++;
        n/=10;
    }
    printf("这个数字是%d位数",a);
    return 0;
}