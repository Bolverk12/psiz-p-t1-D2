#pragma once
#ifndef LIST_H
#define LIST_H

typedef struct List {
	char* pPlateNum;
	time_t entryTime;
	struct List* pNext;
} List;

List*initList(void);
void deinitList(List* pRoot);
void addCar(List* pRoot, char* plateNum);
void removeCar(List* pRoot, char* plateNum);
void printAll(List* pRoot); // print out all from the list
int numberOfElements(List* pRoot);

#endif // !LIST_H
