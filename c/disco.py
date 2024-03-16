# a = 0
#
# for i in range(1,2025):
#     if(i%4 ==0):
#         a += 1
#
# print(a)

# ================================
# a = 5
# k > 3


# a = "kasddklalksdadksgalktaet"
#
# if a.count('a')==5 and a.count('k')>3:
#     print("valid")
# else:
#     print("invalid")

# ===========================================

# ***************** ATM ************

# pin = 6969
# bal = 6000

def readpin():
    file =open("pin.txt","r")
    p=int(file.read())
    file.close()
    return p   



def readbal():
    file=open("balance.txt","r")
    p=int(file.read())
    file.close()
    return p

def writepin(p):
    file=open("pin.txt","w")
    file.write(f"{p}")
    file.close()


def writebal(p):
    file=open("balance.txt","a")
    file.write(f"{p}")
    file.close()


print("press 1 : withdraw")
print("press 2 : Check balance")
print("press 3 : Change pin ")
print("press 4 : Deposit")
choice = int(input("enter your choice = "))

if(choice==1):
    pin=readpin()
    upin = int(input("enter a pin = "))
    if(pin == upin):
        amount = int(input("Enter a amount = "))
        bal=readbal()
        if(amount<=bal):
            print("transaction done")
            bal = bal - amount
            print("Current balance = ",bal)
        else:
            print("low balance")
    else:
        print("wrong pin")

elif(choice==2):
    upin = int(input("enter a pin = "))
    pin=readpin()
    if(pin==upin):
        bal=readbal()
        print("Current balance = ", bal)
    else:
        print("wrong pin")

elif(choice ==3 ):
    upin = int(input("enter a pin = "))
    pin=readpin()
    if(pin==upin):
        npin = int(input("enter a new pin = "))
        cpin = int(input("Confirm your pin = "))
        writepin(npin)
        if(npin==cpin):
            print("pin changed")
        else:
            print("pin doesn't match")
    else:
        print("Wrong pin ")

elif(choice==4):
    upin = int(input("enter a pin = "))
    pin=readpin()
    if(pin==upin):
        amount = int(input("enter a amount = "))
        bal=readbal()
        bal = bal + amount
        print("current balance = ",bal)
    else:
        print("Wrong pin")
else:
    print(f" ye ye vedya {choice}th choice nhi hai ")

# ==========================================