all:
	bison -d -v -r all myanalyzer.y
	flex mylexer.l
	gcc -o mycompiler lex.yy.c myanalyzer.tab.c cgen.c -lfl
flex:
	flex mylexer.l
bison:
	bison -d -v -r all myanalyzer.y
clean:
	rm myanalyzer.y
	rm mycompiler
	rm mynanalyzer.tab.c
	rm mynanalyzer.tab.h
	rm mylexer

