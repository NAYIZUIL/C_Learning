#include<stdio.h>
int main(){
    int hour1=0;
    int hour2=0;
    int minute1=0;
    int minute2=0;
    printf("请输入时间1:");
    scanf("%d %d",&hour1,&minute1);
    printf("请输入时间2:");
    scanf("%d %d",&hour2,&minute2);
    int ih=hour1-hour2;
    int im=minute1-minute2;
    if(im<0){
        im=60+im;
        ih--;
    }
    printf("两时间差为%d小时%d分钟",ih,im);
    return 0;
}