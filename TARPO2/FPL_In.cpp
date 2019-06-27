#include"pch.h"
#include"FPL.h"

using namespace std;

void FPL::InData(ifstream& ifst)
{
	ifst >> Name >> Year >> WhatType >> Islazy;
}

namespace {
	FPLFactory ff;
}