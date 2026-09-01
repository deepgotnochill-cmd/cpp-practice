#include <iostream>
#include <vector>
#include <string>
using namespace std;

string biggerNumber(string s1, string s2) {

    int i = 0;

    while(i < s1.length() && s1[i] == '0')
        i++;

    int s1_Real_Length = s1.length() - i;

    int j = 0;

    while(j < s2.length() && s2[j] == '0')
        j++;

    int s2_Real_Length = s2.length() - j;

    // Compare number of digits
    if(s1_Real_Length > s2_Real_Length)
        return s1;

    if(s2_Real_Length > s1_Real_Length)
        return s2;

    // Compare digit by digit
    while(i < s1.length() && j < s2.length() && s1[i] == s2[j]) {
        i++;
        j++;
    }

    // Both numbers are equal
    if(i == s1.length())
        return s1;

    // Compare first different digit
    if(s1[i] > s2[j])
        return s1;

    return s2;
}

int main() {

    vector<string> arr = {"0123", "10023", "34314123"};

    string max = arr[0];

    int m = arr.size();

    for(int i = 1; i < m; i++) {
        max = biggerNumber(arr[i], max);
    }

    cout << max << endl;
}