/*
 * Created:		2022-01-22
 * Filename:	misc.h
 * Author:		StarGate - One
 * Project:		How to program a text adventure in C
 * Lesson:		08-North-South-East-West
*/
#ifndef _MISC_H_
#define _MISC_H_

typedef enum
{
	distSelf,
	distHeld,
	distHeldContained,
	distLocation,
	distHere,
	distHereContained,
	distOverthere,
	distNotHere,
	distUnknownObject
} DISTANCE;

extern bool isHolding(OBJECT* container, OBJECT* obj);
extern OBJECT* getPassage(OBJECT* from, OBJECT* to);
extern DISTANCE getDistance(OBJECT* from, OBJECT* to);
extern OBJECT* actorHere(void);
extern int listObjectsAtLocation(OBJECT* location);

#endif /* End _MISC_H_*/
