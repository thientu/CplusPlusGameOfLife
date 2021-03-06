#include "LivingRules.h"
#include <gtest/gtest.h>

using namespace GameOfLife;

TEST(Rules, ApplyToLivingCells){
	LivingRules rules;
	EXPECT_EQ(false, rules.Apply(0));
	EXPECT_EQ(false, rules.Apply(1));
	EXPECT_EQ(true, rules.Apply(2));
	EXPECT_EQ(true, rules.Apply(3));
	EXPECT_EQ(false, rules.Apply(4));
	EXPECT_EQ(false, rules.Apply(5));
	EXPECT_EQ(false, rules.Apply(6));
}



