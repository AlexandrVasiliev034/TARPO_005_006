#include "pch.h"
#include "OOPL.h"

using namespace std;

void OOPL::Out(ofstream& ofst)
{
	ofst << Name << " is a object oriented programming language. Year of creating " << Year << endl;

	switch (WhatInheritance)
	{
	case OOPL::Inheritance::SINGLE:
		ofst << "\tSingle inheritance." << endl;
		break;
	case OOPL::Inheritance::MULTIPLE:
		ofst << "\tMultiple inheritance." << endl;
		break;
	case OOPL::Inheritance::INTERFACE:
		ofst << "\tInheritance interface." << endl;
		break;
	default:
		break;
	}
}
