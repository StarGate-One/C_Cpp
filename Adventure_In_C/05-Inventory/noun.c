/*
 * Created:		2022-01-17
 * Filename:	noun.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		05-Inventory
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "object.h"

static bool objectHasTag(OBJECT* obj, const char* noun)
{
	return noun != NULL && *noun != '\0' && strcmp(noun, obj->tag) == 0;
}

static OBJECT* getObject(const char* noun)
{
	OBJECT* obj, * res = NULL;
	for (obj = objs; obj < endOfObjs; obj++)
	{
		if (objectHasTag(obj, noun))
		{
			res = obj;
		}
	}
	return res;
}

OBJECT* getVisible(const char* intention, const char* noun)
{
	OBJECT* obj = getObject(noun);
	if (obj == NULL)
	{
		printf("I do not understand %s.\n", intention);
	}
	else if (!(obj == player ||
		obj == player->location ||
		obj->location == player ||
		obj->location == player->location ||
		obj->location == NULL ||
		obj->location->location == player ||
		obj->location->location == player->location))
	{
		printf("You do not see any %s here.\n", noun);
		obj = NULL;
	}
	return obj;
}

OBJECT* getPossession(OBJECT* from, const char* verb, const char* noun)
{
	OBJECT* obj = NULL;
	if (from == NULL)
	{
		printf("I do not understand who you want to %s.\n", verb);
	}
	else if ((obj = getObject(noun)) == NULL)
	{
		printf("I do not understand what you want to %s.\n", verb);
	}
	else if (obj == from)
	{
		printf("You should not be doing that to %s.\n", obj->description);
		obj = NULL;
	}
	else if (obj->location != from)
	{
		if (from == player)
		{
			printf("You are not holding any %s.\n", noun);
		}
		else
		{
			printf("There appears to be no %s you can get from %s.\n",
				noun, from->description);
		}
		obj = NULL;
	}
	return obj;
}