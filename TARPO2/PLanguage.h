#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>

using namespace  std;

class PLanguage
{
public:
	int Year;
	string Name;	
	virtual void InData(ifstream &ifst) = 0;  // ввод данных из потока
	virtual void Out(ofstream &ofst) = 0;	// вывод данных в стандартный поток
};

class PLanguageFactory {
public:
	//  онструктор, обеспечивающий начальную расстановку элементов в стеке и их ранжирование
	PLanguageFactory(int m);
	static PLanguage* Make(int key);
	static PLanguage* In(ifstream &ifst);
	virtual PLanguage* Create(int key) = 0;
protected:
	int mark;
	static PLanguageFactory* top;
	PLanguageFactory* next;
};
