#include <stdio.h>

int main(){
  int a = 0, i;
  char str[] = "234";
  //printf("%c", str[1]);
  //printf("%d", str[1]);
  for( i=0 ; i<strlen(str) ; i++){
    if (48<=str[i]<=57){
      a = a*10 + str[i]-48;
    }
    printf("%d\n", a);    
  }
}
