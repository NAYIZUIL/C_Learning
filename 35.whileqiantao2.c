//输入N得到N位数里面的水仙花数
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    //如果N是3那么取值范围是100~999
    int i=1;
    int first=1;
    while(i<N){
        first*=10;
        i++;
    }
    i=first;
    while(i<first*10){
        int d=i;
        int j;
        int sum=0;
        do{
            j=d%10;
            d/=10;
            int k=0;
            int n=1;
            while(k<N){
                n*=j;
                k++;
            }
             sum+=n;
        }while(d>0);
        if(sum==i){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}//徒手搓出来居然就一个错误太牛了！