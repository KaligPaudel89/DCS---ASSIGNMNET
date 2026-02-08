#include <cstring>
using namespace std;

bool isPalindrome(const char* s)
{
    if (strlen(s) <= 1)          // Base case
        return true;
    else if (s[0] != s[strlen(s) - 1])   // Base case
        return false;
    else
        return isPalindrome(string(s + 1, strlen(s) - 2).c_str());
}
