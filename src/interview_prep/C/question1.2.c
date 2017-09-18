#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char * str){

	char * end;
	int len = strlen(str)-1;
	char forward [10];
	int i = 0;
	char temp[10];
	
	printf("it gets here\n");
	printf("str %s\n", str );
	printf(">>>%s\n", str+len);

	while(i<=len){

		printf("and it goes\n");
		end = str+len-i;
		printf("end %s\n", end );
		strcpy(forward, end);

		temp[i] = forward[strlen(forward)-i];

		printf("temp %s\n", temp);

		
		i++;
	}

	str = forward;


	printf("this is temp: %s\n", temp );

	printf("this is temp[1]: %c\n", temp[1]);
	printf("%s\n", forward);

}


int main(int argc, char *argv[]) { 

	reverse("hello");
}
