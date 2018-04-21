# Shell commands
CP		= cp
CPP		= g++
MKDIR	= mkdir -p
RM		= rm -f

# Directories and names
ROOT_DIR	= ..
TARGET 		= $(ROOT_DIR)/obj/beverage
SRC_DIRS 	= $(ROOT_DIR)/src

# Sources and artefacts
SRCS		= $(wildcard $(SRC_DIRS)/*.cpp)
OBJS		= $(addprefix $(ROOT_DIR)/obj/,$(addsuffix .o,$(basename $(SRCS))))

# Flags
INCFLAGS	= -I../../inc
CPPFLAGS	= -std=c++11 -g -Wall -Wextra -pedantic $(INCFLAGS)
LDFLAGS		=
LDLIBS		=

# Recipies
$(TARGET): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $@

.PHONY: clean all install create_obj_dir
clean:
	$(RM) $(TARGET) $(OBJS)

all: create_obj_dir $(TARGET)

create_obj_dir:
	$(MKDIR) ../obj
	
check:
	@echo $(SRCS)
