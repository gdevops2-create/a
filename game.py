from abc import ABC, abstractmethod

class character(ABC):
    def __init__(self,health, mana):
        self.health=health
        self.mana=mana

    @abstractmethod
    def attack(self):
        pass

    @abstractmethod
    def defend(self):
        pass

class warrior(character):
    def display(self):
        print("warrior ->",self.health,self.mana)
    
    def attack(self):
        self.health -= 10
        print("warrior attack")

    def defend(self):
        print("warrior defend")
    
class mage(character):
    def display(self):
        print("mage ->",self.health,self.mana)

    def attack(self):
        self.health -= 10
        print("mage attack")

    def defend(self):
        print("mage defend")

class rogue(character):
    def display(self):
        print("rogue ->",self.health,self.mana)

    def attack(self):
        self.health -= 10
        print("rogue attack")

    def defend(self):
        print("rogue defend")


w=warrior(120,60)
r=rogue(60,100)
m=mage(70,60)

for i in[w,r,m]:
    
    i.attack()
    i.defend()


for i in[w,r,m]:
    
    i.display()