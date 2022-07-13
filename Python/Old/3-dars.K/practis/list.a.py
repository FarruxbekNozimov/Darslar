Frontend = ["HTML", "CSS", "React", "Python", "JS"]
Backend = ["DotNET", "PHP", "Go", "JS", "Python", ]
Mobile = input("Enter mobile languages: ").split()
Dastur = Frontend + Backend + Mobile
SoftLen = []
uniqal = []

Frontend.extend(Mobile)
print(Frontend)
for i in Frontend:
      if i in Mobile:
            Frontend.remove(i)
print(Frontend)
Frontend.append("Ruby")
print(Frontend)
print(Backend)
print(Mobile)
print(len(Dastur))
for i in Dastur:
      SoftLen.append(len(i))
      print(i)
print(max(SoftLen), min(SoftLen))
for i in Frontend:
      if i in Backend:
            print(i)
      else:
            print(i)
            uniqal.append(i)
print(uniqal)
Mobile = []
