class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++) 
        gain[i]+=gain[i-1];
        return max(*max_element(gain.begin(),gain.end()),0);
    }
};