Pyramid,Inverse pyramid, Diamond, Hollow diamond

#include <stdio.h>

int main() {
	int n,i,j,k,x,y,z;
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    for (j=0;j<n-i-1;j++){
	        printf("  ");
	    }
	    for (z=0;z<2*i+1;z++){
	        printf("* ");
	    }
	    printf("\n");
	}
	
	for (x=n-2;x>=0;x--){
	    for (y=x;y<n-1;y++){
	        printf("  ");
	    }
	    for (z=2*x+1;z>0;z--){
	        printf("* ");
	    }
	  printf("\n");
	}
}
