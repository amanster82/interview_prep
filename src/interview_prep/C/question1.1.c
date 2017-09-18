#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdbool.h>


int main(int argc, char *argv[]) { 

	char str [10] = "helo";
	int i = 0;
	int j = 0;

	for(i=0; i<strlen(str); i++){
		for(j=i+1; j<strlen(str); j++){
			if (str[i] != str[j])
				continue;
			else
				printf("not unique\n");
		}
	}

}