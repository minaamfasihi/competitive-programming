public static void printWords(int[] phoneNumber) {
    if (phoneNumber == null || phoneNumber.length == 0) return;

    char[] buffer = new char[phoneNumber.length];
    printWordsHelper(phoneNumber, buffer, 0, 0);
}

public static void printWordsHelper(int[] numbers, char[] buffer, int nextIndex, int bufferIndex) {
    if (bufferIndex >= buffer.length || nextIndex >= numbers.length) {
        printBuffer(buffer, bufferIndex);
        return;
    }

    char[] letters = getLetters(numbers[nextIndex]);
    if (letters.length == 0) {
        printWordsHelper(numbers, buffer, nextIndex + 1, bufferIndex);
    }

    for (char letter : letters) {
        buffer[bufferIndex] = letter;
        printWordsHelper(numbers, buffer, nextIndex + 1, bufferIndex + 1);
    }
}

public static void printBuffer(char[] buffer, int last) {
    for (int i = 0; i < last; i++) {
        System.out.print(buffer[i]);
    }
    System.out.println("");
}

public static char[] getLetters(int num) {
    switch (num) {
        case 0:
            return new char[] {};
        case 1:
            return new char[] {};
        case 2:
            return new char[] {'a', 'b', 'c'};
        case 3:
            return new char[] {'d', 'e', 'f'};
        case 4:
            return new char[] {'g', 'h', 'i'};
        case 5:
            return new char[] {'j', 'k', 'l'};
        case 6:
            return new char[] {'m', 'n', 'o'};
        case 7:
            return new char[] {'p', 'q', 'r', 's'};
        case 8:
            return new char[] {'t', 'u', 'v'};
        case 9:
            return new char[] {'w', 'x', 'y', 'z'};
    }
    throw new IllegalArgumentException("Invalid digit " + num);
}
