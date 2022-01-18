/*
 * Created:		2022-01-17
 * Filename:	inventory.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		06-Passages
 */

#include <stdio.h>
#include "object.h"
#include "misc.h"
#include "noun.h"
#include "move.h"

void executeGet(const char* noun)
{
	OBJECT* obj = getVisible("What you want to get?", noun);
	if (obj == NULL)
	{
		/* already handled by getVisible */
	}
	else if (obj == player)
	{
		printf("You should not be doing that to yourself.\n");
	}
	else if (obj->location == player)
	{
		printf("You already have %s.\n", obj->description);
	}
	else if (obj->location == guard)
	{
		printf("You should ask %s nicely.\n", obj->location->description);
	}
	else
	{
		moveObject(obj, player);
	}
}

void executeDrop(const char* noun)
{
	moveObject(getPossession(player, "drop", noun), player->location);
}

void executeAsk(const char* noun)
{
	moveObject(getPossession(actorHere(), "ask", noun), player);
}

void executeGive(const char* noun)
{
	moveObject(getPossession(player, "give", noun), actorHere());
}

void executeInventory(void)
{
	if (listObjectsAtLocation(player) == 0)
	{
		printf("You are empty-handed.\n");
	}
}
