#include <iostream>
#include "002.cpp"

int main()
{
    char str[100] = "we are happy";

    Solution solution;
    printf("%s\n",str);
    solution.replaceSpace(str, strlen(str));

    printf("%s\n",str);
}
