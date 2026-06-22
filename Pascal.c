//Pascal’s Triangle
#include <stdio.h>
int main(){
  int n,i,j,k,num=1;
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    for (j=1;j<=n-i;j++){
      printf(" ");
    }
    num=1;
    for(k=1;k<=i;k++){
      printf("%d ",num);
      num=num*(i-k)/k;
    }
  printf("\n");
  }  
}
