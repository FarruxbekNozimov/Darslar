class Device:
    def __init__(self, name, have_display):
        self.name = name
        self.have_display = have_display

    def turn_on(self):
        print(f"Turned on")
    def turn_off(self):
        print(f"Turned off")
class Computer(Device):
    def __init__(self, name, have_display, have_keyboard):
        super().__init__(name, have_display)
        self.have_keyboard = have_keyboard
    def turn_on(self):
        super().turn_on()
        print(f"Turned on keyboard")
    def turn_off(self):
        super().turn_off()
        print(f"Turned off keyboard")

class Laptop(Computer):
    def __init__(self, name, have_display, have_keyboard, have_battery):
        super().__init__(name, have_display, have_keyboard)
        self.have_battery = have_battery

class Desktop(Computer):
    def __init__(self, name, have_display, have_keyboard, have_mouse):
        super().__init__(name, have_display, have_keyboard)
        self.have_mouse = have_mouse

class Smartphone(Device):
    def __init__(self, name, have_display, have_keyboard, have_battery):
        super().__init__(name, have_display)
        self.have_keyboard = False
        self.have_battery = have_battery
    def turn_on(self):
        super().turn_on()
        print(f"Turned on battery")
    def turn_off(self):
        super().turn_off()
        print(f"Turned off battery")
class Tablet(Smartphone, Laptop):
    def __init__(self, name, have_display, have_keyboard, have_mouse):
        super().__init__(name, have_display)
        self.have_keyboard = have_keyboard
        self.have_mouse = have_mouse
