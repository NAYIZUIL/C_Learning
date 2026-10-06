//给出对应元数用1角，2角，5角算出相应组合，用for循环求解
#include<stdio.h>
int main(){
    int x;
    int exit=0;
    printf("请输入您要组合的元数");
    scanf("%d",&x);
    int one,two,five;
    for(one=1;one<x*10;one++){
        for(two=1;two<x*10/2;two++){
            for(five=1;five<x*10/5;five++){
            if(x*10==one*1+two*2+five*5){
                printf("%d元可以由%d个一角和%d个两角和%d个五角组成\n",x,one,two,five);
               // exit=1;
               //break;
               goto out;
            }
        }
        //if(exit==1)break;
        }
        //if(exit==1)break;
    }
   out:
    return 0;
    }
    
