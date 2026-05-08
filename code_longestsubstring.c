int main() {
    char s = "abcabcbb"
    lengthOfLongestSubstring(s);
    return 0;
 }

int lengthOfLongestSubstring(char* s) {
    int stringSize = sizeof(s) / sizeof(char);
    char r[stringSize];
    int i = 0;
    //Check the current character with next
    while (i < stringSize) {
        if (s[i] != s[i + 1]) {
            //If not same then add in an result array
            r[i] = s[i];
            r[i + 1] = s[i + 1];
            ++i;
        }
        else {
            //If same then update then increment the search index
            ++i;
        }
    }
    return *r;
}