#include "SudokuFileLoader.h"


// Adquire um problema da posicao count.
string SudokuFileLoader::getProblem(int count)
{
    list<string>::iterator it;
    if (count == 0)
    {
        it = this->problems.begin();
    } else {
        it = next(this->problems.begin(), count);
    }
    return  *it;
}


// Adquire uma solucao da posicao count.
string SudokuFileLoader::getSolution(int count)
{
    list<string>::iterator it;
    if (count == 0)
    {
        it = this->solutions.begin();
    } else {
        it = next(this->solutions.begin(), count);
    }
    return  *it;
}