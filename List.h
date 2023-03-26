#pragma once

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;

struct Ring
{
	int data;
	Ring* next;
};

using pRing = Ring*;

pRing Push_List(pRing head, int data);
void PrintRing(pRing ring);
void Task(pRing& p, pRing& q, int k, int L);