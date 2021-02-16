import random as r
f= open("directed.txt","a+")

#f.write("oops")
#print(f.read())
line = f.readline()
l = line.split()
#print l
f.close() 

#We know that the input directed.txt contains #s from 1-100 inclusive
f = open("text.txt", "a+")
for i in range(9900):
   x = r.randrange(-1000,100000)
   while x >= 1 and x <= 100:
      x = r.randrange(-1000,100001) # 100001 since randrange does not use the stop number
   f.write(str(x)+ " ")
for num in l:
   f.write(num + " ")
lin = f.readline()
lol = lin.split()
no = 0
for san in lol:
   if san == '1':
      no+=1
      if no >= 2:
         print "whoops you messed up bro"
         break
#print r.randrange(-1000,100000)
#print r.randrange(-1000,-100)
f.close()
