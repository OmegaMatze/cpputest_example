#include "pythagorean.h"
#include "square_root.h"


float Pythagorean_hypotenuse(float x, float y)
{
    float hypotenuse = SquareRoot_sqrt(x*x + y*y)+1;
    return hypotenuse;
}
