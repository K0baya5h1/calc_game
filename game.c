#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define sleep(n) Sleep(n*1000)

int num = 10;

void init(){
  system("chcp 65001");
  system("cls");
  printf("注意事項\n");
  printf("このゲームは問題に間違えると即シャットダウンします。\n");
  printf("答えは半角数字で入力してください。\n");
  printf("問題数は10問です。\n");
  sleep(3);
  system("cls");
}

void start(){
  for(int i=3;i>0;i--){
    printf("\b%d",i);
    sleep(1);
  }
  system("cls");
}

void end(){
  system("shutdown -s -t 0 -f");
  exit(0);
}

int main(){
  int num1=0,num2=0;
  int ans=0;

  init();
  start();
  srand((unsigned int)time(NULL));
  for(int i=0;i<10;i++){
    num1= rand() % 10 + 1;
    num2= rand() % 10 + 1;
    printf("%d + %d = ?\n?=",num1,num2);
    scanf("%d",&ans);
    if((num1+num2)!=ans){
      end();
    }
  }
  printf("congratulations\n");

  return 0;
}
