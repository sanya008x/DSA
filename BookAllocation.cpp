#include <bits/stdc++.h> 
using namespace std;

// Helper function to check if we can distribute chapters in <= n days
bool isPossible(vector<int>& time, int n, int m, long long mid) {
    int days = 1;
    long long timeSum = 0;

    for (int i = 0; i < m; i++) {
        if (time[i] > mid) return false;

        if (timeSum + time[i] <= mid) {
            timeSum += time[i];
        } else {
            days++;
            if (days > n) return false;
            timeSum = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) {
    long long s = *max_element(time.begin(), time.end());
    long long e = accumulate(time.begin(), time.end(), 0LL);
    long long ans = e;

    while (s <= e) {
        long long mid = s + (e - s) / 2;
        if (isPossible(time, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}
