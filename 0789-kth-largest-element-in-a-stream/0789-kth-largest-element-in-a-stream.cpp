
class KthLargest {
public:

    // Min-heap
    // The smallest element among the heap is always at the top
    priority_queue<int, vector<int>, greater<int>> pq;

    // Store the value of k
    int k;

    // Constructor
    KthLargest(int k, vector<int>& nums) {

        // Store k
        this->k = k;

        // Put all numbers into the min-heap
        for (int num : nums) {
            pq.push(num);
        }

        // We only need the largest k elements
        // So remove extra smaller elements
        while (pq.size() > k) {
            pq.pop();
        }
    }

    // Add a new number and return the kth largest number
    int add(int val) {

        // Add the new number to the heap
        pq.push(val);

        // If we have more than k elements,
        // remove the smallest element
        while (pq.size() > k) {
            pq.pop();
        }

        // The smallest element in these k largest elements
        // is the kth largest element overall
        return pq.top();
    }
};