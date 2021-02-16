import csv #see comment about opening csv files below
csv="input.csv" #see comment about opening csv files below
"""
https://www.w3schools.com/python/python_comments.asp gave me the idea for multi line comments
Q) Please explain how you tested your code and provide any additional file you used.
A) I tested the code by using the input.csv file and running my code based upon that file. See comments in code below if you want more specifics.

Q) We provided a sample input file for you, but if you were not provided such a file, what corner cases would you add? 
A) maybe check for if the csv file exists, if the csv file is empty, etc.
"""
#I used https://stackoverflow.com/questions/25597477/python-calculate-average-for-every-column-in-a-csv-file
#to figure out how to open csv files in Python without using pandas (tho pandas is much more powerful)
#also, figured out how to reach each individual cell from the above link by using nested for loops shown after variables
f = open(csv,"r")#r means read (we dont need to write)
aavg = 0
suma = 0
bavg = 0
sumb =0
cavg = 0
sumc= 0
ro = 0
for r in f:
   for col in r.split(','):
   #we assume there is exactly one a, b, c
   #https://www.w3schools.com/python/ref_string_index.asp we exploit the find function 
   #find function returns -1 if letter is not in a string
   #https://www.w3schools.com/python/python_strings_slicing.asp to figure out how to splice string
      if col.find("a") != -1:
         tempa = col[2:] #index from 2 since the negative sign and/or number starts here
         #print(temp)
         tempa = float(tempa)#change type from str to float to be able to sum
         suma+=tempa
      if col.find("b") != -1:
         tempb = col[2:]
         #print(temp)
         tempb = float(tempb)
         sumb+=tempb
      if col.find("c") != -1:
         tempc = col[2:]
         #print(temp)
         tempc = float(tempc)
         sumc+=tempc
   ro+=1 #count how many rows since we know that a,b,c exists exactly once for each row
#print(suma, sumb,sumc,ro)
#mean(a)=12.3,mean(b)=97.2,mean(c)=-2.34 <-- print in this format by BB
aavg = suma/ro
bavg = sumb/ro
cavg = sumc/ro
print("mean(a)=" + str(aavg) +",mean(b)="+ str(bavg)+ ",mean(c)="+ str(cavg))
f.close()
