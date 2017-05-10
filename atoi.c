#include <stdio.h>
#include <stdbool.h>
#define BOOL bool

bool isNumericChar(char s){
  return (s >= '0' && s <= '9')? true:false;
}

int main(){
  int a = 0, i;
  char str[] = "2dr";
  for( i=0 ; i<strlen(str) ; i++){
    if (isNumericChar(str[i])==true){

      a = a*10 + str[i]-'0';
    }
  
  }
  printf("%d\n", a);   
}


