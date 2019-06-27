#include "pch.h"
#include "PPL.h"

using namespace std;

	void PPL::Out(ofstream& ofst)
	{
		ofst << Name << " is a procedural programming language. Year of creating " << Year << endl;
		if (IsAbstruct)
		{
			ofst << "\tThis language supports abstruct type." << endl;
		}
		else
		{
			ofst << "\tThis language does not support abstruct type." << endl;
		}
	}