class Alpha:
    til = "English"
    list1 = list('abcdefghjklmnopqrstuvwxyz')

    def show_letters(self):
        [print(i) for i in self.list1]

    def count_letters(self):
        print(len(self.list1))

class EngAlpha:
    def __init__(self, til, list):
        self.til = til
        self.list1 = list
        self.number_alp = len(self.list1)

    def num_alp(self):
        print(self.number_alp)

    def is_engalp(self, number):
        if number.lower() in self.list1:
            print("Ingiliz alifbosida bor")
        else:
            print("Ingiliz alifbosida yo'q")
    def example(self):
        print("My name is Farrukh. I have a Ubuntu")

a = list('abcdefghjklmnopqrstuvwxyz')
letter = EngAlpha("English", a)
letter.num_alp()
letter.is_engalp('F')
letter.is_engalp('Щ')
letter.example()





