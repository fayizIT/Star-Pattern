/*
 ============================================================================
 Name        : mysirg4.c
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
			if(j<=5-i+1){
				printf("*");
			}else{printf(" ");}

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
