bool judgeCircle(string moves) {
	int countL = 0, countU = 0;
	for (int i = 0; i < moves.length(); i++) {
		if (moves[i] == 'L') countL++;
		if (moves[i] == 'R') countL--;
		if (moves[i] == 'U') countU++;
		if (moves[i] == 'D') countU--;
	}
	return countL == 0 && countU == 0;
}
