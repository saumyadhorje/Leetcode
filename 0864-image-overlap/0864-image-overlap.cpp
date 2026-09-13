class Solution {
public:
    int largestOverlap(std::vector<std::vector<int>>& img1, std::vector<std::vector<int>>& img2) {
        // Intuition: only compare cells that are 1 in both images, group pairs by their offset
        int n = img1.size();
        std::vector<std::pair<int,int>> ones1;
        std::vector<std::pair<int,int>> ones2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img1[i][j] == 1) ones1.push_back({i, j});
                if (img2[i][j] == 1) ones2.push_back({i, j});
            }
        }

        std::unordered_map<int, int> count;
        int max = 0;

        for (auto& a : ones1) {
            for (auto& b : ones2) {
                int dr = b.first - a.first;
                int dc = b.second - a.second;
                int key = (dr + n) * (2 * n) + (dc + n);
                int updated = count[key] + 1;
                count[key] = updated;
                max = std::max(max, updated);
            }
        }

        return max;
    }
};