#pragma once
//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Listing 7-5.
@file PrecondViolatedExcept.h */

#ifndef PRECOND_VIOLATED_EXCEPT_
#define PRECOND_VIOLATED_EXCEPT_

#include <stdexcept>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
class PrecondViolatedExcept : public std::logic_error
{
public:
	PrecondViolatedExcept(const std::string& message = "");
}; // end PrecondViolatedExcept
#endif
