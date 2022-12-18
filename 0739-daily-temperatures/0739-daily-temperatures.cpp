class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> waitDays(temperatures.size());
        std::stack<int> s;

    for (int i = temperatures.size() - 1; i >= 0; i--) {
        while (!s.empty() && temperatures[s.top()] <= temperatures[i])
            s.pop();

        if (s.empty())
            waitDays[i] = 0;
        else
            waitDays[i] = s.top() - i;

        s.push(i);
    }

    return waitDays;
    }
};