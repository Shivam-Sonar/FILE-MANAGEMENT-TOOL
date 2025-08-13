# FILE-MANAGEMENT-TOOL
*COMPANY*: CODTECH IT SOLUTIONS
*NAME*: Sonar Shivam Suryanath
*INTERN ID* : CT04DH2913
*DOMAIN*: C++ Programming
*DURATION* : 4 WEEKS
*MENTOR* :Neela Santhosh Kumar


DESCRIPTION-
 The program is designed to run in a loop, allowing the user to continuously perform operations on a chosen file until they decide to exit.It first prompts the user to enter a filename (e.g., data.txt) that will be used for all file operations. This filename is stored in a string variable and passed to various functions throughout the program.
The main part of the program is a menu-driven loop. The user is repeatedly shown a menu with four choices:
Write to file (overwrite)
Append to file
Read file
Exit
The user selects an option by entering a number between 1 and 4. Based on the selection, the corresponding function is called to perform the desired operation.This function is responsible for writing content to the specified file. It uses the ofstream class to open the file in default mode, which overwrites any existing content. The user is prompted to enter multiple lines of text, which are captured using getline(). The loop ends when the user enters a blank line (just presses Enter). The collected input is written to the file line by line.A call to cin.ignore() is made before the input loop to clear any leftover newline characters from the input buffer. This ensures that the first call to getline() doesn't immediately terminate.After writing the data, the file is closed, and a confirmation message is displayed to the user.
This function appends new content to an existing file without removing the previous data. The file is opened using ofstream with the ios::app flag, which stands for "append mode". The user can enter as many lines as they want, and the input stops when a blank line is entered.
Like in the writeToFile() function, cin.ignore() is used to handle any leftover input issues. After the user finishes entering data, the file is closed, and a message is displayed confirming that the content was successfully appended.
The readFile() function is used to read and display the contents of the specified file. It opens the file using ifstream and reads it line by line using getline(). Each line is printed to the console. If the file doesn’t exist or cannot be opened, an error message is shown. The displayed content is wrapped between header and footer lines for better readability.



