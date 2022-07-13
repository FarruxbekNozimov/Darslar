from PyQt5.QtWidgets import QLabel, QPushButton, QApplication, QWidget, QMessageBox
from PyQt5.QtGui import QIcon
import sys

class Chess(QWidget):
    def __init__(self):
        super().__init__()
        self.start()
        self.setGeometry(300, 50, 721, 641)
        self.setFixedSize(722, 642)
        self.setWindowTitle('My Chess')
        self.window_stl = "border-radius:7px;font: 45pt bold Agency FB;height:40px;border:2px solid black;"
        self.setStyleSheet(f"{self.window_stl}")
        self.setWindowIcon(QIcon('1.jpg'))

    def start(self):
        self.clicked_stl = "border:3px solid red;border-radius:9px;background-color: #11ff00;"
        self.white_stl = "background-color: #93e69b;"
        self.black_stl = "background-color: #227a2b;"
        self.black_color = "color: #020040;"
        self.white_color = "color: #fff;"
        self.whites = ['♖', '♘', '♗', '♕', '♔', '♙']
        self.blacks = ['♜', '♞', '♝', '♛', '♚', '♟']

        # SET QPUSHBUTTONS
        self.Btn_1 = QPushButton(self)
        self.Btn_2 = QPushButton(self)
        self.Btn_3 = QPushButton(self)
        self.Btn_4 = QPushButton(self)
        self.Btn_5 = QPushButton(self)
        self.Btn_6 = QPushButton(self)
        self.Btn_7 = QPushButton(self)
        self.Btn_8 = QPushButton(self)
        self.Btn_9 = QPushButton(self)
        self.Btn_10 = QPushButton(self)
        self.Btn_11 = QPushButton(self)
        self.Btn_12 = QPushButton(self)
        self.Btn_13 = QPushButton(self)
        self.Btn_14 = QPushButton(self)
        self.Btn_15 = QPushButton(self)
        self.Btn_16 = QPushButton(self)
        self.Btn_17 = QPushButton(self)
        self.Btn_18 = QPushButton(self)
        self.Btn_19 = QPushButton(self)
        self.Btn_20 = QPushButton(self)
        self.Btn_21 = QPushButton(self)
        self.Btn_22 = QPushButton(self)
        self.Btn_23 = QPushButton(self)
        self.Btn_24 = QPushButton(self)
        self.Btn_25 = QPushButton(self)
        self.Btn_26 = QPushButton(self)
        self.Btn_27 = QPushButton(self)
        self.Btn_28 = QPushButton(self)
        self.Btn_29 = QPushButton(self)
        self.Btn_30 = QPushButton(self)
        self.Btn_31 = QPushButton(self)
        self.Btn_32 = QPushButton(self)
        self.Btn_33 = QPushButton(self)
        self.Btn_34 = QPushButton(self)
        self.Btn_35 = QPushButton(self)
        self.Btn_36 = QPushButton(self)
        self.Btn_37 = QPushButton(self)
        self.Btn_38 = QPushButton(self)
        self.Btn_39 = QPushButton(self)
        self.Btn_40 = QPushButton(self)
        self.Btn_41 = QPushButton(self)
        self.Btn_42 = QPushButton(self)
        self.Btn_43 = QPushButton(self)
        self.Btn_44 = QPushButton(self)
        self.Btn_45 = QPushButton(self)
        self.Btn_46 = QPushButton(self)
        self.Btn_47 = QPushButton(self)
        self.Btn_48 = QPushButton(self)
        self.Btn_49 = QPushButton(self)
        self.Btn_50 = QPushButton(self)
        self.Btn_51 = QPushButton(self)
        self.Btn_52 = QPushButton(self)
        self.Btn_53 = QPushButton(self)
        self.Btn_54 = QPushButton(self)
        self.Btn_55 = QPushButton(self)
        self.Btn_56 = QPushButton(self)
        self.Btn_57 = QPushButton(self)
        self.Btn_58 = QPushButton(self)
        self.Btn_59 = QPushButton(self)
        self.Btn_60 = QPushButton(self)
        self.Btn_61 = QPushButton(self)
        self.Btn_62 = QPushButton(self)
        self.Btn_63 = QPushButton(self)
        self.Btn_64 = QPushButton(self)

        # SET GEOMETRY OF ELEMENTS
        self.Btn_1.setGeometry(0, 0, 91, 81)
        self.Btn_2.setGeometry(90, 0, 91, 81)
        self.Btn_3.setGeometry(180, 0, 91, 81)
        self.Btn_4.setGeometry(270, 0, 91, 81)
        self.Btn_5.setGeometry(360, 0, 91, 81)
        self.Btn_6.setGeometry(450, 0, 91, 81)
        self.Btn_7.setGeometry(540, 0, 91, 81)
        self.Btn_8.setGeometry(630, 0, 91, 81)
        self.Btn_9.setGeometry(0, 80, 91, 81)
        self.Btn_10.setGeometry(90, 80, 91, 81)
        self.Btn_11.setGeometry(180, 80, 91, 81)
        self.Btn_12.setGeometry(270, 80, 91, 81)
        self.Btn_13.setGeometry(360, 80, 91, 81)
        self.Btn_14.setGeometry(450, 80, 91, 81)
        self.Btn_15.setGeometry(540, 80, 91, 81)
        self.Btn_16.setGeometry(630, 80, 91, 81)
        self.Btn_17.setGeometry(0, 160, 91, 81)
        self.Btn_18.setGeometry(90, 160, 91, 81)
        self.Btn_19.setGeometry(180, 160, 91, 81)
        self.Btn_20.setGeometry(270, 160, 91, 81)
        self.Btn_21.setGeometry(360, 160, 91, 81)
        self.Btn_22.setGeometry(450, 160, 91, 81)
        self.Btn_23.setGeometry(540, 160, 91, 81)
        self.Btn_24.setGeometry(630, 160, 91, 81)
        self.Btn_25.setGeometry(0, 240, 91, 81)
        self.Btn_26.setGeometry(90, 240, 91, 81)
        self.Btn_27.setGeometry(180, 240, 91, 81)
        self.Btn_28.setGeometry(270, 240, 91, 81)
        self.Btn_29.setGeometry(360, 240, 91, 81)
        self.Btn_30.setGeometry(450, 240, 91, 81)
        self.Btn_31.setGeometry(540, 240, 91, 81)
        self.Btn_32.setGeometry(630, 240, 91, 81)
        self.Btn_33.setGeometry(0, 320, 91, 81)
        self.Btn_34.setGeometry(90, 320, 91, 81)
        self.Btn_35.setGeometry(180, 320, 91, 81)
        self.Btn_36.setGeometry(270, 320, 91, 81)
        self.Btn_37.setGeometry(360, 320, 91, 81)
        self.Btn_38.setGeometry(450, 320, 91, 81)
        self.Btn_39.setGeometry(540, 320, 91, 81)
        self.Btn_40.setGeometry(630, 320, 91, 81)
        self.Btn_41.setGeometry(0, 400, 91, 81)
        self.Btn_42.setGeometry(90, 400, 91, 81)
        self.Btn_43.setGeometry(180, 400, 91, 81)
        self.Btn_44.setGeometry(270, 400, 91, 81)
        self.Btn_45.setGeometry(360, 400, 91, 81)
        self.Btn_46.setGeometry(450, 400, 91, 81)
        self.Btn_47.setGeometry(540, 400, 91, 81)
        self.Btn_48.setGeometry(630, 400, 91, 81)
        self.Btn_49.setGeometry(0, 480, 91, 81)
        self.Btn_50.setGeometry(90, 480, 91, 81)
        self.Btn_51.setGeometry(180, 480, 91, 81)
        self.Btn_52.setGeometry(270, 480, 91, 81)
        self.Btn_53.setGeometry(360, 480, 91, 81)
        self.Btn_54.setGeometry(450, 480, 91, 81)
        self.Btn_55.setGeometry(540, 480, 91, 81)
        self.Btn_56.setGeometry(630, 480, 91, 81)
        self.Btn_57.setGeometry(0, 560, 91, 81)
        self.Btn_58.setGeometry(90, 560, 91, 81)
        self.Btn_59.setGeometry(180, 560, 91, 81)
        self.Btn_60.setGeometry(270, 560, 91, 81)
        self.Btn_61.setGeometry(360, 560, 91, 81)
        self.Btn_62.setGeometry(450, 560, 91, 81)
        self.Btn_63.setGeometry(540, 560, 91, 81)
        self.Btn_64.setGeometry(630, 560, 91, 81)

        # SET STYLE ELEMENTS
        self.Btn_1.setStyleSheet(self.white_stl)
        self.Btn_2.setStyleSheet(self.black_stl)
        self.Btn_3.setStyleSheet(self.white_stl)
        self.Btn_4.setStyleSheet(self.black_stl)
        self.Btn_5.setStyleSheet(self.white_stl)
        self.Btn_6.setStyleSheet(self.black_stl)
        self.Btn_7.setStyleSheet(self.white_stl)
        self.Btn_8.setStyleSheet(self.black_stl)
        self.Btn_9.setStyleSheet(self.black_stl)
        self.Btn_10.setStyleSheet(self.white_stl)
        self.Btn_11.setStyleSheet(self.black_stl)
        self.Btn_12.setStyleSheet(self.white_stl)
        self.Btn_13.setStyleSheet(self.black_stl)
        self.Btn_14.setStyleSheet(self.white_stl)
        self.Btn_15.setStyleSheet(self.black_stl)
        self.Btn_16.setStyleSheet(self.white_stl)
        self.Btn_17.setStyleSheet(self.white_stl)
        self.Btn_18.setStyleSheet(self.black_stl)
        self.Btn_19.setStyleSheet(self.white_stl)
        self.Btn_20.setStyleSheet(self.black_stl)
        self.Btn_21.setStyleSheet(self.white_stl)
        self.Btn_22.setStyleSheet(self.black_stl)
        self.Btn_23.setStyleSheet(self.white_stl)
        self.Btn_24.setStyleSheet(self.black_stl)
        self.Btn_25.setStyleSheet(self.black_stl)
        self.Btn_26.setStyleSheet(self.white_stl)
        self.Btn_27.setStyleSheet(self.black_stl)
        self.Btn_28.setStyleSheet(self.white_stl)
        self.Btn_29.setStyleSheet(self.black_stl)
        self.Btn_30.setStyleSheet(self.white_stl)
        self.Btn_31.setStyleSheet(self.black_stl)
        self.Btn_32.setStyleSheet(self.white_stl)
        self.Btn_33.setStyleSheet(self.white_stl)
        self.Btn_34.setStyleSheet(self.black_stl)
        self.Btn_35.setStyleSheet(self.white_stl)
        self.Btn_36.setStyleSheet(self.black_stl)
        self.Btn_37.setStyleSheet(self.white_stl)
        self.Btn_38.setStyleSheet(self.black_stl)
        self.Btn_39.setStyleSheet(self.white_stl)
        self.Btn_40.setStyleSheet(self.black_stl)
        self.Btn_41.setStyleSheet(self.black_stl)
        self.Btn_42.setStyleSheet(self.white_stl)
        self.Btn_43.setStyleSheet(self.black_stl)
        self.Btn_44.setStyleSheet(self.white_stl)
        self.Btn_45.setStyleSheet(self.black_stl)
        self.Btn_46.setStyleSheet(self.white_stl)
        self.Btn_47.setStyleSheet(self.black_stl)
        self.Btn_48.setStyleSheet(self.white_stl)
        self.Btn_49.setStyleSheet(self.white_stl)
        self.Btn_50.setStyleSheet(self.black_stl)
        self.Btn_51.setStyleSheet(self.white_stl)
        self.Btn_52.setStyleSheet(self.black_stl)
        self.Btn_53.setStyleSheet(self.white_stl)
        self.Btn_54.setStyleSheet(self.black_stl)
        self.Btn_55.setStyleSheet(self.white_stl)
        self.Btn_56.setStyleSheet(self.black_stl)
        self.Btn_57.setStyleSheet(self.black_stl)
        self.Btn_58.setStyleSheet(self.white_stl)
        self.Btn_59.setStyleSheet(self.black_stl)
        self.Btn_60.setStyleSheet(self.white_stl)
        self.Btn_61.setStyleSheet(self.black_stl)
        self.Btn_62.setStyleSheet(self.white_stl)
        self.Btn_63.setStyleSheet(self.black_stl)
        self.Btn_64.setStyleSheet(self.white_stl)

        self.Btn_1.clicked.connect(lambda: self.st_move(self.Btn_1))
        self.Btn_2.clicked.connect(lambda: self.st_move(self.Btn_2))
        self.Btn_3.clicked.connect(lambda: self.st_move(self.Btn_3))
        self.Btn_4.clicked.connect(lambda: self.st_move(self.Btn_4))
        self.Btn_5.clicked.connect(lambda: self.st_move(self.Btn_5))
        self.Btn_6.clicked.connect(lambda: self.st_move(self.Btn_6))
        self.Btn_7.clicked.connect(lambda: self.st_move(self.Btn_7))
        self.Btn_8.clicked.connect(lambda: self.st_move(self.Btn_8))
        self.Btn_9.clicked.connect(lambda: self.st_move(self.Btn_9))
        self.Btn_10.clicked.connect(lambda: self.st_move(self.Btn_10))
        self.Btn_11.clicked.connect(lambda: self.st_move(self.Btn_11))
        self.Btn_12.clicked.connect(lambda: self.st_move(self.Btn_12))
        self.Btn_13.clicked.connect(lambda: self.st_move(self.Btn_13))
        self.Btn_14.clicked.connect(lambda: self.st_move(self.Btn_14))
        self.Btn_15.clicked.connect(lambda: self.st_move(self.Btn_15))
        self.Btn_16.clicked.connect(lambda: self.st_move(self.Btn_16))
        self.Btn_17.clicked.connect(lambda: self.st_move(self.Btn_17))
        self.Btn_18.clicked.connect(lambda: self.st_move(self.Btn_18))
        self.Btn_19.clicked.connect(lambda: self.st_move(self.Btn_19))
        self.Btn_20.clicked.connect(lambda: self.st_move(self.Btn_20))
        self.Btn_21.clicked.connect(lambda: self.st_move(self.Btn_21))
        self.Btn_22.clicked.connect(lambda: self.st_move(self.Btn_22))
        self.Btn_23.clicked.connect(lambda: self.st_move(self.Btn_23))
        self.Btn_24.clicked.connect(lambda: self.st_move(self.Btn_24))
        self.Btn_25.clicked.connect(lambda: self.st_move(self.Btn_25))
        self.Btn_26.clicked.connect(lambda: self.st_move(self.Btn_26))
        self.Btn_27.clicked.connect(lambda: self.st_move(self.Btn_27))
        self.Btn_28.clicked.connect(lambda: self.st_move(self.Btn_28))
        self.Btn_29.clicked.connect(lambda: self.st_move(self.Btn_29))
        self.Btn_30.clicked.connect(lambda: self.st_move(self.Btn_30))
        self.Btn_31.clicked.connect(lambda: self.st_move(self.Btn_31))
        self.Btn_32.clicked.connect(lambda: self.st_move(self.Btn_32))
        self.Btn_33.clicked.connect(lambda: self.st_move(self.Btn_33))
        self.Btn_34.clicked.connect(lambda: self.st_move(self.Btn_34))
        self.Btn_35.clicked.connect(lambda: self.st_move(self.Btn_35))
        self.Btn_36.clicked.connect(lambda: self.st_move(self.Btn_36))
        self.Btn_37.clicked.connect(lambda: self.st_move(self.Btn_37))
        self.Btn_38.clicked.connect(lambda: self.st_move(self.Btn_38))
        self.Btn_39.clicked.connect(lambda: self.st_move(self.Btn_39))
        self.Btn_40.clicked.connect(lambda: self.st_move(self.Btn_40))
        self.Btn_41.clicked.connect(lambda: self.st_move(self.Btn_41))
        self.Btn_42.clicked.connect(lambda: self.st_move(self.Btn_42))
        self.Btn_43.clicked.connect(lambda: self.st_move(self.Btn_43))
        self.Btn_44.clicked.connect(lambda: self.st_move(self.Btn_44))
        self.Btn_45.clicked.connect(lambda: self.st_move(self.Btn_45))
        self.Btn_46.clicked.connect(lambda: self.st_move(self.Btn_46))
        self.Btn_47.clicked.connect(lambda: self.st_move(self.Btn_47))
        self.Btn_48.clicked.connect(lambda: self.st_move(self.Btn_48))
        self.Btn_49.clicked.connect(lambda: self.st_move(self.Btn_49))
        self.Btn_50.clicked.connect(lambda: self.st_move(self.Btn_50))
        self.Btn_51.clicked.connect(lambda: self.st_move(self.Btn_51))
        self.Btn_52.clicked.connect(lambda: self.st_move(self.Btn_52))
        self.Btn_53.clicked.connect(lambda: self.st_move(self.Btn_53))
        self.Btn_54.clicked.connect(lambda: self.st_move(self.Btn_54))
        self.Btn_55.clicked.connect(lambda: self.st_move(self.Btn_55))
        self.Btn_56.clicked.connect(lambda: self.st_move(self.Btn_56))
        self.Btn_57.clicked.connect(lambda: self.st_move(self.Btn_57))
        self.Btn_58.clicked.connect(lambda: self.st_move(self.Btn_58))
        self.Btn_59.clicked.connect(lambda: self.st_move(self.Btn_59))
        self.Btn_60.clicked.connect(lambda: self.st_move(self.Btn_60))
        self.Btn_61.clicked.connect(lambda: self.st_move(self.Btn_61))
        self.Btn_62.clicked.connect(lambda: self.st_move(self.Btn_62))
        self.Btn_63.clicked.connect(lambda: self.st_move(self.Btn_63))
        self.Btn_64.clicked.connect(lambda: self.st_move(self.Btn_64))

        self.Btns = [
            [self.Btn_1, self.Btn_2, self.Btn_3, self.Btn_4, self.Btn_5, self.Btn_6, self.Btn_7, self.Btn_8, self.Btn_9],
            [self.Btn_9, self.Btn_10, self.Btn_11, self.Btn_12, self.Btn_13, self.Btn_14, self.Btn_15, self.Btn_16],
            [self.Btn_17, self.Btn_18, self.Btn_19, self.Btn_20, self.Btn_21, self.Btn_22, self.Btn_23, self.Btn_24],
            [self.Btn_25, self.Btn_26, self.Btn_27, self.Btn_28, self.Btn_29, self.Btn_30, self.Btn_31, self.Btn_32],
            [self.Btn_33, self.Btn_34, self.Btn_35, self.Btn_36, self.Btn_37, self.Btn_38, self.Btn_39, self.Btn_40],
            [self.Btn_41, self.Btn_42, self.Btn_43, self.Btn_44, self.Btn_45, self.Btn_46, self.Btn_47, self.Btn_48],
            [self.Btn_49, self.Btn_50, self.Btn_51, self.Btn_52, self.Btn_53, self.Btn_54, self.Btn_55, self.Btn_56],
            [self.Btn_57, self.Btn_58, self.Btn_59, self.Btn_60, self.Btn_61, self.Btn_62, self.Btn_63, self.Btn_64],

        ]
        self.stones = [
            ['♜', '♞', '♝', '♛', '♚', '♝', '♞', '♜'],
            ['♟', '♟', '♟', '♟', '♟', '♟', '♟', '♟'],
            [' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '],
            [' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '],
            [' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '],
            [' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '],
            ['♙', '♙', '♙', '♙', '♙', '♙', '♙', '♙'],
            ['♖', '♘', '♗', '♕', '♔', '♗', '♘', '♖']
        ]
        self.bos = " "
        self.qoy = " "
        self.move = 0
        self.first_position()
        self.check_white()

    def first_position(self):
        for i in range(len(self.Btns)):
            for j in range(len(self.Btns)):
                self.Btns[i][j].setText(self.stones[i][j])

    def check_white(self, obj=''):
        for i in range(len(self.Btns)):
            for j in range(len(self.Btns)):
                if self.Btns[i][j].text() in self.whites:
                    if i % 2 and j % 2 or i % 2 == 0 and j % 2 == 0:
                        self.Btns[i][j].setStyleSheet(f"{self.white_stl} {self.white_color};")
                    elif i % 2 and j % 2 == 0 or i % 2 == 0 and j % 2:
                        self.Btns[i][j].setStyleSheet(f"{self.black_stl} {self.white_color};")
                else:
                    if i % 2 and j % 2 or i % 2 == 0 and j % 2 == 0:
                        self.Btns[i][j].setStyleSheet(f"{self.white_stl} {self.black_color};")
                    elif i % 2 and j % 2 == 0 or i % 2 == 0 and j % 2:
                        self.Btns[i][j].setStyleSheet(f"{self.black_stl} {self.black_color};")
        if obj != '':
            if obj.text() in self.whites:
                obj.setStyleSheet(f"{self.clicked_stl} {self.white_color}")
            if obj.text() in self.blacks:
                obj.setStyleSheet(f"{self.clicked_stl} {self.black_color}")

    def st_move(self, obj):
        if self.qoy != " ":
            if obj.text() in self.whites and self.qoy in self.whites:
                self.check_white('')
                self.qoy = " "
                return False
            elif obj.text() in self.blacks and self.qoy in self.blacks:
                self.check_white('')
                self.qoy = " "
                return False
            if self.qoy == '♙' and self.ch_pioda_white(obj) or \
            self.qoy == '♟' and self.ch_pioda_black(obj) or \
            self.qoy == '♔' and self.ch_shoh(obj) or \
            self.qoy == '♚' and self.ch_shoh(obj) or \
            self.qoy == '♘' and self.ch_ot(obj) or \
            self.qoy == '♞' and self.ch_ot(obj) or \
            self.qoy == '♜' and self.ch_tora(obj) or \
            self.qoy == '♖' and self.ch_tora(obj) or \
            self.qoy == '♗' and self.ch_fil(obj) or \
            self.qoy == '♝' and self.ch_fil(obj) or \
            self.qoy == '♛' and self.ch_farzin(obj) or \
            self.qoy == '♕' and self.ch_farzin(obj):
                obj.setText(self.qoy)
                self.bos.setText(' ')
            self.qoy = " "
            self.check_white('')
        else:
            self.bos = obj
            self.qoy = obj.text()
            self.check_white(obj)

    def ch_pioda_white(self, obj):
        for i in range(len(self.Btns)):
            for j in range(len(self.Btns)):
                if obj == self.Btns[0][j]:
                    self.qoy = '♕'
                if self.bos == self.Btns[i][j] and self.Btns[i-1][j].text() == ' ':
                    if self.Btns[i-1][j] == obj:
                        return True
                if self.bos == self.Btns[i][j] and self.Btns[i-2][j].text() == ' ':
                    if i == 6 and self.Btns[i-2][j] == obj and self.Btns[i-1][j].text() == ' ':
                        return True
                if i-1 < len(self.Btns) and j-1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-1][j-1] == obj and obj.text() != ' ':
                    return True
                if i-1 < len(self.Btns) and j+1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-1][j+1] == obj and obj.text() != ' ':
                    return True

        return False

    def ch_pioda_black(self, obj):
        for i in range(len(self.Btns)):
            for j in range(len(self.Btns)):
                if obj == self.Btns[7][j]:
                    self.qoy = '♛'
                if self.bos == self.Btns[i][j] and self.Btns[i+1][j].text() == ' ':
                    if self.Btns[i+1][j] == obj:
                        return True
                if i + 2 < len(self.Btns)-1 and self.bos == self.Btns[i][j] and self.Btns[i+2][j].text() == ' ':
                    if i == 1 and self.Btns[i+2][j] == obj and self.Btns[i+1][j].text() == ' ':
                        return True
                if i+1 < len(self.Btns) and j+1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+1][j+1] == obj and obj.text() != ' ':
                    return True
                if i+1 < len(self.Btns) and j-1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+1][j-1] == obj and obj.text() != ' ':
                    return True

        return False

    def ch_shoh(self, obj):
        for i in range(len(self.Btns)):
            for j in range(len(self.Btns)):
                if i+1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+1][j] == obj:
                    return True
                if i-1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-1][j] == obj:
                    return True
                if i-1 < len(self.Btns) and j+1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-1][j+1] == obj:
                    return True
                if i-1 < len(self.Btns) and j-1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-1][j-1] == obj:
                    return True
                if i+1 < len(self.Btns) and j+1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+1][j+1] == obj:
                    return True
                if i+1 < len(self.Btns) and j-1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+1][j-1] == obj:
                    return True
                if j+1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i][j+1] == obj:
                    return True
                if j-1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i][j-1] == obj:
                    return True

    def ch_ot(self, obj):
        for i in range(len(self.Btns)):
            for j in range(len(self.Btns)):
                if i-2 < len(self.Btns) and j-1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-2][j-1] == obj:
                    return True
                if i-2 < len(self.Btns) and j+1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-2][j+1] == obj:
                    return True
                if i-1 < len(self.Btns) and j+2 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-1][j+2] == obj:
                    return True
                if i-1 < len(self.Btns) and j-2 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-1][j-2] == obj:
                    return True
                if i+2 < len(self.Btns) and j-1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+2][j-1] == obj:
                    return True
                if i+2 < len(self.Btns) and j+1 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+2][j+1] == obj:
                    return True
                if i+1 < len(self.Btns) and j-2 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+1][j-2] == obj:
                    return True
                if i+1 < len(self.Btns) and j+2 < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+1][j+2] == obj:
                    return True
        return False

    def ch_tora(self, obj):
        for i in range(len(self.Btns)):
            for j in range(len(self.Btns)):
                for k in range(len(self.Btns)):
                    if i+k < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+k][j] == obj:
                        for l in range(i+1, i+k):
                            if self.Btns[l][j].text() != ' ':
                                return False
                        return True
                    if i-k < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-k][j] == obj:
                        for l in range(i-k, i-1):
                            if self.Btns[l+1][j].text() != ' ':
                                return False
                        return True
                    if j+k < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i][j+k] == obj:
                        for l in range(j+1, j+k):
                            if self.Btns[i][l].text() != ' ':
                                return False
                        return True
                    if j-k < len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i][j-k] == obj:
                        for l in range(j-k, j-1):
                            if self.Btns[i][l+1].text() != ' ':
                                return False
                        return True

    def ch_fil(self, obj):
        for i in range(len(self.Btns)):
            for j in range(len(self.Btns)):
                for k in range(len(self.Btns)):
                    if i-k<len(self.Btns) and j-k<len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-k][j-k] == obj:
                        return True
                    if i-k<len(self.Btns) and j+k<len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i-k][j+k] == obj:
                        return True
                    if i+k<len(self.Btns) and j-k<len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+k][j-k] == obj:
                        return True
                    if i+k<len(self.Btns) and j+k<len(self.Btns) and self.bos == self.Btns[i][j] and self.Btns[i+k][j+k] == obj:
                        return True

    def ch_farzin(self, obj):
        if self.ch_fil(obj) or self.ch_tora(obj):
            return True
        return False

app = QApplication(sys.argv)
window = Chess()
window.show()
sys.exit(app.exec_())