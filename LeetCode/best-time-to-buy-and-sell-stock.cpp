int maxProfit(vector<int>& prices) {
	int minSoFar = INT_MAX, maxProfit = 0;
	for (auto& i : prices) {
		if (minSoFar >= i) minSoFar = i;
		int max_i = i - minSoFar;
		if (max_i > maxProfit) maxProfit = max_i;
	}
	return maxProfit;
}
