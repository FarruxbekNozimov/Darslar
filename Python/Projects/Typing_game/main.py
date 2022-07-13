from PyQt5.QtWidgets import QMessageBox, QPushButton, QLabel, QWidget, QApplication, QLineEdit
from PyQt5.QtCore import Qt
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
import threading
import time
import sys
import random as r


class Typing(QWidget):
    counter = pyqtSignal(str)
    counting = False

    def __init__(self):
        super().__init__()
        self.start()
        self.setWindowTitle("TYPING GAME")
        self.setFixedSize(1062, 578)
        self.setStyleSheet("font:26pt 'Agency FB';border-radius: 30px;margin:5px;background: rgba(0, 184, 255, 0.64);box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(0px);-webkit-backdrop-filter: blur(0px);border: 1px solid rgba(0, 184, 255, 1);")

    def startCounting(self):
        if not self.counting:
            self.counting = True
            thread = threading.Thread(target=self.something)
            thread.start()

    def something(self):
        for x in range(59, -1, -1):
            self.counter.emit(f" {x:2d}s")
            time.sleep(1)

    def start(self):
        self.lineEdit = QLineEdit(self)
        self.label = QLabel(self)
        self.Show_word = QLabel(self)
        self.time_btn = QLabel(self)
        self.Wpm = QLabel(self)
        self.l_True = QLabel('60', self)
        self.counter.connect(self.time_btn.setText)
        self.startCounting()

        self.Btn_W = QPushButton(self)
        self.Btn_E = QPushButton(self)
        self.Btn_R = QPushButton(self)
        self.Btn_T = QPushButton(self)
        self.Btn_O = QPushButton(self)
        self.Btn_I = QPushButton(self)
        self.Btn_U = QPushButton(self)
        self.Btn_Y = QPushButton(self)
        self.Btn_P = QPushButton(self)
        self.Btn_Q = QPushButton(self)
        self.Btn_L = QPushButton(self)
        self.Btn_K = QPushButton(self)
        self.Btn_J = QPushButton(self)
        self.Btn_H = QPushButton(self)
        self.Btn_G = QPushButton(self)
        self.Btn_F = QPushButton(self)
        self.Btn_D = QPushButton(self)
        self.Btn_S = QPushButton(self)
        self.Btn_A = QPushButton(self)
        self.Btn_M = QPushButton(self)
        self.Btn_Z = QPushButton(self)
        self.Btn_X = QPushButton(self)
        self.Btn_C = QPushButton(self)
        self.Btn_V = QPushButton(self)
        self.Btn_B = QPushButton(self)
        self.Btn_N = QPushButton(self)
        self.Btn_Shift = QPushButton(self)
        self.Btn_Back = QPushButton(self)
        self.Btn_Enter = QPushButton(self)
        self.Btn_Space = QPushButton(self)
        self.Btn_Vergul = QPushButton(self)
        self.Btn_Dot = QPushButton(self)
        self.Btn_Tir = QPushButton(self)

        self.label.setGeometry(70, 20, 921, 541)
        self.Show_word.setGeometry(180, 40, 520, 81)
        self.time_btn.setGeometry(100, 39, 80, 81)
        self.Wpm.setGeometry(700, 40, 141, 81)
        self.l_True.setGeometry(840, 40, 111, 81)
        self.lineEdit.setGeometry(100, 140, 861, 71)
        self.Btn_W.setGeometry(170, 230, 75, 71)
        self.Btn_E.setGeometry(240, 230, 75, 71)
        self.Btn_R.setGeometry(310, 230, 75, 71)
        self.Btn_T.setGeometry(380, 230, 75, 71)
        self.Btn_O.setGeometry(660, 230, 75, 71)
        self.Btn_I.setGeometry(590, 230, 75, 71)
        self.Btn_U.setGeometry(520, 230, 75, 71)
        self.Btn_Y.setGeometry(450, 230, 75, 71)
        self.Btn_P.setGeometry(730, 230, 75, 71)
        self.Btn_Q.setGeometry(100, 230, 75, 71)
        self.Btn_L.setGeometry(690, 320, 75, 71)
        self.Btn_K.setGeometry(620, 320, 75, 71)
        self.Btn_J.setGeometry(550, 320, 75, 71)
        self.Btn_H.setGeometry(480, 320, 75, 71)
        self.Btn_G.setGeometry(410, 320, 75, 71)
        self.Btn_F.setGeometry(340, 320, 75, 71)
        self.Btn_D.setGeometry(270, 320, 75, 71)
        self.Btn_S.setGeometry(200, 320, 75, 71)
        self.Btn_A.setGeometry(104, 320, 101, 71)
        self.Btn_M.setGeometry(690, 400, 75, 71)
        self.Btn_Z.setGeometry(270, 400, 75, 71)
        self.Btn_X.setGeometry(340, 400, 75, 71)
        self.Btn_C.setGeometry(410, 400, 75, 71)
        self.Btn_V.setGeometry(480, 400, 75, 71)
        self.Btn_B.setGeometry(550, 400, 75, 71)
        self.Btn_N.setGeometry(620, 400, 75, 71)
        self.Btn_Space.setGeometry(100, 479, 861, 61)
        self.Btn_Vergul.setGeometry(760, 400, 75, 71)
        self.Btn_Dot.setGeometry(830, 400, 75, 71)
        self.Btn_Back.setGeometry(800, 230, 161, 71)
        self.Btn_Enter.setGeometry(763, 320, 211, 71)
        self.Btn_Tir.setGeometry(900, 400, 75, 71)
        self.Btn_Shift.setGeometry(100, 400, 171, 71)
        self.lineEdit.setAlignment(Qt.AlignCenter)
        self.lineEdit.setPlaceholderText("Matnni kiriting...")


        self.label.setStyleSheet("color:red;background: rgba(8, 105, 20, 0.64);border-radius: 16px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(0px);-webkit-backdrop-filter: blur(0px);border: 1px solid rgba(8, 105, 20, 1);")
        self.Show_word.setStyleSheet("color: yellow;font: 30pt 'Agency FB';padding:0 auto;font: 33pt 'Agency FB';background: rgba(77, 78, 77, 0.64);border-radius: 30px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(0px);-webkit-backdrop-filter: blur(0px);border: 3px solid orange;")
        self.time_btn.setStyleSheet("color:yellow;background: rgba(84, 240, 78, 0.46);border-radius:30px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(4.1px);-webkit-backdrop-filter: blur(4.1px);border: 2px dashed rgba(84, 240, 78, 1);")
        self.Wpm.setStyleSheet("color:yellow;background: rgba(84, 240, 78, 0.46);border-radius:30px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(4.1px);-webkit-backdrop-filter: blur(4.1px);border: 2px dashed rgba(84, 240, 78, 1);")
        self.l_True.setStyleSheet("color:yellow;background: rgba(84, 240, 78, 0.46);border-radius:30px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(4.1px);-webkit-backdrop-filter: blur(4.1px);border: 2px dashed rgba(84, 240, 78, 1);")
        self.lineEdit.setStyleSheet("color: yellow;font: 30pt 'Agency FB';padding:0 auto;font: 33pt 'Agency FB';background: rgba(77, 78, 77, 0.64);border-radius: 30px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(0px);-webkit-backdrop-filter: blur(0px);border: 3px solid orange;")
        self.Btn_Space.setStyleSheet("border-radius:20px;")

        self.Show_word.setText("<center>Welcome To Fast Type</center>")
        self.time_btn.setText("<center>30s</center>")

        self.Wpm.setText("<center>0 WPM</center>")
        self.l_True.setText("<center>0 %</center>")

        self.btns = {'A': self.Btn_A, 'B': self.Btn_B, 'C': self.Btn_C, 'D': self.Btn_D, 'E': self.Btn_E, 'F': self.Btn_F,
                      'G': self.Btn_G, 'H': self.Btn_H, 'I': self.Btn_I, 'J': self.Btn_J, 'K': self.Btn_K, 'L': self.Btn_L,
                      'M': self.Btn_M, 'N': self.Btn_N, 'O': self.Btn_O, 'P': self.Btn_P, 'Q': self.Btn_Q, 'R': self.Btn_R,
                      'S': self.Btn_S, 'T': self.Btn_T, 'U': self.Btn_U, 'V': self.Btn_V, 'W': self.Btn_W, 'X': self.Btn_X,
                      'Y': self.Btn_Y, 'Z': self.Btn_Z, '↵   Enter': self.Btn_Enter, 'Space': self.Btn_Space, '.': self.Btn_Dot,
                      '← Back': self.Btn_Back, ',': self.Btn_Vergul, "'": self.Btn_Tir, 'Shift ↑': self.Btn_Shift}
        self.shortcuts = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T','U', 'V', 'W', 'X', 'Y', 'Z', 'Return', 'Space', '.', 'Backspace', ',', "'", 'Shift']
        for i, val in enumerate(self.btns):
            self.btns[val].setText(f"{val}")
            self.btns[val].setShortcut(f"{self.shortcuts[i]}")


        self.Btn_A.clicked.connect(lambda : self.run(self.Btn_A))
        self.Btn_B.clicked.connect(lambda : self.run(self.Btn_B))
        self.Btn_C.clicked.connect(lambda : self.run(self.Btn_C))
        self.Btn_D.clicked.connect(lambda : self.run(self.Btn_D))
        self.Btn_E.clicked.connect(lambda : self.run(self.Btn_E))
        self.Btn_F.clicked.connect(lambda : self.run(self.Btn_F))
        self.Btn_G.clicked.connect(lambda : self.run(self.Btn_G))
        self.Btn_H.clicked.connect(lambda : self.run(self.Btn_H))
        self.Btn_I.clicked.connect(lambda : self.run(self.Btn_I))
        self.Btn_J.clicked.connect(lambda : self.run(self.Btn_J))
        self.Btn_K.clicked.connect(lambda : self.run(self.Btn_K))
        self.Btn_L.clicked.connect(lambda : self.run(self.Btn_L))
        self.Btn_M.clicked.connect(lambda : self.run(self.Btn_M))
        self.Btn_N.clicked.connect(lambda : self.run(self.Btn_N))
        self.Btn_O.clicked.connect(lambda : self.run(self.Btn_O))
        self.Btn_P.clicked.connect(lambda : self.run(self.Btn_P))
        self.Btn_Q.clicked.connect(lambda : self.run(self.Btn_Q))
        self.Btn_R.clicked.connect(lambda : self.run(self.Btn_R))
        self.Btn_S.clicked.connect(lambda : self.run(self.Btn_S))
        self.Btn_T.clicked.connect(lambda : self.run(self.Btn_T))
        self.Btn_U.clicked.connect(lambda : self.run(self.Btn_U))
        self.Btn_V.clicked.connect(lambda : self.run(self.Btn_V))
        self.Btn_W.clicked.connect(lambda : self.run(self.Btn_W))
        self.Btn_X.clicked.connect(lambda : self.run(self.Btn_X))
        self.Btn_Y.clicked.connect(lambda : self.run(self.Btn_Y))
        self.Btn_Z.clicked.connect(lambda : self.run(self.Btn_Z))
        self.Btn_Enter.clicked.connect(lambda : self.run(self.Btn_Enter))
        self.Btn_Dot.clicked.connect(lambda : self.run(self.Btn_Dot))
        self.Btn_Back.clicked.connect(lambda : self.run(self.Btn_Back))
        self.Btn_Vergul.clicked.connect(lambda : self.run(self.Btn_Vergul))
        self.Btn_Tir.clicked.connect(lambda : self.run(self.Btn_Tir))
        self.Btn_Shift.clicked.connect(lambda : self.run(self.Btn_Shift))
        self.Btn_Space.clicked.connect(lambda : self.run(self.Btn_Space))
        self.type_text = ''
        self.choose_text = ''
        # self.label_word()
        # self.Show_word.setText(f"<center>{self.choose_text}</center>")

    def run(self, name_btn):
        self.label_word()
        # print(self.choose_text)
        if name_btn.text() == '↵   Enter':
            self.lineEdit.setText('')

    def label_word(self):
        with open('words.txt') as f:
            self.words = f.read().split()


app = QApplication(sys.argv)
typeing = Typing()
typeing.show()
sys.exit(app.exec_())

