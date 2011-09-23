#include "TestRunner.h"
#include <gtest/gtest.h>

TestRunner::TestRunner() {
}

TestRunner::~TestRunner() {
}

int TestRunner::executeTests(int argc, char* argv[]){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

