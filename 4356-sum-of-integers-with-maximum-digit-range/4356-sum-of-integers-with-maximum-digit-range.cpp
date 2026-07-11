class Solution {
public:
    int digit_range(int num){
        int max_dig = INT_MIN, min_dig = INT_MAX;
        int digit ;
        while(num){
            digit = num%10;
            max_dig = max(max_dig,digit); // stores the maximum digit of the num
            min_dig = min(min_dig,digit); // stores the minimum digit of the num
            num /= 10;
        }
        return max_dig - min_dig; // returns the difference of the maximum and minimum digits of the num
    }
    int maxDigitRange(vector<int>& nums) {
        // first calculate the digit range of all the elements
        // then compare the digit range if it is maximum and same then add the elements 
        // if it is greater update the sum and the max_digit_range
        // if less then no need to do anything just continue
        int max_dig_range = INT_MIN,sum; 
        for(int i=0;i<nums.size();i++){
            int dig_range = digit_range(nums[i]); // calculate the digit range of the element
            if(dig_range > max_dig_range){ // if the current element digitrange is greater than the previously stored max digit range then update the things
                max_dig_range = dig_range ; // updating the max_digit_range
                sum = nums[i]; // updating the sum
            }
            else if(dig_range == max_dig_range){ 
                sum += nums[i]; // as we need to return all the elements sum , which have the same max_digit_range
            }
        }
        return sum;
    }
};