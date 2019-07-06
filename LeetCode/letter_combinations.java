public List<String> letterCombinations(String digits) {
    if (digits == null || digits.length() == 0) return new ArrayList<>();

    char[] buffer = new char[digits.length()];
    List<String> combinations = new ArrayList<>();
    printWordsHelper(digits, buffer, 0, 0, combinations);
    return combinations;
}

public static void printWordsHelper(String numbers, char[] buffer, int nextIndex, int bufferIndex, List<String> combinations) {
    if (bufferIndex >= buffer.length || nextIndex >= numbers.length()) {
        appendToResult(buffer, bufferIndex, combinations);
        return;
    }

    char[] letters = getLetters(numbers.charAt(nextIndex));
    if (letters.length == 0) {
        printWordsHelper(numbers, buffer, nextIndex + 1, bufferIndex, combinations);
    }

    for (char letter : letters) {
        buffer[bufferIndex] = letter;
        printWordsHelper(numbers, buffer, nextIndex + 1, bufferIndex + 1, combinations);
    }
}

public static void appendToResult(char[] buffer, int last, List<String> combinations) {
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < last; i++) {
        sb.append(buffer[i]);
    }
    combinations.add(sb.toString());
}

public static char[] getLetters(char num) {
    switch (num) {
        case '0':
        case '1':
            return new char[] {};
        case '2':
            return new char[] {'a', 'b', 'c'};
        case '3':
            return new char[] {'d', 'e', 'f'};
        case '4':
            return new char[] {'g', 'h', 'i'};
        case '5':
            return new char[] {'j', 'k', 'l'};
        case '6':
            return new char[] {'m', 'n', 'o'};
        case '7':
            return new char[] {'p', 'q', 'r', 's'};
        case '8':
            return new char[] {'t', 'u', 'v'};
        case '9':
            return new char[] {'w', 'x', 'y', 'z'};
    }
    throw new IllegalArgumentException("Invalid digit " + num);
}
