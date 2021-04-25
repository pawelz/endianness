demo: demo.c endianness.h
	$(CC) -o $@ $<

clean:
	rm demo
