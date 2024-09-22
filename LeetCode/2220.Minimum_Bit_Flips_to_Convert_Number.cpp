class Solution {
public:
    int minBitFlips(int start, int goal) {
        //use Xor to get inequality
        int ans=start^goal;
        int count=0;
        //count the set bits in inequality
        while(ans){
            count+=ans&1;
            ans=ans>>1;
        }
        return count;
    }
};