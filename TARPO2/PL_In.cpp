#include "pch.h"
#include "PL.h"
#include "PPL.h"
#include "OOPL.h"

using namespace std;
namespace basic_PL
{
	// ¬вод параметров обобщенной фигуры из стандартного потока ввода
	PL* PL::In(ifstream& ifst)
	{
		PL *pl;
		int k;
		ifst >> k;
		switch (k)
		{
		case 1:
			pl = new PPL;
			break;
		case 2:
			pl = new OOPL;
			break;
		default:
			return 0;
		}
		pl->InData(ifst);
		return pl;
	}

}