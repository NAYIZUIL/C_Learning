#include<stdio.h>
int main(){
    const double RATE=8.25;
    const int STANDRAD=40;
    double pay=0.0;
    int hours;
    printf("请输入您工作几小时：\n");
    scanf("%d",&hours);
    if(hours>STANDRAD){
        pay=STANDRAD*RATE+(hours-STANDRAD)*(RATE*1.5);
    }else{
        pay=STANDRAD*RATE;
    }
    printf("您的工资是:%f美元",pay);
    return 0;
}