/** 
* @file operations.h
* Calculator with  mathematical operations
*
*/
#ifndef __OPERATIONS_H__
#define __OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
double add(double operand1, double operand2);
 
/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
double subtract(double operand1, double operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
double multiply(double operand1, double operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double divide(double operand1, double operand2);

/**
* powers the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return float value of the operand1**operand2
* @note returns 0 for 0 power 0 error
*/
double power(double operand1, double operand2);

/**
* logarithm to base 10 of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the logarithm of operand1
*/
double logarithm(double operand1);

/**
* logarithm of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the natural logarithm of operand1
* @note returns 0 for natural logarithm of 0 error
*/

double sine(double operand1);

/**
* cosine of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the cosine of operand1
*/
double cosine(double operand1);

/**
* tangent of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the tan of operand1
*/
double tangent(double operand1);

/**
* cotangent of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the cot of operand1
*/

double square_root(double operand1);

/**
* cube root of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the square root of operand1
* @note returns 0 for cube root of less than 0 
*/

double deg_to_rad(double operand1);

/**
* radian to degree of operand1 and returns the result 
* @param[in] operand1  
* @return float value of the degree of operand1 
*/
double rad_to_deg(double operand1);

/**
* ceil value of operand1 and returns the result 
* @param[in] operand1  
* @return ceil value of operand1 
*/
double ceil_value(double operand1);

/**
* floor value of operand1 and returns the result 
* @param[in] operand1  
* @return floor value of operand1 
*/
double floor_value(double operand1);

/**
* absolute value of operand1 and returns the result 
* @param[in] operand1  
* @return absolute value of operand1 
*/
double absolute_value(double operand1);
#endif  /* #define __OPERATIONS_H__ */
