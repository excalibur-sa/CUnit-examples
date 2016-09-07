INC=-I/home/shena/opensrc_install_directory/include/

LIB=-L/home/shena/opensrc_install_directory/lib/

CFLAGS=-g

LDLIBS=`pkg-config --cflags --libs cunit`

SOURCE_FILE=func.c test_func.c run_test.c

TARGET=test


all: 
#	gcc $(SOURCE_FILE) -o $(TARGET) $(INC) $(LIB) -lcunit
	gcc $(SOURCE_FILE) -o $(TARGET) $(CFLAGS) $(LDLIBS)  

clean:
	rm -rf *.o test