#pragma once
class Chapter_9_3
{
public:
	int ArrayC();			// Example : ArrayC
	int RandArray();		// Example : RandArray
	int EratosThenes();		// Example : ErotosThenes

	int AlphaNum();			// Problem : AlphaNum
	
	int PrintTomorrow();	// Example : PrintTomorrow
	int RandTable();		// Example : RandTable

	int GameMessage1();		// Example : GameMessage1
	int GameMessage2();		// Example : GameMessage2
	int GameMessage3();		// Example : GameMessage3

	int PrintTomorrow2();	// Problem : PrintTomorrow2

	int Revolution1();
	int Revolution2();

private:
	void	_clrscr();
	int		_Random(int nMax);
	int		_PrintTomorrow(int nMonth, int nDay);
	void	_Congratulation(int nCount);
	void	_Congratulation2(int nCount);
	void	_Congratulation3(int nCount);
	int		_PrintTomorrow2(int nYear, int nMonth, int nDay);
};

