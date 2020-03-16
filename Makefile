source = datahw4
output = datahw4

CC = g++
CFLAGS = -Wall -O2



$(output) : $(source).o
	$(CC) $< -o $(output)

$(source).o : $(source).cpp
	$(CC) $(CFLAGS) -c $<

.PHONY : clean
clean :
	rm -f $(output) $(source).o




