#include<stdio.h>
main(){
	int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2,k;
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

	if(c1==r2){

		printf("Input a matrix \n ");
		for(i = 0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
				}
			}


		for(i = 0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d \t",a[i][j]);
				}
			printf("\n");
			}

		printf("Input a matrix \n ");

		for(i = 0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
				}
			}

		
		
	
		for(i = 0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d \t",b[i][j]);
				}
			printf("\n");
			}

		for(i = 0;i<r2;i++){
			for(j=0;j<c1;j++){
				c[i][j]=0;
				}
			}


		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<c1;k++){
					c[i][j] += a[i][k]*b[k][j];
					}
				}
			}
		printf("Result : \n");
		for(i = 0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d \t",c[i][j]);
				}
			printf("\n");
			}

			}
	else{printf("Cannot Multiply \n ");}	
}

