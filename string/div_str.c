/*Program to separate subtring for a string delimited by a token*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strtok(char *str,char *delim)
{
	static char save_str[256];
	static char *run_str;
	static char tok[256];
	char *delim_save = delim;
	char found_delim = 0;
	int i = 0;
	/*save the string if it is new*/
	if (str != NULL) {
		strncpy(save_str, str, sizeof(save_str));
		run_str = save_str;
	}
	if (*run_str == 0)
		return NULL;
	for (;*run_str != 0; ++run_str) {
		for (delim = delim_save; *delim != 0; ++delim) {
			if ( *run_str != *delim) {
				tok[i] = *run_str;
			} else {
				found_delim = 1;
				break;
			}
		}
		if (found_delim) {
			++run_str;
			tok[i] = 0;
			break;
		}
		else
			i++;
	}
	return (char *)&tok;
}

int main(int argc, char *argv[])
{
	int i;
	char *str;
	char *str_save;
	char *delim_str;
	char *token;
	if (argc != 3) {
		fprintf(stderr, "usage ./div_str string delim\n");
		exit(EXIT_FAILURE);
	}

	str = argv[1];
	str_save = strdup(str);
	delim_str = argv[2];

	for (;;str = NULL) {
		token = strtok(str, delim_str);
		if (token == NULL)
			break;
		printf("strtok token = %s \n", token);
	}

	printf("\n");
	str = str_save;
	for (i = 0;i < 10;str = NULL,i++) {
		token = my_strtok(str, delim_str);
		if (token == NULL)
			break;
		printf("my_strtok token = %s \n", token);
	}

	printf("\n");
	str = str_save;
	for (;;) {
		token = strsep(&str, delim_str);
		if (token == NULL)
			break;
		printf("strsep token = %s , len = %d, token[0]=%x \n", token, strlen(token), token[0]);
	}

	free(str_save);
	return 0;
}
