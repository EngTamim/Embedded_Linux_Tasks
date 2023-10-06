# Task 1
# Write python code to generate Init function of GPIO for AVR

def Init_PORT_DIR(Port):
    DDR = '0b'
    InputStatments = ['in' , 'IN']
    OutputStatments = ['out' , 'OUT']
    for x in reversed(range(8)):
        bitMode = input (f"Please Enter bit{x} mode of Port{Port}: ")
        if bitMode in InputStatments:
            DDR = DDR + '0'
        elif bitMode in OutputStatments:
            DDR = DDR + '1'
        else:
            print("Error!, Please Enter 'in' or 'out' only ")
    return DDR

PortLetter = input ("Please Enter The letter of Port: ")
print(f"DDR{PortLetter} = {Init_PORT_DIR(PortLetter)}")