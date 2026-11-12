class Solution {
public:
    int digitFrequencyScore(int n) {
        int freq[10] = {0};

        while(n > 0) {
            int digit = n % 10;
            freq[digit]++;
            n = n / 10;
        }

        int score = 0;

        for(int i = 0; i < 10; i++) {
            score += i * freq[i];
        }

        return score;
    }
};