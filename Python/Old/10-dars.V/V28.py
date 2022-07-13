class Counter:
    def __init__(self, name):
        self.name = name
        self.live = 100
        self.money = 10000
        self.gun = {
            "Knife": [50, 0],
            "Pistol": [10, 0],
            "TEC-9": [20, 200],
            "AWP": [40, 400],
            "AK-74": [30, 300],
            "AK-47": [50, 500],
            "Negev": [80, 800],
            "M4A1": [100, 900],
            "M249": [100, 999]
        }

    def shoot(self, rival, otish=1, gun="Pistol"):
        if self.live > 0:
            shot = rival.live - self.gun[gun] * otish
            if shot >= 0:
                rival.live = shot
                print(f"{self.name} shoot {rival.name} with {gun}")
                rival.show_live()
                print()
            else:
                rival.live = 0
                self.money += rival.money

    def show_live(self):
        a = "Dead" if self.live == 0 else "Live"
        print(f"{self.name}\t:\t{self.live} --> {a}")


player1 = Counter("Baqay")
player2 = Counter("Mamarayim")
player1.shoot(player2, 10, "TEC-9")
player2.shoot(player1, 1, "M4A1")






