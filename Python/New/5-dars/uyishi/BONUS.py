class Sport:
    def __init__(self, list1):
        self.sports = list1

class Boshqa(Sport):
    def __init__(self, list):
        super().__init__(list)
        self.empty1 = []
        self.boshqa = ['fencing','archery','swimming','canoeing','surfing','diving','judo','jujitsu',
                       'wrestling','boxing','mma','horse racing','racing','skateboarding', 'longboarding',
                       'skiing','snowboarding', 'gimnastika', 'kurash', 'sambo']
    def find_ball(self):
        for i in self.sports:
            if i.lower() in self.boshqa:
                self.empty1.append(i.capitalize())
        print("Boshqa : ", self.empty1)

class Koptokli(Sport):
    def __init__(self, list):
        super().__init__(list)
        self.empty = []
        self.koptokli = ['baseball', 'basketball', 'soccer', 'tennis', 'voleyball', 'beach volleyball', 'handball', 'beach handball', 'rugby', 'table tennis'
                    'water polo', 'football','tennis','baseball','soccer','volleyball','bowling','golf','beach',
                    'pool','hockey-puck','playground','badminton','bossaball','water-polo','lawn-bowls','squash','paddle','wiffleball',
                    'cricket','hurling','rugby','handball','sepak-takraw','table-tennis']
    def find_ball(self):
        for i in self.sports:
            if i.lower() in self.koptokli:
                self.empty.append(i.capitalize())
        print("Koptokli : ", self.empty)



sport_list = input("Kiriting:").split()
boshqa = Boshqa(sport_list)
koptokli = Koptokli(sport_list)
boshqa.find_ball()
koptokli.find_ball()
# Football Basketball Gimnastika Voleyball Kurash Sambo Tennis






