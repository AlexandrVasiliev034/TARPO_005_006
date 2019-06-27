#include"pch.h"
#include"FPL.h"

using namespace std;

void FPL::Out(ofstream& ofst) {
	ofst << Name << " is a funcional programm language. Year of creating " << Year << endl;
	switch (WhatType)
	{
	case FPL::Typing::STATIC:
		ofst << "Static" << endl;
		break;		
	case FPL::Typing::DYNAMIC:
		ofst << "Dynamic" << endl;
		break;
	case FPL::Typing::MIXED:
		ofst << "Mixed" << endl;
		break;
	default:
		break;
	}

	if (Islazy)
	{
		ofst << "Supports lazy" << endl;
	}
	else
	{
		ofst << "does not support lazy" << endl;
	}
}