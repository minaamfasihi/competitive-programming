bool isValid(string s) {
	stack<char> st;
	map<char, char> m;
	m.insert(pair<char, char>('(', ')'));
	m.insert(pair<char, char>('{', '}'));
	m.insert(pair<char, char>('[', ']'));

	for (char& c : s) {
		if (c == '(' || c == '{' || c == '[') {
			st.push(c);
		}
		else {
			if (st.empty() || c != m[st.top()]) return false;
			st.pop();
		}
	}
	return st.size() == 0;
}
