#include<stdio.h>
int main(){
    int grade;
    printf("请输入你的成绩：");
    scanf("%d",&grade);
    grade/=10;
    switch(grade){
    case 10:
    case 9:
    printf("你的成绩是A\n");
    break;
    case 8:
    printf("你的成绩是B\n");
    break;
    case 7:
    printf("你的成绩是C\n");
    break;
    case 6:
    printf("你的成绩是D\n");
    break;
    default:
    printf("你的成绩是F\n");
    break;
}
return 0;
    
    
}