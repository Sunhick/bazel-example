CC = g++
CCFLAGS = -g -I .
LDFLAGS =

SRCS = $(wildcard history/*.cc)
OBJS = $(SRCS:.cc=.o)

LIB = libhistory.a

.PHONY : all
all : ${LIB}

${LIB} : ${OBJS}
	ar rvs $@ $<
	ranlib $@

%.o : %.cc
	${CC} -c $< ${CCFLAGS} -o $@


.PHONY : clean
clean :
	${RM} -- $(wildcard *~ *.o ${LIB} ${OBJS})
