# SharedLetters
 
SharedLetters that takes in three strings (the first by reference, the second by copy, and the last by a pointer) and returns a string. The function should compare the letters in the string by position and for each position report the number of pairs of strings that share a letter, separated by a comma. Note that this function shouldn’t change any of its arguments, so all the parameters should be const.
Additionally, include a main function that reads in three words from standard input and prints the result of calling SharedLetters on those three words.

Example input:
resting
meeting
rectangle


Expected output:
1,3,0,3,1,3,3,0,0,


Further explanation: The first value in the result is 1, because “resting” and “rectangle” share a letter (‘r’). The next value is 3, because all three possible pairs share the letter (‘e’) at that position (resting-meeting, meeting-rectangle, and resting-retangle). The next value is a 0, because no pairs match at the third position.
Please note that the words may not be the same length, so be causeful not to index beyond the end and use the .at() method and not [] to index.
