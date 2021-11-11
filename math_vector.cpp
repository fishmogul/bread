#include <string>
#include <cmath>

#include "math_vector.hpp"

std::string vec_to_str(const MathVector &v){return (std::to_string(v.x) + ":" + std::to_string(v.y));}

MathVector MathVector::add(const MathVector &other){return {x + other.x,y+other.y};}

MathVector MathVector::mult(int a){return{x*a,y*a};}

int MathVector::mult(const MathVector &other){return(x*other.x+y*other.y);}

double MathVector::magnitude(){return(std::sqrt(pow(x,2)+pow(y,2)));}