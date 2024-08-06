# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
# TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

# Name: Mayank Karnati

# compilation flags
gcc_Sopt = -lc -m64 -c -g

all:readrec lab7.zip

lab7.zip: compute.s readlines.s readrec.s printlines.s Makefile lab7Readme
	zip lab7.zip compute.s readlines.s readrec.s printlines.s Makefile lab7Readme

readrec: compute.o readlines.o readrec.o printlines.o
	gcc compute.o readlines.o readrec.o printlines.o -o readrec

compute.o: compute.s
	gcc $(gcc_Sopt) compute.s

readlines.o: readlines.s
	gcc $(gcc_Sopt) readlines.s

readrec.o: readrec.s
	gcc $(gcc_Sopt) readrec.s

printlines.o: printlines.s
	gcc $(gcc_Sopt) printlines.s

clean:
	rm -rf *.o readrec lab7.zip


