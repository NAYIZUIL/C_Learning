#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch(type){
      case 1://case后面只能跟常量
      printf("Good morning!");
      break;
      case 2:
      printf("What can I say?");
      break;
      case 3:
      printf("It is time to sleep.");
      break;
      case 4:
      printf("Are you happy today?");
      break;
      case 5:
      printf("It is time,right?I know you win!");
      break;
      default:
      printf("You are always the best girl in the world!");
      break;


    }
    return 0;
    
}