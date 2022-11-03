keys={
        "y":0b10000000,# a
        "u":0b01000000,# r
        "i":0b00100000,# t
        "o":0b00010000,# s
        "h":0b00001000,# e
        "j":0b00000100,# y
        "k":0b00000010,# i
        "l":0b00000001,# 0

        }



actual=[]
keycodes=[]
while True:
    combo=input("combo: ")
    keycode=input("keycode: ")
    if combo=="":
        break

    temp=0
    for i in combo:
        temp |= keys[i.lower()]
    actual.append(temp)
    keycodes.append(keycode)
print("#define AMTOFCOMBO "+str(len(actual)))
print("char combos[AMTOFCOMBO]={"+", ".join([bin(x)for x in actual])+"}")
print("char keycode[AMTOFCOMBO]={"+", ".join(['\''+x+'\'' for x in keycodes])+"}")
