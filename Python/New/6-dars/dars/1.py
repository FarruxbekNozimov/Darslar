import sys
from PyQt5.QtWidgets import (QApplication,QWidget, QLabel, QLineEdit, QPushButton)
from PyQt5.QtGui import QFont

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle("My App")
window.setGeometry(200, 100, 900, 500)


input1 = QLineEdit(window)
input1.move(50, 50)
input1.setFont(QFont("Times", 25))

amal = QLineEdit(window)
amal.move(50, 150)
amal.setFont(QFont("Times", 25))

input2 = QLineEdit(window)
input2.move(50, 250)
input2.setFont(QFont("Times", 25))

yozuv = QLabel("Javob : ", window)
yozuv.move(50, 400)
yozuv.setFont(QFont("Times", 25))

yozuv = QLabel("", window)
yozuv.move(180, 400)
yozuv.setFont(QFont("Times", 25))


ok = QPushButton("Calculate", window)
ok.move(100, 300)
ok.setFont(QFont("Tomes", 25))

def send():
    result = "Aqlingizga qoyilimiz !!!"
    a = ""
    if input1.text().isdigit() and input2.text().isdigit():
        if amal.text() == '+':
            result = int(input1.text()) + int(input2.text())
        elif amal.text() == '-':
            result = int(input1.text()) - int(input2.text())
        elif amal.text() == '/':
            result = int(input1.text()) / int(input2.text())
        elif amal.text() == '*':
            result = int(input1.text()) * int(input2.text())
        elif amal.text() == '%':
            result = int(input1.text()) % int(input2.text())
        elif amal.text() == '//':
            result = int(input1.text()) // int(input2.text())
        elif amal.text() == '**':
            result = int(input1.text()) ** int(input2.text())
        if amal.text() in ['+','-','/','//','*','**','%']:
            a = f"{input1.text()} {amal.text()} {input2.text()} = "
        yozuv.setText(f"{a}{result}")
        yozuv.adjustSize()

    else:
        yozuv.setText(result)
        yozuv.adjustSize()


ok.clicked.connect(send)

window.show()
sys.exit(app.exec_())




