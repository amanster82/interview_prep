#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdbool.h>

char string[5];


int main(int argc, char *argv[]) { 

	printf("please enter a string:\n");
	char *input = readline (">>>");
	printf("input: %s\n", input);
	strcpy(string, input);
	printf("string[0] %c \n", string[0] );
	printf("string[%d] %c \n", strlen(string), string[strlen(string)]-1);
	printf("string length %d \n", strlen(string))

	int i = 0;
	int j = strlen(string)-1;
	bool flag = true;

	while(1){
		if (string[i] == string [j]) {
			printf("match\n");
			if(i-1>j && j+1<i){
				printf("it's a palindrom\n");
				break;
			}
			i++;
			j--;


		}

		else {
			printf("not a palindrom\n");
			break;
		}
	}



}