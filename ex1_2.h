#ifndef EX1_2_H
#define EX1_2_H
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;
public:
    void set_params(int w, int h){width = w;height = h;}
    int calc_area(){return width*height;}
    int get_sum(){return width+height;}
};

#endif // EX1_2_H
