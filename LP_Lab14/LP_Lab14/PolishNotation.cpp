#include <iostream>
#include <locale>
#include "LT.h"
#include "IT.h"

#define EXP1 28
#define EXP2 50
#define EXP3 66

bool PolishNoyation(int  lextable_pos,
	LT::LexTable& lextable,
	IT::IdTable& idtable
);

int main() {
	setlocale(LC_ALL, "rus");
	LT::LexTable lextable;
	IT::IdTable idtable;
	std::cout << 28 << ": польская запись построена" << std::endl;


}
