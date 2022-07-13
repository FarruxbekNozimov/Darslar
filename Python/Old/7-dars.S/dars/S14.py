def index_top(text, belgi):
      a = text[::-1].find(belgi)
      return (len(text)-1)-a

print(index_top("Hello, welcome to my world", 'o'))
