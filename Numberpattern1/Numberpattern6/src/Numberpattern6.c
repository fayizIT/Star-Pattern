/*
 ============================================================================
 Name        : Numberpattern6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	for(i=1;i<=5;i++){

		for(j=1;j<=5;j++){
			if(i==3||j==3){
				printf("0");
			}else{
				printf("1");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
