public static boolean backspaceCompare(String S, String T) {
        Stack<Character> s1 = new Stack<>();
        Stack<Character> s2 = new Stack<>();
        addToStack(s1, S);
        addToStack(s2, T);
        while (!s1.empty() && !s2.empty()) {
            if (s1.pop() != s2.pop()) return false;
        }
        if (s1.empty() && s2.empty()) return true;
        return false;
    }

    public static void addToStack(Stack<Character> s, String str) {
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == '#' && !s.empty()) s.pop();
            else if (str.charAt(i) != '#') s.push(str.charAt(i));
        }
    }
