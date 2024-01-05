/*
 ============================================================================
 Name        : mysirg1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k;
	for(i=1;i<=4;i++){
		k='1';
		for(j=1;j<=8;j++){
			if(j>=5-i && j<=4+i){
				printf("%c",k);
				k++;
			}else
			printf(" ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
