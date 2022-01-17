/*
 * Created:		2022-01-16
 * Filename:	location.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		04-Objects
 */

#include <stdio.h>
#include <string.h>
#include "object.h"
#include "misc.h"
#include "noun.h"

void executeLook(const char* noun)
{
	if (noun != NULL && strcmp(noun, "around") == 0)
	{
		printf("You are in %s.\n", player->location->description);
		listObjectsAtLocation(player->location);
	}
	else
	{
		printf("I do not understand what you want to see.\n");
	}
}

void executeGo(const char* noun)
{
	OBJECT* obj = getVisible("Where you want to go?", noun);
	if (obj == NULL)
	{
		/* already handled in getVisible */
	}
	else if (obj->location == NULL && obj != player->location)
	{
		printf("OK.\n");
		player->location = obj;
		executeLook("around");
	}
	else
	{
		printf("You cannot get much closer than this.\n");
	}
}