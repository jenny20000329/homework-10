#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 char Eg;
 
 printf("請輸入英文字母"); 
 scanf("%c",&Eg);
 
 if((Eg>='A')&&(Eg<='Z')){
  Eg+=32;
  printf("轉換後為%c\n",Eg);
 }
 else if((Eg>='a')&&(Eg<='z')){
  Eg-=32;
  printf("轉換後為%c\n",Eg); 
 }
 else{
  printf("您輸入的不是英文字母\n");
 }
 
 system("PAUSE");
 return 0;
}
