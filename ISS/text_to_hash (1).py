import hashlib

# take input from user
text = input("Enter the text to hash: ")

# define function to generate hash
def generate_hash(algorithm):
    if algorithm == "1":
        hash_object = hashlib.sha1(text.encode())
        print("SHA-1 hash:", hash_object.hexdigest())
    elif algorithm == "2":
        hash_object = hashlib.sha256(text.encode())
        print("SHA-256 hash:", hash_object.hexdigest())
    elif algorithm == "3":
        hash_object = hashlib.md5(text.encode())
        print("MD5 hash:", hash_object.hexdigest())
    else:
        print("Invalid input, please try again")

# take user input for the algorithm choice
algorithm_choice = input("Select the hash algorithm: \n1. SHA-1 \n2. SHA-256 \n3. MD5 \nEnter your choice: ")

# call the function to generate hash
generate_hash(algorithm_choice)
