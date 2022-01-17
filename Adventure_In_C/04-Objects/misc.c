/*
 * Created:		2022-01-16
 * Filename:	misc.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		04-Objects
 */

#include <stdio.h>
#include "object.h"

int listObjectsAtLocation(OBJECT *location)
{
	int count = 0;
	OBJECT* obj;
	for (obj = objs; obj < endOfObjs; obj++)
	{
		if (obj != player && obj->location == location)
		{
			if (count++ == 0)
			{
				printf("You see:\n");
			}
			printf("%s\n", obj->description);
		}
	}
	return count;
}