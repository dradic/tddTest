#include <gtest/gtest.h>
#include "money.h"

// Test multiplication
TEST(MoneyTests, TestMultiplication) { 
  Money* five = Money::dollar(5);
  ASSERT_TRUE(Money::dollar(10)->equals(five->times(2)));  
  ASSERT_TRUE(Money::dollar(15)->equals(five->times(3)));
}

// Test equality
TEST(MoneyTests, TestEquality) {  
  ASSERT_TRUE(Money::dollar(5)->equals(Money::dollar(5)));  
  ASSERT_FALSE(Money::dollar(5)->equals(Money::dollar(6)));    
  ASSERT_FALSE(Money::dollar(5)->equals(Money::franc(5)));    
}

// Test currency
TEST(MoneyTests, TestCurrency) {
  ASSERT_EQ("USD", Money::dollar(1)->getCurrency());
  ASSERT_EQ("CHF", Money::franc(1)->getCurrency());
}

// Test simple addition
TEST(MoneyTests, TestSimpleAddition) {
  Money* sum = Money::dollar(5)->plus(Money::dollar(5));  
  ASSERT_TRUE(Money::dollar(10)->equals(sum));  
}