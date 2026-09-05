char getMaxOccuringChar(char* str) {
    int freq[26] = {0};
    for(int i = 0; str[i] != '\0'; i++){
        freq[str[i] - 'a']++;
    }
    int maxFreq = 0;
    char ans ='a';
    for(int i = 0; i < 26 ; i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            ans = 'a' + i;
        }
    }
    return ans;
}