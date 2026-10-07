from PySide6.QtWidgets import QApplication, QLabel, QLineEdit

app = QApplication([])

label = QLabel("Hello, Math!")
label.show()

input_field = QLineEdit()
input_field.show()

app.exec()