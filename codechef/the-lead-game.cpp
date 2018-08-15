void leadGameWinner(int arr1[], int arr2[], int s) {
	int score1 = 0, score2 = 0, winner = -1;
	int maxDiffFor1 = -1, maxDiffFor2 = -1, diff;
	for (int i = 0; i < s; i++) {
		score1 += arr1[i];
		score2 += arr2[i];
		if (score1 > score2) {
			diff = score1 - score2;
			if (diff > maxDiffFor1) {
				maxDiffFor1 = diff;
			}
		}
		else if (score1 < score2) {
			diff = score2 - score1;
			if (diff > maxDiffFor2) {
				maxDiffFor2 = score2 - score1;
			}
		}
	}

	if (maxDiffFor1 > maxDiffFor2) {
		winner = 1;
		cout << winner << " " << maxDiffFor1;
	}
	else {
		winner = 2;
		cout << winner << " " << maxDiffFor2;
	}
}
