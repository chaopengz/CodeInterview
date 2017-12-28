#include <iostream>
#include "002.cpp"

int main()
{
    char *str = "we are happy";

    Solution solution;
    printf("%s\n",str);
    solution.replaceSpace(str, strlen(str));
    printf("%s",str);
}