#include <numeric>
#include <vector>
#include <algorithm> // Add this line to include the <algorithm> header

int calculateTotalXP(const std::vector<int>& A, const std::vector<int>& Bonus) {
    int N = A.size();
    std::vector<int> totalXP(N, 0);
    
    // Iterate over each soldier
    for (int i = 0; i < N; ++i) {
        int power = A[i];
        int maxBonus = 0;
        
        // Iterate over each soldier on the right
        for (int j = i + 1; j < N; ++j) {
            if (A[j] % power == 0) {
                // Calculate the maximum bonus in range [i, j]
                maxBonus = std::max(maxBonus, Bonus[j]);
            }
        }
        
        totalXP[i] = maxBonus;
    }
    
    // Calculate the total XP
    int total = accumulate(totalXP.begin(), totalXP.end(), 0);
    
    return total;
}
