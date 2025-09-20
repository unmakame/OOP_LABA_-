#include "change_letter.h"
#include <gtest/gtest.h>
#include <string>

TEST(changeLetter, ReplacesAWithB){
    std::string input = "abc";
    std::string result = changeLetter(input);
    EXPECT_EQ(result, "bac");
}

TEST(ChangeLetterTest, ReplacesBWithA) {
    std::string input = "bac";
    std::string result = changeLetter(input);
    EXPECT_EQ(result, "abc");
}

TEST(ChangeLetterTest, NoChangesForOtherLetters) {
    std::string input = "cdef";
    std::string result = changeLetter(input);
    EXPECT_EQ(result, "cdef");
}


TEST(ChangeLetterTest, MixedString) {
    std::string input = "aabbcc";
    std::string result = changeLetter(input);
    EXPECT_EQ(result, "bbaacc");
}


TEST(ChangeLetterTest, EmptyString) {
    std::string input = "";
    std::string result = changeLetter(input);
    EXPECT_EQ(result, "");
}


TEST(ChangeLetterTest, OnlyA) {
    std::string input = "aaa";
    std::string result = changeLetter(input);
    EXPECT_EQ(result, "bbb");
}


TEST(ChangeLetterTest, OnlyB) {
    std::string input = "bbb";
    std::string result = changeLetter(input);
    EXPECT_EQ(result, "aaa");
}
