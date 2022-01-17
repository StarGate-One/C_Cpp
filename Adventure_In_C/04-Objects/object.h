/*
 * Created:		2022-01-16
 * Filename:	object.h
 * Author:		StarGate - One
 * Project:		How to program a text adventure in C
 * Lesson:		03-Locations
*/
#ifndef _OBJECT_H_
#define _OBJECT_H_

typedef struct object
{
	const char*    description;
	const char*    tag;
	struct object* location;
} OBJECT;

extern OBJECT objs[];

#define field		(objs + 0)
#define cave		(objs + 1)
#define silver		(objs + 2)
#define gold		(objs + 3)
#define guard		(objs + 4)
#define player		(objs + 5)

#define endOfObjs	(objs + 6)

#endif /* End _OBJECT_H_*/
