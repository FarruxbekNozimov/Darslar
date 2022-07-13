# 1.	Dictionaryda MORSE azbukasi berilgan. Ushbu shifrlangan ma'lumotni chiqarib bering.

MORSE = {
    "-----": "0",
    ".----": "1",
    "..---": "2",
    "...--": "3",
    "....-": "4",
    ".....": "5",
    "-....": "6",
    "--...": "7",
    "---..": "8",
    "----.": "9",
}
word = input("Enter Morze >>> ").split()
print(int("".join(MORSE[i] for i in word)))



