/*
 ============================================================================
 Name        : Numberpattern1.c
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
		k=1;
	for(j=1;j<=7;j++){
			if(j<=i+i-1){
				printf("%d",2*k);
				j<((i+i)/2)? k++:k--;
			}
				else{
					printf(" ");
				}

			}


		printf("\n");
	}
	return EXIT_SUCCESS;
}
