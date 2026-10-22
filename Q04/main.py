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
    
    def countNodes(self):
        if self.head is None:
            print("Linkedlist is Empty")
            return
        count=0
        temp = self.head
        while temp!=None:
            count+=1
            temp=temp.addr
        return count

l=Linkedlist()
val=0

while True:
    val=int(input())
    if val==-1:
        break
    l.insert(val)

print(l.countNodes())