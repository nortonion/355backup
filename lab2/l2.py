import random as r
f= open("in.txt","a+")

#f.write("oops")
#print(f.read())
line = f.readline()
l = line.split()
#print l
f.close() 

f = open("out1.txt", "a+")
f.write("Word Number \t Word")
i = len(l)
#print i
#print l[0]
for integer in range(i):
   f.write("\n")
   f.write(str(integer+1) + " \t " + l[integer])

#print r.randrange(-1000,100000)
#print r.randrange(-1000,-100)
f.close()
