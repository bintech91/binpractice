condition = True
while condition:
    print ("Please answer a Yes/No question")
    answer = raw_input("Are you hungry: ")
    if answer == "Yes" or answer == "yes" or answer == "y" or answer == "Y":
        print "you are hungry"
        break
    elif answer == "No" or answer == "no" or answer == "n" or answer == "N":
        print "you are not hungry"
        break
