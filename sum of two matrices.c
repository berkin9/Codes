#include<stdio.h>    

void main(){
	int m1[3][3],m2[3][3],sum[3][3],i,j,k; 

	printf("Enter the first of matrix(3x3):\n");    
	for(i=0;i<3;i++){    
		for(j=0;j<3;j++){    
			scanf("%d",&m1[i][j]);    
		}    
	}    

	printf("Enter the second matrix(3x3):\n");   
	for(i=0;i<3;i++){    
		for(j=0;j<3;j++){    
			scanf("%d",&m2[i][j]);    
		}    
	}
    
	for(i=0;i<3;i++){    
		for(j=0;j<3;j++){    
			sum[i][j]=0;
				for(k=0;k<3;k++){    
					sum[i][j]=m1[i][j]+m2[i][j];    
				}    
		}    
	} 
	
	printf("sum matrix is:\n");
	for(i=0;i<3;i++){    
		for(j=0;j<3;j++){    
			printf("%d\n",sum[i][j]);    
		}    
	} 
}  
