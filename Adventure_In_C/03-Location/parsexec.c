/*
 * Created:		2022-01-15
 * Filename:	parsexec.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		Location
 */

#include "defines.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "location.h"

bool parseAndExecute(char* input)
{
	char* verb = strtok(input, " \n");
	char* noun = strtok(NULL, " \n");

	if (verb != NULL)
	{
		if (strcmp(verb, "quit") == 0)
		{
			return false;
		}
		else if (strcmp(verb, "look") == 0)
		{
			printf("Hmm... It is very much dark in here.\n");
		}
		else if (strcmp(verb, "go") == 0)
		{
			printf("Err... It is too dark to go anywhere.\n");
		}
		else
		{
			printf("Umm... I do not know how to '%s'.\n", verb);
		}
	}
	return true;
}