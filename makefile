lab2:lab2.o
	g++ -o lab2 lab2.o
lab2.o:lab2.cpp lab2.h
	g++ -c lab2.cpp
clean:
	rm lab2.o
	
