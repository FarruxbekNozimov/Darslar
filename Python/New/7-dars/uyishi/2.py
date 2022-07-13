from PyQt5.QtWidgets import QApplication, QLabel, QCheckBox, QPushButton, QWidget, QFrame, QMessageBox
from PyQt5.QtGui import QPixmap
import sys

class Menu(QWidget):
    def __init__(self):
        super().__init__()
        self.start()

    def start(self):
        self.setWindowTitle("QORAVOY Restaurant ga Xush Kelibsiz !!!")
        self.setFixedSize(979, 532)
        # SET PICTURE
        self.img = QLabel(self)
        self.img.resize(979, 532)
        self.img.setPixmap(QPixmap('../../../Projects/Menu/1.jpg'))
        self.img.setScaledContents(True)

        # SET STYLES OF ELEMENTS
        self.label_stl = "border:2px solid #000;background-color: rgb(193, 193, 193);font: 40pt Agency FB;border-radius: 12px;padding:2px;background: rgba(153, 185, 153, 0.56);border-radius: 16px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(5px);-webkit-backdrop-filter: blur(5px);"
        self.product_style = "color: #000;border:2px solid #111;font: 17pt Agency FB;padding:10px;border-radius:12px;background: rgba(0, 255, 2, 0.56);border-radius: 16px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(5px);-webkit-backdrop-filter: blur(5px);"
        self.price_style = "color: #000;border:2px solid #111;font: 17pt Agency FB;padding: 12px;border-radius:12px;background: rgba(0, 255, 2, 0.56);border-radius: 16px;box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);backdrop-filter: blur(5px);-webkit-backdrop-filter: blur(5px);"
        # ==================================================================
        # SET ELEMENTS
        self.foods = QLabel(self)
        self.deserts = QLabel(self)
        self.salats = QLabel(self)
        self.drink = QLabel(self)
        self.price_1 = QLabel(self)
        self.price_2 = QLabel(self)
        self.price_3 = QLabel(self)
        self.price_4 = QLabel(self)
        self.price_5 = QLabel(self)
        self.price_6 = QLabel(self)
        self.price_7 = QLabel(self)
        self.price_8 = QLabel(self)
        self.price_9 = QLabel(self)
        self.price_10 = QLabel(self)
        self.price_11 = QLabel(self)
        self.price_12 = QLabel(self)
        self.price_13 = QLabel(self)
        self.price_14 = QLabel(self)
        self.price_15 = QLabel(self)
        self.price_16 = QLabel(self)
        self.product_1 = QCheckBox(self)
        self.product_2 = QCheckBox(self)
        self.product_3 = QCheckBox(self)
        self.product_4 = QCheckBox(self)
        self.product_5 = QCheckBox(self)
        self.product_6 = QCheckBox(self)
        self.product_7 = QCheckBox(self)
        self.product_8 = QCheckBox(self)
        self.product_9 = QCheckBox(self)
        self.product_10 = QCheckBox(self)
        self.product_11 = QCheckBox(self)
        self.product_12 = QCheckBox(self)
        self.product_13 = QCheckBox(self)
        self.product_14 = QCheckBox(self)
        self.product_15 = QCheckBox(self)
        self.product_16 = QCheckBox(self)
        self.send = QPushButton(self)
        self.result = QPushButton(self)
        self.line_1 = QFrame(self)
        self.line_2 = QFrame(self)
        self.line_3 = QFrame(self)
        self.line_4 = QFrame(self)
        # ==================================================================
        # SHAPE OF LINES
        self.line_1.setFrameShape(QFrame.VLine)
        self.line_2.setFrameShape(QFrame.VLine)
        self.line_3.setFrameShape(QFrame.VLine)
        self.line_4.setFrameShape(QFrame.HLine)

        self.line_1.setStyleSheet('background-color:#fff')
        self.line_2.setStyleSheet('background-color:#fff')
        self.line_3.setStyleSheet('background-color:#fff')
        self.line_4.setStyleSheet('background-color:#fff')
        # ==================================================================
        # SET GEOMETRY
        self.foods.setGeometry(10, 20, 221, 71)
        self.line_1.setGeometry(235, 0, 5, 400)
        self.deserts.setGeometry(490, 20, 221, 71)
        self.line_2.setGeometry(475, 0, 5, 400)
        self.salats.setGeometry(250, 20, 221, 71)
        self.line_3.setGeometry(715, 0, 5, 400)
        self.drink.setGeometry(730, 20, 221, 71)
        self.line_4.setGeometry(0, 400, 1000, 5)
        self.price_1.setGeometry(130, 120, 101, 51)
        self.price_2.setGeometry(130, 190, 101, 51)
        self.price_3.setGeometry(130, 260, 101, 51)
        self.price_4.setGeometry(130, 330, 101, 51)
        self.price_5.setGeometry(370, 120, 101, 51)
        self.price_6.setGeometry(370, 190, 101, 51)
        self.price_7.setGeometry(370, 260, 101, 51)
        self.price_8.setGeometry(370, 330, 101, 51)
        self.price_9.setGeometry(610, 120, 101, 51)
        self.price_10.setGeometry(610, 190, 101, 51)
        self.price_11.setGeometry(610, 260, 101, 51)
        self.price_12.setGeometry(610, 330, 101, 51)
        self.price_13.setGeometry(850, 120, 101, 51)
        self.price_14.setGeometry(850, 190, 101, 51)
        self.price_15.setGeometry(850, 260, 101, 51)
        self.price_16.setGeometry(850, 330, 101, 51)
        self.product_1.setGeometry(10, 120, 110, 51)
        self.product_2.setGeometry(10, 190, 111, 51)
        self.product_3.setGeometry(10, 260, 111, 51)
        self.product_4.setGeometry(10, 330, 111, 51)
        self.product_5.setGeometry(250, 260, 110, 51)
        self.product_6.setGeometry(250, 190, 110, 51)
        self.product_7.setGeometry(250, 120, 110, 51)
        self.product_8.setGeometry(250, 330, 110, 51)
        self.product_9.setGeometry(490, 120, 110, 51)
        self.product_10.setGeometry(490, 190, 110, 51)
        self.product_11.setGeometry(490, 260, 110, 51)
        self.product_12.setGeometry(490, 330, 110, 51)
        self.product_13.setGeometry(730, 120, 110, 51)
        self.product_14.setGeometry(730, 190, 110, 51)
        self.product_15.setGeometry(730, 260, 110, 51)
        self.product_16.setGeometry(730, 330, 110, 51)
        self.send.setGeometry(600, 440, 231, 51)
        self.result.setGeometry(50, 440, 331, 51)
        # ==================================================================
        # SET STYLE OF OTHER ELEMENTS
        self.foods.setStyleSheet(self.label_stl)
        self.deserts.setStyleSheet(self.label_stl)
        self.salats.setStyleSheet(self.label_stl)
        self.drink.setStyleSheet(self.label_stl)
        self.price_1.setStyleSheet(self.price_style)
        self.price_2.setStyleSheet(self.price_style)
        self.price_3.setStyleSheet(self.price_style)
        self.price_4.setStyleSheet(self.price_style)
        self.price_5.setStyleSheet(self.price_style)
        self.price_6.setStyleSheet(self.price_style)
        self.price_7.setStyleSheet(self.price_style)
        self.price_8.setStyleSheet(self.price_style)
        self.price_9.setStyleSheet(self.price_style)
        self.price_10.setStyleSheet(self.price_style)
        self.price_11.setStyleSheet(self.price_style)
        self.price_12.setStyleSheet(self.price_style)
        self.price_13.setStyleSheet(self.price_style)
        self.price_14.setStyleSheet(self.price_style)
        self.price_15.setStyleSheet(self.price_style)
        self.price_16.setStyleSheet(self.price_style)
        self.product_1.setStyleSheet(self.product_style)
        self.product_2.setStyleSheet(self.product_style)
        self.product_3.setStyleSheet(self.product_style)
        self.product_4.setStyleSheet(self.product_style)
        self.product_5.setStyleSheet(self.product_style)
        self.product_6.setStyleSheet(self.product_style)
        self.product_7.setStyleSheet(self.product_style)
        self.product_8.setStyleSheet(self.product_style)
        self.product_9.setStyleSheet(self.product_style)
        self.product_10.setStyleSheet(self.product_style)
        self.product_11.setStyleSheet(self.product_style)
        self.product_12.setStyleSheet(self.product_style)
        self.product_13.setStyleSheet(self.product_style)
        self.product_14.setStyleSheet(self.product_style)
        self.product_15.setStyleSheet(self.product_style)
        self.product_16.setStyleSheet(self.product_style)
        self.send.setStyleSheet("border:3px solid #111;font: 24pt Agency FB;border-radius:12px;background-color: rgb(121, 0, 181);")
        self.result.setStyleSheet("border:3px solid #111;font: 24pt Agency FB;border-radius:12px;background-color: lightblue;padding:0 12px;border: 2px solid #333")
        # ==================================================================
        # SET NAME OF ALL ELEMENTS
        self.foods.setText("Ovqatlar:")
        self.salats.setText("Salatlar:")
        self.deserts.setText("Desertlar:")
        self.drink.setText("Ichimliklar:")
        self.price_1.setText("1410999$")
        self.price_2.setText("1420999$")
        self.price_3.setText("1430999$")
        self.price_4.setText("1440999$")
        self.price_5.setText("2310991$")
        self.price_6.setText("2320991$")
        self.price_7.setText("2330991$")
        self.price_8.setText("2340991$")
        self.price_9.setText("3210919$")
        self.price_10.setText("3220919$")
        self.price_11.setText("3230919$")
        self.price_12.setText("3240919$")
        self.price_13.setText("4110199$")
        self.price_14.setText("4120199$")
        self.price_15.setText("4130199$")
        self.price_16.setText("4140199$")
        self.product_1.setText("Mastava")
        self.product_2.setText("Sho'rva")
        self.product_3.setText("Manti")
        self.product_4.setText("Osh")
        self.product_5.setText("D. Kapriz")
        self.product_6.setText("M. Kapriz")
        self.product_7.setText("Olivye")
        self.product_8.setText("Sezar")
        self.product_9.setText("Cake")
        self.product_10.setText("Honey")
        self.product_11.setText("To'rt")
        self.product_12.setText("Crumble")
        self.product_13.setText("Cola")
        self.product_14.setText("Pepsi")
        self.product_15.setText("G'anta😂")
        self.product_16.setText("Sprite")
        self.send.setText("BUYURTMA BERISH >")
        self.result.setText("JAMI :")
        self.result.hide()
        # ALL CHECKBOXES
        self.labels = [self.foods, self.salats, self.deserts, self.drink]
        self.checkboxes = [
            [self.product_1, self.product_2, self.product_3, self.product_4],
            [self.product_5, self.product_6, self.product_7, self.product_8],
            [self.product_9, self.product_10, self.product_11, self.product_12],
            [self.product_13, self.product_14, self.product_15, self.product_16]
        ]
        self.prices = [
            [self.price_1, self.price_2, self.price_3, self.price_4],
            [self.price_7, self.price_6, self.price_5, self.price_8],
            [self.price_9, self.price_10, self.price_11, self.price_12],
            [self.price_13, self.price_14, self.price_15, self.price_16]
        ]
        self.checkbox_list = []
        self.price_list = []
        def run():
            self.checkbox_list = [i[j] for i in self.checkboxes for j in range(len(i)) if i[j].isChecked()]
            self.price_list = [self.prices[i][self.checkboxes[i].index(j)] for i in range(len(self.checkboxes)) for j in self.checkboxes[i] if j.isChecked()]
            jami = 0
            for i in self.price_list:
                jami += int(i.text()[:-1])

            if self.send.text() == '< QAYTISH':
                self.result.hide()
                for i in range(len(self.checkboxes)):
                    for j in range(len(self.checkboxes)):
                        self.checkboxes[i][j].show()
                        self.prices[i][j].show()
                self.send.setText('BUYURTMA BERISH >')
            else:
                self.result.show()
                self.result.setText(f"TO'LASH !   JAMI : {jami}$")
                for i in range(len(self.checkboxes)):
                    for j in range(len(self.checkboxes)):
                        if self.checkboxes[i][j] not in self.checkbox_list:
                            self.checkboxes[i][j].hide()
                            self.prices[i][j].hide()
                self.send.setText('< QAYTISH')

        def run_result():
            res_msg = QMessageBox(self)
            print('\n'.join(list(map(lambda x: x.text(), self.price_list))))
            res_msg.setText(f"<h1>{'<br>'.join(list(map(lambda x: x.text(), self.price_list)))}</h1>")
            msg_btn = QPushButton("TO'LASH!", res_msg)
            msg_btn.clicked.conn
            res_msg.show()

        self.send.clicked.connect(run)
        self.result.clicked.connect(run_result)

app = QApplication(sys.argv)
window = Menu()
window.show()
sys.exit(app.exec_())

