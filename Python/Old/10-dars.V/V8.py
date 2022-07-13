class Student:
      def __init__(self, name, lastname, grade):
            self.name = name
            self.lastname = lastname
            self.grade = grade

student1 = Student('John', 'Smith', 19)
student2 = Student('Jane', 'Doe', 5)
student3 = Student('Jack', 'Black', 10)
print(student1.name if student1.grade > student2.grade else student2.name if student2.grade > student3.grade else student3.name)