/*
 * Created:		2022-01-22
 * Filename:	location.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		08-North-South-East-West
 */

#include <stdbool.h>
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
	switch (getDistance(player, obj))
	{
	case distOverthere:
		printf("OK.\n");
		player->location = obj;
		executeLook("around");
		break;
	case distNotHere:
		printf("You do not see any %s here.\n", noun);
		break;
	default:
		if (obj->destination != NULL)
		{
			printf("OK.\n");
			player->location = obj->destination;
			executeLook("around");
		}
		else
		{
			printf("You cannot get much closer than this.\n");
		}
	}
}