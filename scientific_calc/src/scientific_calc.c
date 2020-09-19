#include <operations.h>
#include <math.h>

double add(double operand1, double operand2)
{
    return operand1 + operand2;
}

double subtract(double operand1, double operand2)
{
    return operand1 - operand2;
}

double multiply(double operand1, double operand2)
{
    return operand1 * operand2;
}

double divide(double operand1, double operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

double power(double operand1, double operand2)
{
    if(operand1==0)
        return 0;
    else 
        return pow(operand1,operand2);
}



double logarithm(double operand1)
{
    if(operand1<=0)
        return 0;
    else
        return log10(operand1);
        
}

double sine(double operand1)
{
    return sin(operand1);
}


double cosine(double operand1)
{
    return cos(operand1);
}


double tangent(double operand1)
{
    return tan(operand1);
}

double square_root(double operand1)
{
    if(operand1<=0)
        return 0;
    else
        return sqrt(operand1);
}

double deg_to_rad(double operand1)
{
    float radians=operand1*(22/7)/180;
    return radians;
}

double rad_to_deg(double operand1)
{
    float degree=operand1*(180/(22/7));
    return degree;
}

double ceil_value(double operand1)
{
    return ceil(operand1);
}

double floor_value(double operand1)
{
    return floor(operand1);
}

double absolute_value(double operand1)
{ 
    return abs(operand1);
}
