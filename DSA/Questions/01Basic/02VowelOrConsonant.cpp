#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? printf("vowel") : printf("consonant");
    return 0;
}
