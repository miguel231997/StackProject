
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
