#This is a small program that takes an input string , then uses a form of thieves' cant to secure it.
#This form of Thieves' cant translates vowels to itself and consonants adds an "o" and the repeat itself
#Example Hello = HOHelollolo  and Hi there = HOHi tothoherore


def thievescant(input):
    vowels = ["a","e","i","o","u","y"]
    special = [" ","?","!",",",".","-"]
    translatestr = []
    

    for letter in input:
        if (letter.lower() in vowels) or (letter.lower() in special):
            translatestr.append(letter)
        else:
            translatestr.append(letter + "o" +letter)
        
    print(''.join(translatestr))

def main():
    thievescantmsg = input("Input your message here! ")
    thievescant(thievescantmsg)
    

if __name__=="__main__":
    main()
