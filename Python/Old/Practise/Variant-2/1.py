# 1. Text nomli string va harf nomli stringlarni input orqali kiriting
# va ushbu harf Textdagi 2-chisini indeksini toping va chiqaring.
text, harf = input("Text: "), input("Harf: ")
print(None if text.count(harf) == 0 else len(text)-1 - text[::-1].index(harf))