# Makefile for Linux/X11-based Environment

CC =	gcc

COBJ =	./main.o \
	./calc.o \
	./calcWeight.o \
	./digitalMap.o \
	./draw.o \
	./geom.o \
	./index.o \
	./jstring.o \
	./mapData.o \
	./mapitem.o \
	./move.o \
	./readdata.o \
	./rgb.o \
	./showGuide.o \
	./sub.o \
	./toc.o \
	./joglIntel.o

INC =	./calc.h \
	./calcWeight.h \
	./dataentry.h \
	./digitalMap.h \
	./draw.h \
	./geom.h \
	./index.h \
	./jogl.h \
	./jstring.h \
	./main.h \
	./mapData.h \
	./mapitem.h \
	./move.h \
	./rgb.h \
	./showGuide.h \
	./sub.h \
	./toc.h \
	./winpos.h

all: $(COBJ)
	$(CC) -g -o wing $(COBJ) -lglut -lGLU -lGL -lXmu -lX11 -lm

$(COBJ): $(INC)
	$(CC) -c -g $@ -DLINUX

.C.o:
	$(CC) -c -g $< -DLINUX

