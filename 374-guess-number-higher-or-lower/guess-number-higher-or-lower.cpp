// /**
//  * Forward declaration of guess API.
//  * @param  num   your guess
//  * @return 	     -1 if num is higher than the picked number
//  *			      1 if num is lower than the picked number
//  *               otherwise return 0
//  * int guess(int num);
//  */

// class Solution {
// public:
//     int guessNumber(int n) {

//         long int low = 0;
//         long int mid;
//         long int high = n;
//         long int result;

//         while (low <= high) {
//             mid = low + (high - low) / 2;
//             if (isguessNumber(mid)) {
//                 result = mid;
//                 high = mid - 1;
//                 else {
//                     low = mid + 1;
//                 }
//             }

//             return result;
//         }
//     };

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int res = guess(mid);

            if (res == 0) {
                return mid;          // correct guess
            } else if (res < 0) {
                high = mid - 1;      // too high
            } else {
                low = mid + 1;       // too low
            }
        }
        return -1; // should never reach here
    }
};
