CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))
# LD_FLAGS := ...
CC_FLAGS := -MMD -g -Wall -Wextra -pthread -std=c++11

test: $(OBJ_FILES)
	g++ -o $@ $^

# main: $(OBJ_FILES)
	# g++ -o $@ $^

obj/%.o: src/%.cpp
	g++ $(CC_FLAGS) -c -o $@ $<

-include $(OBJFILES:.o=.d)
