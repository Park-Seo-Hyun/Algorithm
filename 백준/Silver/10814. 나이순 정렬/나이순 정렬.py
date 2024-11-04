class Person:
    def __init__(self, age, name, date):
        self.name = name
        self.age = age
        self.date = date
        
n = int(input())
people = []

for i in range(n):
    age, name = input().split()
    people.append(Person(int(age), name, int(i + 1)))
    
people.sort(key = lambda  x: (x.age, x.date))

for i in people:
    print('{} {}'.format(i.age, i.name))