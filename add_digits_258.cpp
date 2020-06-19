
/* Method 1 */
class Solution {
public:
    int addDigits(int num) {
         while(num > 9) {
                num = num / 10 + num % 10;
            }
            return num;
    }
};

/* Method 2 */
/* Time : O(1) */
/* Space: O(1)*/
class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};
