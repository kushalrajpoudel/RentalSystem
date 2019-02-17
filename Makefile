# MakeFile Creation Test
CXXFLAGS += --std=c++17

default : main
all:main

debug : CXXFLAGS += -g
debug : main

rebuild : clean main

main : main.o controller.o vehicle.o Body_style.o *.h
	${CXX} ${CXXFLAGS} -o main main.o controller.o vehicle.o Body_style.o
main.o: main.cpp *.h
	${CXX} ${CXXFLAGS} -c main.cpp
controller.o : controller.cpp *.h
	${CXX} ${CXXFLAGS} -c controller.cpp
vehicle.o: vehicle.cpp *.h
	${CXX} ${CXXFLAGS} -c vehicle.cpp
Body_style.o: Body_style.cpp
	${CXX} ${CXXFLAGS} -c Body_style.cpp

clean:
	rm -f *.o *.gch *~ main
