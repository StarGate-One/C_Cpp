/*
 * Created:		2022-01-19
 * Filename:	object.h
 * Author:		StarGate - One
 * Project:		How to program a text adventure in C
 * Lesson:		07-Distance
*/
#ifndef _OBJECT_H_
#define _OBJECT_H_

typedef struct object
{
	const char*    description;
	const char*    *tags;
	struct object* location;
	struct object* destination;
} OBJECT;

extern OBJECT objs[];

#define field		(objs + 0)
#define cave		(objs + 1)
#define silver		(objs + 2)
#define gold		(objs + 3)
#define guard		(objs + 4)
#define player		(objs + 5)
#define intoCave	(objs + 6)
#define exitCave	(objs + 7)
#define wallField	(objs + 8)
#define wallCave	(objs + 9)

#define endOfObjs	(objs + 10)

#endif /* End _OBJECT_H_*/
