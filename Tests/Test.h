#ifndef __TEST_H__
#define __TEST_H__

#include <string>
#include <iostream>
#include <iomanip>

#include "TestMacros.h"

namespace ali {}
using namespace ali;

class Test
{
public:
	Test(std::string name);

	// Run all tests
	virtual void run() = 0;

	// Get name of test set
	virtual std::string getName();

	// Get test statistics
	int getTestsRun();
	int getTestsSucceeded();

protected:
	std::string name;

	int testsRun;
	int testsSucceeded;
};

#endif /* __TEST_H__ */
