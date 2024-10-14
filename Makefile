objs= API_call.o
executable= Chemycall
includes= -I/usr/include
linking= -lcurl

all: $(executable)

$(executable): $(objs)
	gcc $(objs) -o $(executable) $(includes) $(linking)

API_call.o: API_call.c
	gcc -c API_call.c -o API_call.o

clean:
	rm $(objs)
