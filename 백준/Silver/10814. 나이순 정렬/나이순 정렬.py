class Person:
    def __init__(self, age, name, date):
        self.age = age
        self.name = name
        self.date = date

n = int(input())
infor = []
for i in range(n):
    age, name = input().split()
    infor.append(Person(int(age), name, int(i + 1)))
    
infor.sort(key = lambda x : (x.age, x.date))

for i in infor:
    print('{} {}'.format(i.age, i.name))