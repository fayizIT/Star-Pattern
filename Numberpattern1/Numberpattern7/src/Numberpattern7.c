/*
 ============================================================================
 Name        : Numberpattern7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("1\n");
	int i,j,k=1;
	for(i=1;i<=9;i++){
		i<5?k++:k--;
		for(j=1;j<=9;j++){


			if(j<=k+k-1){
				printf("%d",j);





			}else{
				printf(" ");
			}
		}
		printf("\n");
		}

	return EXIT_SUCCESS;
}
