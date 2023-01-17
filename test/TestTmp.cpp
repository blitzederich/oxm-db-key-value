#include <gtest/gtest.h>

#include "oxm/Tmp.h"

TEST(Sum, Sum) {
  ASSERT_EQ(oxm::Sum(2, 3), 5);
}

TEST(Sum, Subtraction) {
  ASSERT_EQ(oxm::Sum(2, -3), -1);
}

TEST(Sum, Overflow) {
  const int int_max = std::numeric_limits<int>::max();
  const int int_min = std::numeric_limits<int>::min();
  ASSERT_EQ(oxm::Sum(int_max, 1), int_min);
}