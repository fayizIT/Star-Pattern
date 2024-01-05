/*
 ============================================================================
 Name        : Numberpattern5.c
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
		for(i=1;i<=6;i++){
			for(j=1;j<=6;j++){
				if(j<=6-i+1){
					if( (i+j)%2==0)
						printf("*");
					else
					printf("1");
				}else
					printf(" ");

			}
			printf("\n");

		}
	return EXIT_SUCCESS;
}
