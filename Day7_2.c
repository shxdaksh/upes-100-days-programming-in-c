/*
Day 7(2) - Question 14
Vowel or consonant
*/
#include <stdio.h>

int main()
{
    char c;
    scanf(" %c", &c);
    if (c>='A'&&c<='Z') c+=32;
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') puts("Vowel");
    else puts("Consonant");
    return 0;
}
