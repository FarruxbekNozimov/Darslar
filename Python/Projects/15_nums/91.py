from PyQt5.QtWidgets import QLabel, QPushButton, QApplication, QWidget, QMessageBox
import sys
import random as r

class Puzzle_90(QWidget):
    def __init__(self):
        super().__init__()
        self.start()
    def start(self):
        self.resize(1062, 581)
        self.setStyleSheet("border-radius: 16px;margin:5px;font: 30pt Agency FB;background-color: lightblue;border:3px solid black;")
        self.emp_stl = "background-image:url('1.jpg');box-shadow: rgba(0, 0, 0, 0.17) 0px -23px 25px 0px inset, rgba(0, 0, 0, 0.15) 0px -36px 30px 0px inset, rgba(0, 0, 0, 0.1) 0px -79px 40px 0px inset, rgba(0, 0, 0, 0.06) 0px 2px 1px, rgba(0, 0, 0, 0.09) 0px 4px 2px, rgba(0, 0, 0, 0.09) 0px 8px 4px, rgba(0, 0, 0, 0.09) 0px 16px 8px, rgba(0, 0, 0, 0.09) 0px 32px 16px;"
        self.B1 = QPushButton(self)
        self.B1.setGeometry(10, 10, 81, 81)
        self.B1.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B11 = QPushButton(self)
        self.B11.setGeometry(90, 10, 81, 81)
        self.B11.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B17 = QPushButton(self)
        self.B17.setGeometry(170, 10, 81, 81)
        self.B17.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B23 = QPushButton(self)
        self.B23.setGeometry(250, 10, 81, 81)
        self.B23.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B29 = QPushButton(self)
        self.B29.setGeometry(330, 10, 81, 81)
        self.B29.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B35 = QPushButton(self)
        self.B35.setGeometry(410, 10, 81, 81)
        self.B35.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B41 = QPushButton(self)
        self.B41.setGeometry(490, 10, 81, 81)
        self.B41.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B47 = QPushButton(self)
        self.B47.setGeometry(570, 10, 81, 81)
        self.B47.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B53 = QPushButton(self)
        self.B53.setGeometry(650, 10, 81, 81)
        self.B53.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B59 = QPushButton(self)
        self.B59.setGeometry(730, 10, 81, 81)
        self.B59.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B65 = QPushButton(self)
        self.B65.setGeometry(810, 10, 81, 81)
        self.B65.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B71 = QPushButton(self)
        self.B71.setGeometry(890, 10, 81, 81)
        self.B71.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B78 = QPushButton(self)
        self.B78.setGeometry(970, 10, 81, 81)
        self.B78.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B30 = QPushButton(self)
        self.B30.setGeometry(330, 90, 81, 81)
        self.B30.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B36 = QPushButton(self)
        self.B36.setGeometry(410, 90, 81, 81)
        self.B36.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B66 = QPushButton(self)
        self.B66.setGeometry(810, 90, 81, 81)
        self.B66.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B42 = QPushButton(self)
        self.B42.setGeometry(490, 90, 81, 81)
        self.B42.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B12 = QPushButton(self)
        self.B12.setGeometry(90, 90, 81, 81)
        self.B12.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B79 = QPushButton(self)
        self.B79.setGeometry(970, 90, 81, 81)
        self.B79.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B60 = QPushButton(self)
        self.B60.setGeometry(730, 90, 81, 81)
        self.B60.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B2 = QPushButton(self)
        self.B2.setGeometry(10, 90, 81, 81)
        self.B2.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B18 = QPushButton(self)
        self.B18.setGeometry(170, 90, 81, 81)
        self.B18.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B48 = QPushButton(self)
        self.B48.setGeometry(570, 90, 81, 81)
        self.B48.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B24 = QPushButton(self)
        self.B24.setGeometry(250, 90, 81, 81)
        self.B24.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B54 = QPushButton(self)
        self.B54.setGeometry(650, 90, 81, 81)
        self.B54.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B72 = QPushButton(self)
        self.B72.setGeometry(890, 90, 81, 81)
        self.B72.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B31 = QPushButton(self)
        self.B31.setGeometry(330, 170, 81, 81)
        self.B31.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B37 = QPushButton(self)
        self.B37.setGeometry(410, 170, 81, 81)
        self.B37.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B67 = QPushButton(self)
        self.B67.setGeometry(810, 170, 81, 81)
        self.B67.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B43 = QPushButton(self)
        self.B43.setGeometry(490, 170, 81, 81)
        self.B43.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B13 = QPushButton(self)
        self.B13.setGeometry(90, 170, 81, 81)
        self.B13.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B80 = QPushButton(self)
        self.B80.setGeometry(970, 170, 81, 81)
        self.B80.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B61 = QPushButton(self)
        self.B61.setGeometry(730, 170, 81, 81)
        self.B61.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B3 = QPushButton(self)
        self.B3.setGeometry(10, 170, 81, 81)
        self.B3.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B19 = QPushButton(self)
        self.B19.setGeometry(170, 170, 81, 81)
        self.B19.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B49 = QPushButton(self)
        self.B49.setGeometry(570, 170, 81, 81)
        self.B49.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B25 = QPushButton(self)
        self.B25.setGeometry(250, 170, 81, 81)
        self.B25.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B55 = QPushButton(self)
        self.B55.setGeometry(650, 170, 81, 81)
        self.B55.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B73 = QPushButton(self)
        self.B73.setGeometry(890, 170, 81, 81)
        self.B73.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B32 = QPushButton(self)
        self.B32.setGeometry(330, 250, 81, 81)
        self.B32.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B38 = QPushButton(self)
        self.B38.setGeometry(410, 250, 81, 81)
        self.B38.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B68 = QPushButton(self)
        self.B68.setGeometry(810, 250, 81, 81)
        self.B68.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B44 = QPushButton(self)
        self.B44.setGeometry(490, 250, 81, 81)
        self.B44.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B14 = QPushButton(self)
        self.B14.setGeometry(90, 250, 81, 81)
        self.B14.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B81 = QPushButton(self)
        self.B81.setGeometry(970, 250, 81, 81)
        self.B81.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B62 = QPushButton(self)
        self.B62.setGeometry(730, 250, 81, 81)
        self.B62.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B4 = QPushButton(self)
        self.B4.setGeometry(10, 250, 81, 81)
        self.B4.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B20 = QPushButton(self)
        self.B20.setGeometry(170, 250, 81, 81)
        self.B20.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B50 = QPushButton(self)
        self.B50.setGeometry(570, 250, 81, 81)
        self.B50.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B26 = QPushButton(self)
        self.B26.setGeometry(250, 250, 81, 81)
        self.B26.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B56 = QPushButton(self)
        self.B56.setGeometry(650, 250, 81, 81)
        self.B56.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B74 = QPushButton(self)
        self.B74.setGeometry(890, 250, 81, 81)
        self.B74.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B33 = QPushButton(self)
        self.B33.setGeometry(330, 330, 81, 81)
        self.B33.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B39 = QPushButton(self)
        self.B39.setGeometry(410, 330, 81, 81)
        self.B39.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B69 = QPushButton(self)
        self.B69.setGeometry(810, 330, 81, 81)
        self.B69.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B45 = QPushButton(self)
        self.B45.setGeometry(490, 330, 81, 81)
        self.B45.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B15 = QPushButton(self)
        self.B15.setGeometry(90, 330, 81, 81)
        self.B15.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B82 = QPushButton(self)
        self.B82.setGeometry(970, 330, 81, 81)
        self.B82.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B63 = QPushButton(self)
        self.B63.setGeometry(730, 330, 81, 81)
        self.B63.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B5 = QPushButton(self)
        self.B5.setGeometry(10, 330, 81, 81)
        self.B5.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B21 = QPushButton(self)
        self.B21.setGeometry(170, 330, 81, 81)
        self.B21.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B51 = QPushButton(self)
        self.B51.setGeometry(570, 330, 81, 81)
        self.B51.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B27 = QPushButton(self)
        self.B27.setGeometry(250, 330, 81, 81)
        self.B27.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B57 = QPushButton(self)
        self.B57.setGeometry(650, 330, 81, 81)
        self.B57.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B75 = QPushButton(self)
        self.B75.setGeometry(890, 330, 81, 81)
        self.B75.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B34 = QPushButton(self)
        self.B34.setGeometry(330, 410, 81, 81)
        self.B34.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B40 = QPushButton(self)
        self.B40.setGeometry(410, 410, 81, 81)
        self.B40.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B70 = QPushButton(self)
        self.B70.setGeometry(810, 410, 81, 81)
        self.B70.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B46 = QPushButton(self)
        self.B46.setGeometry(490, 410, 81, 81)
        self.B46.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B16 = QPushButton(self)
        self.B16.setGeometry(90, 410, 81, 81)
        self.B16.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B83 = QPushButton(self)
        self.B83.setGeometry(970, 410, 81, 81)
        self.B83.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B64 = QPushButton(self)
        self.B64.setGeometry(730, 410, 81, 81)
        self.B64.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B6 = QPushButton(self)
        self.B6.setGeometry(10, 410, 81, 81)
        self.B6.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B22 = QPushButton(self)
        self.B22.setGeometry(170, 410, 81, 81)
        self.B22.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B52 = QPushButton(self)
        self.B52.setGeometry(570, 410, 81, 81)
        self.B52.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B28 = QPushButton(self)
        self.B28.setGeometry(250, 410, 81, 81)
        self.B28.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B58 = QPushButton(self)
        self.B58.setGeometry(650, 410, 81, 81)
        self.B58.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B76 = QPushButton(self)
        self.B76.setGeometry(890, 410, 81, 81)
        self.B76.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B77 = QPushButton(self)
        self.B77.setGeometry(330, 490, 81, 81)
        self.B77.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B84 = QPushButton(self)
        self.B84.setGeometry(410, 490, 81, 81)
        self.B84.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B85 = QPushButton(self)
        self.B85.setGeometry(810, 490, 81, 81)
        self.B85.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B86 = QPushButton(self)
        self.B86.setGeometry(490, 490, 81, 81)
        self.B86.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B87 = QPushButton(self)
        self.B87.setGeometry(90, 490, 81, 81)
        self.B87.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B88 = QPushButton(self)
        self.B88.setGeometry(970, 490, 81, 81)
        self.B88.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B89 = QPushButton(self)
        self.B89.setGeometry(730, 490, 81, 81)
        self.B89.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B7 = QPushButton(self)
        self.B7.setGeometry(10, 490, 81, 81)
        self.B7.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B90 = QPushButton(self)
        self.B90.setGeometry(170, 490, 81, 81)
        self.B90.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B91 = QPushButton(self)
        self.B91.setGeometry(570, 490, 81, 81)
        self.B91.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B92 = QPushButton(self)
        self.B92.setGeometry(250, 490, 81, 81)
        self.B92.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B93 = QPushButton(self)
        self.B93.setGeometry(650, 490, 81, 81)
        self.B93.setStyleSheet("background-color: rgb(97, 131, 255);")
        self.B94 = QPushButton(self)
        self.B94.setGeometry(890, 490, 81, 81)
        self.B94.setStyleSheet("background-color: rgb(97, 131, 255);")

        self.setWindowTitle("self")
        self.B1.setText("1")
        self.B11.setText("2")
        self.B17.setText("3")
        self.B23.setText("4")
        self.B29.setText("5")
        self.B35.setText("6")
        self.B41.setText("7")
        self.B47.setText("8")
        self.B53.setText("9")
        self.B59.setText("10")
        self.B65.setText("11")
        self.B71.setText("12")
        self.B78.setText("13")
        self.B30.setText("18")
        self.B36.setText("19")
        self.B66.setText("24")
        self.B42.setText("20")
        self.B12.setText("15")
        self.B79.setText("26")
        self.B60.setText("23")
        self.B2.setText("14")
        self.B18.setText("16")
        self.B48.setText("21")
        self.B24.setText("17")
        self.B54.setText("22")
        self.B72.setText("25")
        self.B31.setText("31")
        self.B37.setText("32")
        self.B67.setText("37")
        self.B43.setText("33")
        self.B13.setText("28")
        self.B80.setText("39")
        self.B61.setText("36")
        self.B3.setText("27")
        self.B19.setText("29")
        self.B49.setText("34")
        self.B25.setText("30")
        self.B55.setText("35")
        self.B73.setText("38")
        self.B32.setText("44")
        self.B38.setText("45")
        self.B68.setText("50")
        self.B44.setText("46")
        self.B14.setText("41")
        self.B81.setText("52")
        self.B62.setText("49")
        self.B4.setText("40")
        self.B20.setText("42")
        self.B50.setText("47")
        self.B26.setText("43")
        self.B56.setText("48")
        self.B74.setText("51")
        self.B33.setText("57")
        self.B39.setText("58")
        self.B69.setText("63")
        self.B45.setText("59")
        self.B15.setText("54")
        self.B82.setText("65")
        self.B63.setText("62")
        self.B5.setText("53")
        self.B21.setText("55")
        self.B51.setText("60")
        self.B27.setText("56")
        self.B57.setText("61")
        self.B75.setText("64")
        self.B34.setText("70")
        self.B40.setText("71")
        self.B70.setText("76")
        self.B46.setText("72")
        self.B16.setText("67")
        self.B83.setText("78")
        self.B64.setText("75")
        self.B6.setText("66")
        self.B22.setText("68")
        self.B52.setText("73")
        self.B28.setText("69")
        self.B58.setText("74")
        self.B76.setText("77")
        self.B77.setText("83")
        self.B84.setText("84")
        self.B85.setText("89")
        self.B86.setText("85")
        self.B87.setText("80")
        self.B89.setText("88")
        self.B7.setText("79")
        self.B90.setText("81")
        self.B91.setText("86")
        self.B92.setText("82")
        self.B93.setText("87")
        self.B94.setText(" ")
        self.B88.setText("90")

        self.B1.clicked.connect(lambda: self.play(self.B1))
        self.B11.clicked.connect(lambda: self.play(self.B11))
        self.B17.clicked.connect(lambda: self.play(self.B17))
        self.B23.clicked.connect(lambda: self.play(self.B23))
        self.B29.clicked.connect(lambda: self.play(self.B29))
        self.B35.clicked.connect(lambda: self.play(self.B35))
        self.B41.clicked.connect(lambda: self.play(self.B41))
        self.B47.clicked.connect(lambda: self.play(self.B47))
        self.B53.clicked.connect(lambda: self.play(self.B53))
        self.B59.clicked.connect(lambda: self.play(self.B59))
        self.B65.clicked.connect(lambda: self.play(self.B65))
        self.B71.clicked.connect(lambda: self.play(self.B71))
        self.B78.clicked.connect(lambda: self.play(self.B78))
        self.B30.clicked.connect(lambda: self.play(self.B30))
        self.B36.clicked.connect(lambda: self.play(self.B36))
        self.B66.clicked.connect(lambda: self.play(self.B66))
        self.B42.clicked.connect(lambda: self.play(self.B42))
        self.B12.clicked.connect(lambda: self.play(self.B12))
        self.B79.clicked.connect(lambda: self.play(self.B79))
        self.B60.clicked.connect(lambda: self.play(self.B60))
        self.B2.clicked.connect(lambda: self.play(self.B2))
        self.B18.clicked.connect(lambda: self.play(self.B18))
        self.B48.clicked.connect(lambda: self.play(self.B48))
        self.B24.clicked.connect(lambda: self.play(self.B24))
        self.B54.clicked.connect(lambda: self.play(self.B54))
        self.B72.clicked.connect(lambda: self.play(self.B72))
        self.B31.clicked.connect(lambda: self.play(self.B31))
        self.B37.clicked.connect(lambda: self.play(self.B37))
        self.B67.clicked.connect(lambda: self.play(self.B67))
        self.B43.clicked.connect(lambda: self.play(self.B43))
        self.B13.clicked.connect(lambda: self.play(self.B13))
        self.B80.clicked.connect(lambda: self.play(self.B80))
        self.B61.clicked.connect(lambda: self.play(self.B61))
        self.B3.clicked.connect(lambda: self.play(self.B3))
        self.B19.clicked.connect(lambda: self.play(self.B19))
        self.B49.clicked.connect(lambda: self.play(self.B49))
        self.B25.clicked.connect(lambda: self.play(self.B25))
        self.B55.clicked.connect(lambda: self.play(self.B55))
        self.B73.clicked.connect(lambda: self.play(self.B73))
        self.B32.clicked.connect(lambda: self.play(self.B32))
        self.B38.clicked.connect(lambda: self.play(self.B38))
        self.B68.clicked.connect(lambda: self.play(self.B68))
        self.B44.clicked.connect(lambda: self.play(self.B44))
        self.B14.clicked.connect(lambda: self.play(self.B14))
        self.B81.clicked.connect(lambda: self.play(self.B81))
        self.B62.clicked.connect(lambda: self.play(self.B62))
        self.B4.clicked.connect(lambda: self.play(self.B4))
        self.B20.clicked.connect(lambda: self.play(self.B20))
        self.B50.clicked.connect(lambda: self.play(self.B50))
        self.B26.clicked.connect(lambda: self.play(self.B26))
        self.B56.clicked.connect(lambda: self.play(self.B56))
        self.B74.clicked.connect(lambda: self.play(self.B74))
        self.B33.clicked.connect(lambda: self.play(self.B33))
        self.B39.clicked.connect(lambda: self.play(self.B39))
        self.B69.clicked.connect(lambda: self.play(self.B69))
        self.B45.clicked.connect(lambda: self.play(self.B45))
        self.B15.clicked.connect(lambda: self.play(self.B15))
        self.B82.clicked.connect(lambda: self.play(self.B82))
        self.B63.clicked.connect(lambda: self.play(self.B63))
        self.B5.clicked.connect(lambda: self.play(self.B5))
        self.B21.clicked.connect(lambda: self.play(self.B21))
        self.B51.clicked.connect(lambda: self.play(self.B51))
        self.B27.clicked.connect(lambda: self.play(self.B27))
        self.B57.clicked.connect(lambda: self.play(self.B57))
        self.B75.clicked.connect(lambda: self.play(self.B75))
        self.B34.clicked.connect(lambda: self.play(self.B34))
        self.B40.clicked.connect(lambda: self.play(self.B40))
        self.B70.clicked.connect(lambda: self.play(self.B70))
        self.B46.clicked.connect(lambda: self.play(self.B46))
        self.B16.clicked.connect(lambda: self.play(self.B16))
        self.B83.clicked.connect(lambda: self.play(self.B83))
        self.B64.clicked.connect(lambda: self.play(self.B64))
        self.B6.clicked.connect(lambda: self.play(self.B6))
        self.B22.clicked.connect(lambda: self.play(self.B22))
        self.B52.clicked.connect(lambda: self.play(self.B52))
        self.B28.clicked.connect(lambda: self.play(self.B28))
        self.B58.clicked.connect(lambda: self.play(self.B58))
        self.B76.clicked.connect(lambda: self.play(self.B76))
        self.B77.clicked.connect(lambda: self.play(self.B77))
        self.B84.clicked.connect(lambda: self.play(self.B84))
        self.B85.clicked.connect(lambda: self.play(self.B85))
        self.B86.clicked.connect(lambda: self.play(self.B86))
        self.B87.clicked.connect(lambda: self.play(self.B87))
        self.B89.clicked.connect(lambda: self.play(self.B89))
        self.B7.clicked.connect(lambda: self.play(self.B7))
        self.B90.clicked.connect(lambda: self.play(self.B90))
        self.B91.clicked.connect(lambda: self.play(self.B91))

        self.answers = [[str(i) for i in range(1, 14)],
                     [str(i) for i in range(14, 27)],
                     [str(i) for i in range(27, 40)],
                     [str(i) for i in range(40, 53)],
                     [str(i) for i in range(53, 66)],
                     [str(i) for i in range(66, 79)],
                     [str(i) for i in range(79, 90)]]
        self.btns = [[self.B1, self.B11, self.B17, self.B23, self.B29, self.B35, self.B41, self.B47, self.B53, self.B59, self.B65, self.B71, self.B78],
                     [self.B30, self.B36, self.B66, self.B42, self.B12, self.B79, self.B60, self.B2, self.B18, self.B48, self.B24, self.B54, self.B72],
                     [self.B31, self.B37, self.B67, self.B43, self.B13, self.B80, self.B61, self.B3, self.B19, self.B49, self.B25, self.B55, self.B73],
                     [self.B32, self.B38, self.B68, self.B44, self.B14, self.B81, self.B62, self.B4, self.B20, self.B50, self.B26, self.B56, self.B74],
                     [self.B33, self.B39, self.B69, self.B45, self.B15, self.B82, self.B63, self.B5, self.B21, self.B51, self.B27, self.B57, self.B75],
                     [self.B34, self.B40, self.B70, self.B46, self.B16, self.B83, self.B64, self.B6, self.B22, self.B52, self.B28, self.B58, self.B76],
                     [self.B77, self.B84, self.B85, self.B86, self.B87, self.B89, self.B7, self.B90, self.B91, self.B92, self.B93, self.B94, self.B88]]

    def play(self, cl_btn):
        print(cl_btn.text())
        for i in range(len(self.btns)):
            for j in range(len(self.btns)):
                if self.btns[i][j].text() == ' ':
                    print(i, j)
                    self.btns[i][j].setText(cl_btn.text())
                    cl_btn.setText(' ')
                    break
        self.check_win()

    def shuffle_board(self):
        r.shuffle(self.numbers)
        for i in range(len(self.btns)):
            r.shuffle(self.numbers[i])
            for j in range(len(self.btns)):
                self.btns[i][j].setText(self.numbers[i][j])
                if self.btns[i][j].text() == ' ':
                    self.btns[i][j].setStyleSheet(self.emp_stl)
                else:
                    self.btns[i][j].setStyleSheet(' ')

    def check_win(self):
        a = 0
        for i in range(len(self.answers)):
            for j in range(len(self.answers)):
                if self.answers[i][j] == self.btns[i][j].text():
                    a += 1
        if a == 16:
            msg = QMessageBox(self)
            msg.setWindowTitle('YOU WON !!!')
            msg.setGeometry(500, 200, 101, 101)
            msg.setStyleSheet("background-image: url('1.jpg');")
            msg.setText("<h5>SIZ YUTDINGIZ !!! <br>YANA O'YNAYSIZMI ?</h5>")
            msg.show()
            self.shuffle_board()


app = QApplication(sys.argv)
window = Puzzle_90()
window.show()
sys.exit(app.exec_())

