import sysfrom PyQt5.QtWidgets import (QApplication,QWidget, QLabel, QLineEdit, QPushButton)from PyQt5.QtGui import QFontapp = QApplication(sys.argv)window = QWidget()window.setWindowTitle("My App")window.setGeometry(200, 100, 900, 500)width1 = window.saveGeometry().width1()height = window.saveGeometry().height()print(height, width1)ok = QPushButton("BUTTON", window)ok.move(width1-500, height-300)ok.setFont(QFont("Times", 25))ok.setGeometry(width1-500, height-400, 200, 100)for i in range(100):    window.show()sys.exit(app.exec_())