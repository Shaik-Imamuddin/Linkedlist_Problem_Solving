class Node:
    def __init__(self,val):
        self.data = val
        self.addr = None
    
class Linkedlist:
    def __init__(self):
        self.head = None
    
    def insert(self,val):
        newNode = Node(val)
        if self.head is None:
            self.head = newNode
            return
        else:
            temp = self.head
            while temp.addr is not None:
                temp = temp.addr
            temp.addr = newNode
    
    def search(self,target):
        if self.head is None:
            print("Linkedlist is Empty")
            return
        temp = self.head
        while temp!=None:
            if(temp.data==target):
                print("Found")
                return
            temp=temp.addr
        print("Not Found")

l=Linkedlist()
val=0

while True:
    val=int(input())
    if val==-1:
        break
    l.insert(val)

target=int(input())
l.search(target)