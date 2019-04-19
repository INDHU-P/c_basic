#include<stdio.h>
main(){
	int array[10][10][10],i,j,k,a,b,c;
	printf("Enter dimensions axbxc \n");
	scanf("%d %d %d",&a,&b,&c);
		for(i = 0;i<a;i++){
			for(j=0;j<b;j++){
				for(k=0;k<c;k++){
					scanf("%d",&array[i][j][k]);
					}}}
		for(i = 0;i<a;i++){
			for(j=0;j<b;j++){
				for(k=0;k<c;k++){
					printf("%d \t",array[i][j][k]);
					}
				printf("\n");}
			printf("\n");}
	}
