/*
 * Created:		2022-01-16
 * Filename:	noun.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		04-Objects
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