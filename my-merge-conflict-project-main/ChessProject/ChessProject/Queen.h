#pragma once
#include "Tool.h"
#include <vector>
//#include <iostream>
#define POSSIBLE_MOVES 14
#define ROWS 8
#define COLUMNS 8 

class Queen : public Tool
{
public:
    Queen(std::string pos, char type);
    int move(std::string _dst, Tool t, bool turn);
    void set_valid_moves(std::string pos);
    //setter
    void setter_valid_moves(std::vector<std::string> valid);
    ////getter
    std::vector<std::string> get_valid_moves();

protected:
    std::vector<std::string> valid_moves;
};
