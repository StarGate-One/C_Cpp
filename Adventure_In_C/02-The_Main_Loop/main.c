/*
 * Created:		2022-01-15
 * Filename:	main.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		02-The Main Loop
 */
#include <stdbool.h>
#include <stdio.h>
#include "parsexec.h"

static char input[250] = "look around";

static bool getInput(void)
{
	printf("\n--> ");
	return fgets(input, sizeof input, stdin) != NULL;
}

int main(int argc, char* argv[])
{
	printf("Welcome to My Adventure in C Game.\n");
	while (parseAndExecute(input) && getInput());
	printf("\nI am not sure what type of game this is?\n");
	printf("\nBye!\n\n");
	return 0;
}