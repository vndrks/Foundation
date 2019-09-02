#pragma once

#include <stdio.h>

class Chapter_4_4
{
public:
	Chapter_4_4();
	virtual ~Chapter_4_4();

public:
	
	int ExamSwitch();		// Example : switch
	int ExamSwitch2();		// Example : switch2
	int ExamMoveSharp();	// Example : moveSharp
	void SetPos(int nX, int nY);
	int ExamScanCode();		// Example : scancode
	int ExamSwitchCalc();	// Example : switchcalc
	int ExamSwitchScore();	// Example : switchscore
};

