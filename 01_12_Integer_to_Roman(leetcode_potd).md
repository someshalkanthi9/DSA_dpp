# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
just brutforce apporach which uses if statements and while loop

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
public:
    string intToRoman(int nums) {
        string roman ="";
        while(nums>=1000){
            roman = roman + "M";
            nums = nums-1000;
        }
        if(nums>=900){
            roman = roman + "CM";
            nums = nums-900;
        }
        if(nums>=500){
            roman = roman + "D";
            nums = nums-500;
        }
        if(nums>=400){
            roman = roman+"CD";
            nums = nums-400;
        }
        while(nums>=100){
            roman = roman+ "C";
            nums = nums-100;
        }
        if(nums>=90){
            roman = roman + "XC";
            nums = nums-90;
        }
        if(nums>=50){
            roman = roman + "L";
            nums = nums-50;
        }
        if(nums>=40){
            roman = roman + "XL";
            nums = nums-40;
        }
        while(nums>=10){
            roman = roman + "X";
            nums = nums-10;
        }
        if(nums>=9){
            roman = roman + "IX";
            nums = nums-9;
        }
        if(nums>=5){
            roman = roman + "V";
            nums = nums-5;
        }
        if(nums>=4){
            roman = roman + "IV";
            nums = nums-4;
        }
        while(nums>=1){
            roman = roman + "I";
            nums = nums-1;
        }
        return roman;
    }
};
```
