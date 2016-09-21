CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))
# LD_FLAGS := ...
CC_FLAGS := -MMD -g -Wall -Wextra -pthread -std=c++11

basic-db: $(OBJ_FILES)
	g++ -o $@ $^
  #  g++ $(LD_FLAGS) -o $@ $^

obj/%.o: src/%.cpp
	g++ $(CC_FLAGS) -c -o $@ $<

-include $(OBJFILES:.o=.d)
