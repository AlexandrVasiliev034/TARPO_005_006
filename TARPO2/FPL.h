#pragma once
#include "PL.h"
#include "PLanguage.h"

class FPL : public PLanguage{
public:
	enum Typing { STATIC = 1, DYNAMIC, MIXED};
	int WhatType;
	bool Islazy;
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	FPL() {}
};

class FPLFactory : public PLanguageFactory {
public:
	FPLFactory() : PLanguageFactory(3) {}

	PLanguage* Create(int key) {
		if (key == mark)
			return new FPL;
		else		
			return nullptr;	
	}
};