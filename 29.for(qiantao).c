//求2~100内的素数用for的嵌套来解
#include<stdio.h>
int main(){
    int x;
    //x=2;
    int i;
    int cnt=0;
    //int isPrime=1;(isPrime绝对不能定义在外面，只有定义在for循环里面才能每次都读取为1，再进行相对的0或1的修改)
    //for(x=2;x<100;x++)
   // while(cnt<50)
   for(x=2;cnt<50;x++){
       
        int isPrime=1;
        for(i=2;i<x;i++){
            if(x%i==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d ",x);
            cnt ++;
        }
       // x++;
    }
    return 0;
}