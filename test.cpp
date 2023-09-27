#include <gtest/gtest.h> 
#include "func.hpp"

TEST(test_1,test_set) {
      ASSERT_TRUE(A2B_B2A("abab") == "baba");
}

TEST(test_2,test_set) {
      ASSERT_TRUE(A2B_B2A("acb") == "bca");
}

TEST(test_3,test_set) {
      ASSERT_TRUE(A2B_B2A("ccc") == "ccc");
}

TEST(test_4,test_set) {
      ASSERT_TRUE(A2B_B2A("") == "");
}

TEST(test_5,test_set) {
      ASSERT_TRUE(A2B_B2A("aaaa") == "bbbb");
}

TEST(test_6,test_set) {
      ASSERT_TRUE(A2B_B2A("bbbb") == "aaaa");
}
