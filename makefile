a.out: main.cpp path.cpp
	g++ -g -o test main.cpp

clean:
	rm test