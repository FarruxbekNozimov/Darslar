class Karta:
    def __init__(self, card_name):
        self.card_name = str(card_name).upper()
        self.cards = ['2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A']
        
    def compare(self, obj):
        if self.card_name == '2' and obj.card_name == 'A' or self.card_name == 'A' and obj.card_name == '2':
            print('2')
        elif self.cards.index(self.card_name) > self.cards.index(obj.card_name):
            print("1 player ", self.card_name)
        else:
            print("2 player ", obj.card_name)

player = Karta('9')
player1 = Karta('A')
player.compare(player1)



