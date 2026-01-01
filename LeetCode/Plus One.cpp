class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //I think the two case we have are 
        //1. the last number < 9 and we can just add one and return the array 
        //2. the last number is == 9 and we want to add 1 to all numbers moving left(consistent with the already established cases).

        int sizeOfArr = digits.size();
        //one other edge case I found along the way is in the case where we get to the MSD and 
        //still have to carry 1(since it's a fake, that wouldnt really happen)
        //Maybe I just handle that separately by insering 1s when we get there 

        for(int i = sizeOfArr-1; i >= 0; i--){
        if (digits[i] < 9){
            digits[i] += 1;
            break;
        }
        digits[i] = 0;
        if (i == 0) digits.insert(digits.begin(), 1);
        }
        return digits;

    }
};
