//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Listing 7-6.
@file PrecondViolatedExcept.cpp */
#include "StackInterface.h"
#include "PrecondViolatedExcept.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
PrecondViolatedExcept::PrecondViolatedExcept(const std::string& message)
	: std::logic_error("Precondition Violated Exception: " + message)
{
}  // end constructor
