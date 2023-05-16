def caesar_cipher_encrypt(text, size):
    encrypted_text = ''
    for i in text:
        encrypted_text += chr((ord(i) + size))
    print(f'Encrypted text = {encrypted_text}')
    
def caesar_cipher_decrypt(encrypted_text, size):
    decrypted_text = ''
    for i in encrypted_text:
        decrypted_text += chr((ord(i) - size))
    print(f'Decrypted text = {decrypted_text}')


# message = input("Enter the message to be encrypted: ")
message = 'ATTACKATONCE'
size = 4

while True:
    print('1. Caesar Cipher')
    print('2. Substitution Cipher')
    print('3. Row Column transposition')
    print('4. Exit')
    choice = int(input('which encryption do you want to perform? - '))
    
    if choice == 1:
        pass
    elif choice == 2:
        pass
    elif choice == 3:
        pass
    elif choice == 4:
        break
    else:
        print('Invalid choice')
# for i in message:
#     if i.isupper():
#         encrypted_text += chr(ord(i) + size)
#     else:
#         encrypted_text += chr(ord(i) + size)

    
