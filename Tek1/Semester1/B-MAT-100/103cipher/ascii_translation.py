
import sys

def char_to_ascii(ascii_translation_sentence):
    for character in sys.argv[1]:
        ascii_translation_sentence.append(ord(character))
    return(ascii_translation_sentence)

def char_to_ascii_key(ascii_translation_key):
    for character in sys.argv[2]:
        ascii_translation_key.append(ord(character))
    return(ascii_translation_key)

def ascii_to_char(char_translation):
    print("decryption")