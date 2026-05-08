#include <string.h>
#include <iostream.h>


int lengthOfLongestSubstring(char*);
int unq_ptrn(char*, char, int);
int main() {
    char s[] = "abcabcbb";
    char ss[] = lengthOfLongestSubstring(s);
    printf("The longest substring is: %s",ss);
    return 0;
 }

int lengthOfLongestSubstring(char* s) {
    int stringSize = strlen(s);
    char r[10];
    int i = 0, j = 0;
    //Check the current character with next
    while ((i < stringSize)&& (unq_ptrn(r, s[i], j))) {
        if (s[i] != s[i + 1]) {
            //If not same then add in an result array
            r[j] = s[i];
            r[j + 1] = s[i + 1];
            ++i; 
            ++j;
        }
        else {
            //If same then update then increment the search index
            ++i;
        }
        //Check if string pattern is unique or not  
    }
    return *r;
}

int unq_ptrn(char* r, char a, int crnt_indx) {
    for (int k = 0; k < crnt_indx; k++)
    {
        if (*(r+k) != a)
            continue;
        else
            return 0;
    }
    return 1;
}