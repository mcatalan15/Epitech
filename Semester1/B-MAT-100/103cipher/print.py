def print_key (key, dimension):
    print("Key matrix:")
    b = ""
    for i in range(dimension):
        for j in range(dimension):
            b += str(key[i][j]) + '\t'
        print(b)
        b = ""

def print_sentence(sentence):
    print('\n')
    print("Encrypted message:")
    for i in range(len(sentence)):
        for j in range(len(sentence[i])):
            print(sentence[i][j], end=' ')
    print('\n', end='')
