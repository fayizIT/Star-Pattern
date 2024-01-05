/*
 ============================================================================
 Name        : Numberpattern4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,flag;
	for(i=1;i<=5;i++){
		flag=1;
		for(j=1;j<=9;j++){
			if(j<=2*i-1){
				if(flag==1)
				printf("1");

				else
					printf("*");
					flag=1-flag;

			}else
				printf(" ");

		}
		printf("\n");

	}
	return EXIT_SUCCESS;
}
