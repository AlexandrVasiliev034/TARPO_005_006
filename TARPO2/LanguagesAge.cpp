#include"pch.h"
#include<time.h>
#include<ctime>
#include"PLanguage.h"
#include"FPL.h"
#include"OOPL.h"
#include"PPL.h"
#include"Container.h"

using namespace std;

int CurrentDate(PLanguage* pl)
{
	time_t t;
	struct tm nabor;
	time(&t);
	localtime_s(&nabor, &t);

	PPL* ppl = nullptr;
	OOPL* oopl = nullptr;
	FPL* fpl = nullptr;

	if ((ppl = dynamic_cast<PPL*>(pl)) != nullptr)
	{
		return ((nabor.tm_year + 1900) - ppl->Year);
	}
	else if ((oopl = dynamic_cast<OOPL*>(pl)) != nullptr)
	{
		return ((nabor.tm_year + 1900) - oopl->Year);
	}
	else if ((fpl = dynamic_cast<FPL*>(pl)) != nullptr)
	{
		return ((nabor.tm_year + 1900) - fpl->Year);
	}
	else
	{
		return 0;
	}
}

void OutCurrentDate(container* c, ofstream &ofst)
{
	for (int i = 0; i < c->len; i++)
	{
		ofst << i << ": Language Age = " << CurrentDate(c->cont[i]) << endl;
	}
}