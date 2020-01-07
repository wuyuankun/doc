/********************************
*Copyright:
*Author: wyk
*Date: 2020-1-1
*
*Demo class for testing of return value 
*
*********************************/

#ifndef __RETURN_VALUE_H__
#define __RETURN_VALUE_H__

#include "return-value.h"
#include <stdio>  //printf

OnlyCopy::OnlyCopy(const OnlyCopy& obj)
{
  this->value_ = obj.value_;
  printf("OnlyCopy copy constructor: from[%ld] to [%ld]", &obj, this);
}

OnlyCopy&
OnlyCopy::operator=(const OnlyCopy& obj)
{
  this->value_ = obj.value_;
  printf("OnlyCopy operator=: from[%ld] to [%ld]", &obj, this);
  return *this;
}

#endif
