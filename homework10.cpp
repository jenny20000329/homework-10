#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 char Eg;
 
 printf("�п�J�^��r��"); 
 scanf("%c",&Eg);
 
 if((Eg>='A')&&(Eg<='Z')){
  Eg+=32;
  printf("�ഫ�ᬰ%c\n",Eg);
 }
 else if((Eg>='a')&&(Eg<='z')){
  Eg-=32;
  printf("�ഫ�ᬰ%c\n",Eg); 
 }
 else{
  printf("�z��J�����O�^��r��\n");
 }
 
 system("PAUSE");
 return 0;
}
