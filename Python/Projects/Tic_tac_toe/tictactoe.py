from PyQt5.QtWidgets import QMessageBox, QPushButton, QLabel, QWidget, QApplication
from PyQt5.QtGui import QIcon
import sys

class Tic_Tac_toe(QWidget):
    def __init__(self):
        super().__init__()
        self.start()

    def start(self):
        # SET WINDOW SETTINGS
        self.setStyleSheet('background-color:black;')
        self.setFixedSize(452, 432)
        self.setWindowIcon(QIcon('1.png'))
        self.setWindowTitle("Tic Tac Toe")

        self.player1, self.player2 = 0, 0
        self.btn_sytle = f"margin:10px;border-radius:16px;font: 38px MS Shell Dlg 2;border: 2px solid #555;background-color: #111;color:white;"
        # ===========================================
        # SET ELEMENTS' NAME
        self.Btn_1 = QPushButton(" ", self)
        self.Btn_2 = QPushButton(" ", self)
        self.Btn_3 = QPushButton(" ", self)
        self.Btn_5 = QPushButton(" ", self)
        self.Btn_6 = QPushButton(" ", self)
        self.Btn_7 = QPushButton(" ", self)
        self.Btn_8 = QPushButton(" ", self)
        self.Btn_9 = QPushButton(" ", self)
        self.Btn_4 = QPushButton(" ", self)
        self.label = QLabel(f"| {self.player1} : {self.player2} |", self)
        # ===========================================
        # SET ELEMENTS' GEOMETRY
        self.Btn_1.setGeometry(0, 100, 151, 111)
        self.Btn_2.setGeometry(300, 100, 151, 111)
        self.Btn_3.setGeometry(150, 100, 151, 111)
        self.Btn_5.setGeometry(150, 210, 151, 111)
        self.Btn_6.setGeometry(300, 210, 151, 111)
        self.Btn_7.setGeometry(300, 320, 151, 111)
        self.Btn_8.setGeometry(150, 320, 151, 111)
        self.Btn_9.setGeometry(0, 320, 151, 111)
        self.Btn_4.setGeometry(0, 210, 151, 111)
        self.label.setGeometry(10, 19, 431, 71)
# ===========================================
# SET ELEMENTS' STYLE
        self.Btn_1.setStyleSheet(self.btn_sytle)
        self.Btn_2.setStyleSheet(self.btn_sytle)
        self.Btn_3.setStyleSheet(self.btn_sytle)
        self.Btn_5.setStyleSheet(self.btn_sytle)
        self.Btn_6.setStyleSheet(self.btn_sytle)
        self.Btn_7.setStyleSheet(self.btn_sytle)
        self.Btn_8.setStyleSheet(self.btn_sytle)
        self.Btn_9.setStyleSheet(self.btn_sytle)
        self.Btn_4.setStyleSheet(self.btn_sytle)
        self.label.setStyleSheet("padding: 0 165px;border-radius:16px;font: 38px Agency FB;border: 2px solid #555;background-color: #111;color:white;")

        self.lst = [self.Btn_1, self.Btn_2, self.Btn_3, self.Btn_4, self.Btn_5, self.Btn_6, self.Btn_7, self.Btn_8, self.Btn_9]

        self.change_player1 = 'X'
        self.change_player2 = 'O'
        self.win_pl = "Natija : Durrang !!!"
# ==============================================
# CONNECT TO FUNCTION WHEN CLICKED BTN
        self.Btn_1.clicked.connect(lambda: self.main_function(self.Btn_1))
        self.Btn_2.clicked.connect(lambda: self.main_function(self.Btn_2))
        self.Btn_3.clicked.connect(lambda: self.main_function(self.Btn_3))
        self.Btn_4.clicked.connect(lambda: self.main_function(self.Btn_4))
        self.Btn_5.clicked.connect(lambda: self.main_function(self.Btn_5))
        self.Btn_6.clicked.connect(lambda: self.main_function(self.Btn_6))
        self.Btn_7.clicked.connect(lambda: self.main_function(self.Btn_7))
        self.Btn_8.clicked.connect(lambda: self.main_function(self.Btn_8))
        self.Btn_9.clicked.connect(lambda: self.main_function(self.Btn_9))
# ===========================================
# MAIN FUNCTION
    def main_function(self, a):
        self.check()
        if a.text() != self.change_player2 and a.text() != self.change_player1:
            a.setText(self.change_player1)
            if self.change_player1 == 'X':
                self.change_player1 = 'O'
                self.change_player2 = 'X'
            else:
                self.change_player1 = 'X'
                self.change_player2 = 'O'
        self.check()
# ===========================================
# DEFINE THE WINNER PLAYER
    def check(self):
        pass
        if (self.Btn_1.text() != ' ' and self.Btn_1.text() == self.Btn_2.text() == self.Btn_3.text()) or \
            (self.Btn_4.text() != ' ' and self.Btn_4.text() == self.Btn_5.text() == self.Btn_6.text()) or \
            (self.Btn_7.text() != ' ' and self.Btn_7.text() == self.Btn_8.text() == self.Btn_9.text()) or \
            (self.Btn_1.text() != ' ' and self.Btn_1.text() == self.Btn_4.text() == self.Btn_9.text()) or \
            (self.Btn_2.text() != ' ' and self.Btn_2.text() == self.Btn_5.text() == self.Btn_9.text()) or \
            (self.Btn_3.text() != ' ' and self.Btn_3.text() == self.Btn_5.text() == self.Btn_8.text()) or \
            (self.Btn_1.text() != ' ' and self.Btn_1.text() == self.Btn_5.text() == self.Btn_7.text()) or \
            (self.Btn_2.text() != ' ' and self.Btn_2.text() == self.Btn_6.text() == self.Btn_7.text()):
            self.win_pl = f"Natija : {self.change_player2} --> g'olib !!!"
            if self.change_player2 == 'X':
                self.player1 += 1
            else:
                self.player2 += 1
            self.win_msg()
        elif  self.Btn_1.text() != ' ' and self.Btn_2.text() != ' ' and self.Btn_3.text() != ' ' and \
            self.Btn_4.text() != ' ' and self.Btn_5.text() != ' ' and self.Btn_8.text() != ' ' and \
            self.Btn_6.text() != ' ' and self.Btn_7.text() != ' ' and self.Btn_9.text() != ' ':
                self.win_msg()
# ===========================================
# WINNER MESSAGE
    def win_msg(self):
        msg = QMessageBox()
        msg.resize(500, 500)
        msg.setText(f"<font size='20'>{self.win_pl}<font>")
        msg.setWindowTitle("WIN !!!")
        msg.setIcon(QMessageBox.Warning)
        x = msg.exec_()
        self.refresh()

# ===========================================
# REFRESH THE BOARD
    def refresh(self):
        for i in self.lst:
            i.setText(' ')
            self.change_player1 = 'X'
            self.change_player2 = 'O'
        self.label.setText(f"| {self.player1} : {self.player2} |")
        self.win_pl = "Natija : Durrang !!!"


app = QApplication(sys.argv)
window = Tic_Tac_toe()
window.show()
sys.exit(app.exec_())

