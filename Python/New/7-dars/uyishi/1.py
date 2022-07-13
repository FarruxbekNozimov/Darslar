from PyQt5.QtWidgets import QLabel, QRadioButton, QWidget, QPushButton, QApplication, QMessageBox, QProgressBar
from PyQt5.QtGui import QPixmap
import sys


class Homework(QWidget):
    def __init__(self):
        super().__init__()
        self.start()

    def start(self):
        self.img = QLabel(self)
        self.img.resize(979, 532)
        self.img.setPixmap(QPixmap('2.jpg'))
        self.img.setScaledContents(True)

        self.a = 1
        self.variants = {
            1 : ["1) 1 Asrda necha Kun bor ?", '36500', '46500', '26500'],
            2 : ["2) 1 Asrda necha Soat bor ?", '976000', '876000', '866000'],
            3: ['3) 1 Asrda necha Oy bor ?', '1300', '1400', '1200'],
            4: ['4) 1 Kunda necha Sekund bor ?', '86400', '85400', '84400'],
            5: ["5) 1 Oyda necha Soat bor", '730', '740' , '700']
        }
        self.real_answers = ['36500', '876000', '1200', '86400', '730']
        self.setWindowTitle("MY TEST")
        self.setFixedSize(702, 485)
        self.style_variant = "border: 3px solid red;padding: 0 15px;font: 22pt MS Shell Dlg 2;background: rgba(0, 255, 2, 0.56);border-radius: 16px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(5px);-webkit-backdrop-filter: blur(5px);"
        self.btn_stl = "border:3px solid #222;font: 30pt Agency FB;border-radius:13px;background-color:aqua;"

        self.Variant_1 = QRadioButton(self)
        self.Variant_2 = QRadioButton(self)
        self.Variant_3 = QRadioButton(self)
        self.label = QLabel(self)
        self.next = QPushButton(self)
        self.back = QPushButton(self)
        self.result = QProgressBar(self)

        self.Variant_1.setGeometry(150, 180, 371, 41)
        self.Variant_2.setGeometry(150, 230, 371, 41)
        self.Variant_3.setGeometry(150, 280, 371, 41)
        self.label.setGeometry(30, 20, 641, 121)
        self.next.setGeometry(480, 372, 131, 51)
        self.back.setGeometry(100, 372, 131, 51)
        self.result.setGeometry(50, 200, 624, 30)

        self.Variant_1.setText(self.variants[self.a][1])
        self.Variant_2.setText(self.variants[self.a][2])
        self.Variant_3.setText(self.variants[self.a][3])
        self.label.setText(self.variants[self.a][0])
        self.next.setText('NEXT >')
        self.back.setText('< BACK')
        self.back.hide()
        self.result.hide()

        self.Variant_1.setStyleSheet(self.style_variant)
        self.Variant_2.setStyleSheet(self.style_variant)
        self.Variant_3.setStyleSheet(self.style_variant)
        self.label.setStyleSheet("border:3px solid #222;color: rgb(0, 102, 255);border-radius:13px;color: rgb(0, 0, 0);font: 28pt Agency FB;padding: 30px;background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));")
        self.back.setStyleSheet(self.btn_stl)
        self.next.setStyleSheet(self.btn_stl)
        self.usr_answers = 0

        def run_next():
            if self.a != len(self.variants):
                self.Variant_1.setChecked(False)
                self.Variant_2.setChecked(False)
                self.Variant_3.setChecked(False)
                if self.next.text() == ' QAYTA🔁':
                    self.a = 1
                    self.usr_answers = 0
                    self.Variant_1.show()
                    self.Variant_2.show()
                    self.Variant_3.show()
                    self.label.show()
                    self.Variant_1.setText(self.variants[self.a][1])
                    self.Variant_2.setText(self.variants[self.a][2])
                    self.Variant_3.setText(self.variants[self.a][3])
                    self.label.setText(self.variants[self.a][0])
                    self.next.setText('NEXT >')
                    self.back.setText('< BACK')
                    self.back.hide()
                    self.result.hide()
                    return 0

                if self.Variant_1.isChecked() and self.Variant_1.text() in self.real_answers or \
                    self.Variant_2.isChecked() and self.Variant_2.text() in self.real_answers or \
                    self.Variant_3.isChecked() and self.Variant_3.text() in self.real_answers:
                    self.usr_answers += 1

                if  self.Variant_1.isChecked() == False and  self.Variant_2.isChecked() == False and  self.Variant_3.isChecked() == False:
                    msg = QMessageBox(self)
                    msg.setWindowTitle('Tanlang !!!')
                    msg.setText('<h1>Siz Birorta Variantni tanlamadingiz !!!</h1>')
                    msg.show()
                    return 0
                if self.a  >= 1:
                    self.back.show()

                self.a += 1
                self.Variant_1.setText(self.variants[self.a][1])
                self.Variant_2.setText(self.variants[self.a][2])
                self.Variant_3.setText(self.variants[self.a][3])
                self.label.setText(self.variants[self.a][0])
            else:
                self.Variant_1.hide()
                self.Variant_2.hide()
                self.Variant_3.hide()
                # self.label.hide()

            if self.next.text() == 'FINISH':
                msg = QMessageBox(self)
                msg.setWindowTitle('FINISH !!!')
                if self.usr_answers > 0:
                    msg.setText(f'<h1>Siz {self.usr_answers} ta Savolga javob berdingiz !!!</h1>')
                else:
                    msg.setText('<h1>Siz birorta ham savolga javob bera olmadingiz !!!</h1>')
                msg.show()
                self.a +=1
                self.label.setText(f'100 % dan --> {self.usr_answers * 100// len(self.variants)} % ')
                self.result.show()
                self.result.setStyleSheet('font: 30px;')
                self.result.setProperty("value", self.usr_answers * 10)
                self.next.setText(" QAYTA🔁")
                self.back.hide()

            if self.a == len(self.variants):
                self.next.setText('FINISH')




        def run_back():
            print(self.a)
            self.a -= 1
            print(self.a)
            self.Variant_1.setText(self.variants[self.a][1])
            self.Variant_2.setText(self.variants[self.a][2])
            self.Variant_3.setText(self.variants[self.a][3])
            self.label.setText(self.variants[self.a][0])
            if self.next.text() == 'FINISH':
                self.next.setText('NEXT >')
            if self.a < 2:
                self.back.hide()




        self.next.clicked.connect(run_next)
        self.back.clicked.connect(run_back)




app = QApplication(sys.argv)
window = Homework()
window.show()
sys.exit(app.exec_())
