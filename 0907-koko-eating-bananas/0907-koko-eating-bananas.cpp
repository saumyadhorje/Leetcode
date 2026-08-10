class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = 0;

        // Find the biggest pile
        for (int i = 0; i < piles.size(); i++) {
            high = max(high, piles[i]);
        }

        // Binary search for the minimum speed
        while (low <= high) {

            int mid = (low + high) / 2;

            long totalHours = 0;

            // Calculate total hours at speed mid
            for (int i = 0; i < piles.size(); i++) {
                totalHours += (piles[i] + mid - 1) / mid;
            }

            if (totalHours <= h) {
                // mid works, so try a smaller speed
                high = mid - 1;
            }
            else {
                // mid is too slow, so try a bigger speed
                low = mid + 1;
            }
        }

        return low;
    }
};