#include <stdio.h>

int main() {
  int a[5], aux[5];
  int n, i = 0, j = 0, flag = 0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
  for(j = 0; j<5; j++){
  	aux[j] = a[j];	
  }

  for (i=0; i<n; i++) {
	for(j = 0; j<5; j++){
		aux[j] = aux[j] - 1;	
	}
	flag = 0;

	if(aux[0] == 0){
		printf("0");
		aux[0] = a[0];
		flag = 1;
	}	
	if(aux[1] == 0){
		printf("1");	
		aux[1] = a[1];
		flag = 1;
	}
	if(aux[2] == 0){
		printf("2");	
		aux[2] = a[2];
		flag = 1;	
	}
	if(aux[3] == 0){
		printf("3");	
		aux[3] = a[3];
		flag = 1;
	}
	if(aux[4] == 0){
		printf("4");	
		aux[4] = a[4];
		flag = 1;
	}
	if(flag == 0){
		printf("-");
	}

	printf("\n");
  }

  return 0;
}
