//Hollow Square
#include <stdio.h>
int main(){
  int a=20;
  int i;
  int j;
  for (i=1;i<=a;i++) {
    for (j=1;j<=a;j++){
      if (i==1 || i==a || j==1 || j==a){
        printf("* ");
      }
      else{
        printf("  ");
      }      
    }
   printf("\n");
  }  
}
