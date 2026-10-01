#include<stdio.h>
int main(){
    int hour1,munite1;
    int hour2,munite2;
    printf("请输入靠后的时间点：");
    scanf("%d %d",&hour1,&munite1);
    printf("请输入靠前的时间点：");
    scanf("%d %d",&hour2,&munite2);
    int t1=hour1*60+munite1;
    int t2=hour2*60+munite2;
    int t=t1-t2;
    printf("时间差是%d小时%d分钟",t/60,t%60);
    return 0;
}