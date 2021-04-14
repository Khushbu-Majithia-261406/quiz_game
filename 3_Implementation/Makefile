SRC = unity/unity.c\
src/reg.c\
src/login.c\
src/play_game.c\
test/test_quiz.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = quiz_project.exe

all: $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}

try: $(SRC)
	gcc unity.c reg.c login.c play_game.c test_quiz.c unity_internals.h unity.h quiz_header.h test_quiz.h -o pro.exe
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/reg.c src/login.c src/play_game.c main.c




