class Solution {
public:
    int characterReplacement(string s, int k) {
    unordered_map<char, int> freq_map; // Frequency map to store character counts
    int left = 0;                      // Left pointer for the sliding window
    int max_count = 0;                 // Maximum frequency of any character in the window
    int max_length = 0;                // Maximum length of the valid substring
    
    for (int right = 0; right < s.size(); ++right) {
        // Add the current character to the frequency map
        freq_map[s[right]]++;
        
        // Update the max_count to reflect the highest frequency in the window
        max_count = max(max_count, freq_map[s[right]]);
        
        // If the window size minus the max_count exceeds k, shrink the window
        while ((right - left + 1) - max_count > k) {
            freq_map[s[left]]--;
            left++;
        }
        
        // Update the maximum length of the valid substring
        max_length = max(max_length, right - left + 1);
    }
    
    return max_length;
}
    
};
