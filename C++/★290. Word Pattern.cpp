/*
Given a pattern and a string str, find if str follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.
Examples:
pattern = "abba", str = "dog cat cat dog" should return true.
pattern = "abba", str = "dog cat cat fish" should return false.
pattern = "aaaa", str = "dog cat cat dog" should return false.
pattern = "abba", str = "dog dog dog dog" should return false.
*/
//https://leetcode.com/discuss/62329/0ms-c-solution-using-istringstream-and-double-maps
//https://leetcode.com/discuss/62476/short-c-read-words-on-the-fly
//https://leetcode.com/discuss/91577/sharing-my-0ms-c-solution-using-two-unordered_map