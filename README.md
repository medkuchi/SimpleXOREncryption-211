# Simple XOR Encryption

Simple XOR Encryption is changing a value to make it less easily interpretable for mostly security and confidentiality purposes. 

Through researching this topic, I explored:
- Encryption: How plaintext is converted to cipher text using simple XOR encryption.
- Decryption: Converting cipher text to plaintext
- Examples of Encrypting and Decrypting values
- Applications of Simple XOR:
    - Learned that it can be used as a fast way to make values less obvious in low-stake scenarios like making sure a string cannot be read in an executable.
    - Malware authors may use it as a technique to bypass system security tools.
- Why simple XOR Encryption is not secure
    - Easily hackable using methods like brute force, known plaintext, and repeated key use.
- Modern Cryptography uses XOR but differently from Simple XOR Encryption.
    - Some methods include Repeating-Key XOR, ChaCha20, AES.
    - These methods provide stronger encryption compared to Simple XOR Encryption. 


## Running the provided code

The code provided helps you see simple XOR encryption implemented through the code.

- encrypt-decrypt.c : Takes in a message and a key and encrypts it. Prints out the original, encrypted in hex decrypted. 

- process.c : Takes in a message and a key and encrypts it. Shows you the binary of both the input message and the key and the result of the XOR operation in binary, hex, and decimal.

- diff-representations.c : Shows you the different representations (Binary, hex, decimal, ASCII) for every value and the result. 

### To see how it works:
- Optional: Put in your own message and key. 
- Compile the code : gcc encrypt-decrypt.c / gcc process.c / gcc diff-representations.c
- Run the executable: ./a.out
- See the results@


#### Resources

Used ChatGPT to explore this topic.
- Permalink: https://chatgpt.com/share/6aff09dc-0434-83e9-8930-4a24efc99e03
