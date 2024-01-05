/*
 ============================================================================
 Name        : Numberpattern3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k=0;
	for(i=1;i<=9;i++){
		i>5?k--:k++;



		for(j=1;j<=9;j++){
			if(j==i||j==10-i){
				printf("%d",k);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
