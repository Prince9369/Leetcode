class Solution {
public:
    int findEquationValue(pair<long long, long long> p1, pair<long long, long long>p2, pair<long long, long long> p3) {
        long long x1 = p1.first;
        long long x2 = p2.first;
        long long x3 = p3.first;

        long long y1 = p1.second;
        long long y2 = p2.second;
        long long y3 = p3.second;

        return (y3 - y2) * (x2 - x1) - (y2 - y1) * (x3 - x2);
    }

    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        sort(trees.begin(), trees.end());
        vector<vector<int>> result;
        deque<pair<int, int>> upper, lower;

        for (auto& point : trees) {
            int l = lower.size();
            int u = upper.size();

            while (l >= 2 && findEquationValue(lower[l - 2], lower[l - 1], {point[0], point[1]}) < 0) {
                l--;
                lower.pop_back();
            }
            while (u >= 2 && findEquationValue(upper[u - 2], upper[u - 1], {point[0], point[1]}) > 0) {
                u--;
                upper.pop_back();
            }

            upper.push_back({point[0], point[1]});
            lower.push_back({point[0], point[1]});
        }

        set<pair<int, int>> st;
        for (auto& point : upper) st.insert(point);
        for (auto& point : lower) st.insert(point);

        for (auto& point : st)
            result.push_back({point.first, point.second});

        return result;
    }
};
