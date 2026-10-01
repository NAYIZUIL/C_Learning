#include<stdio.h>
int main(){
    int x;
    int f;
    printf("请输入x的值:");
    scanf("%d",&x);
    if(x>0)
    f=-1;
    else if(x==0)
    f=0;
    else if(x<0)
    f=2*x;
    printf("%d",f);
    return 0;
}