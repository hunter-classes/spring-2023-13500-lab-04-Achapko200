main: main.o checkerboard3x3.o lower.o upper.o box.o cross.o trapezoid.o
	g++ -o main main.o checkerboard3x3.o lower.o upper.o box.o cross.o trapezoid.o

main.o: main.cpp checkerboard3x3.h lower.h upper.h box.h cross.h trapezoid.h
	g++ -c main.cpp
checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h
	g++ -c checkerboard3x3.cpp

lower.o: lower.cpp lower.h
	g++ -c lower.cpp

upper.o: upper.cpp upper.h
	g++ -c upper.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

cross.o: cross.cpp cross.h
	g++ -c cross.cpp

trapezoid.o: trapezoid.cpp trapezoid.h
	g++ -c trapezoid.cpp
test: main
	./main
	
clean:
	rm -f main main.o checkerboard3x3.o lower.o upper.o box.o cross.o trapezoid.o