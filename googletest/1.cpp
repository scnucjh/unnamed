#include <gtest/gtest.h>

#include <cstdlib>
#include <iostream>

int add(int a, int b) { return a + b; }

TEST(testCase, test0) { EXPECT_THROW((rand() & 1) == 1, char*); }

TEST(StringCmpTest, Demo) {
  char* pszCoderZh = "CoderZh";
  wchar_t* wszCoderZh = L"CoderZh";
  std::string strCoderZh = "CoderZh";
  std::wstring wstrCoderZh = L"CoderZh";

  EXPECT_STREQ("CoderZh", pszCoderZh);
  EXPECT_STREQ(L"CoderZh", wszCoderZh);

  EXPECT_STRNE("CnBlogs", pszCoderZh);
  EXPECT_STRNE(L"CnBlogs", wszCoderZh);

  EXPECT_STRCASEEQ("coderzh", pszCoderZh);

  EXPECT_STREQ("CoderZh", strCoderZh.c_str());
  EXPECT_STREQ(L"CoderZh", wstrCoderZh.c_str());
}

TEST(ExplicitTest, Demo) {
  ADD_FAILURE() << "Sorry";  // None Fatal Asserton，继续往下执行。
  // FAIL(); // Fatal Assertion，不往下执行该案例。
  SUCCEED();
}

int main(int argc, char** argv) {
  srand(time(NULL));
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
