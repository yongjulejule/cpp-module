CC						= c++

ifdef DEBUG
	CXXFLAGS = --std=c++98 -g3 -fsanitize=address
else ifdef LEAKS
	CXXFLAGS = --std=c++98 -g 
else 
	CXXFLAGS	= --std=c++98 -Wall -Wextra -Werror 
endif

NAME			=  megaphone

INC_DIR		= ./include/

SRCS_DIR	= ./src/

SRCS			= $(addprefix $(SRCS_DIR), \
							megaphone.cpp \
				)


OBJS			= ${SRCS:%.cpp=%.o}

OBJ_FILES	= $(OBJS)

COMPILE_MSG = @echo $(CUT)$(UP)$(BOLD)$(L_PUPLE) 📣 ${NAME} Compiled 🥳$(RESET)

######################### Color #########################
GREEN="\033[32m"
L_GREEN="\033[1;32m"
YELLOW="\033[33m"
RED="\033[31m"
L_RED="\033[1;31m"
BLUE="\033[34m"
L_BLUE="\033[1;34m"
MUTED="\033[130m"
RESET="\033[0m"
BOLD="\033[1m"
L_PUPLE="\033[1;35m"
UP = "\033[A"
DOWN = "\033[B"
RIGHT = "\033[C"
LEFT = "\033[D"
CUT = "\033[K"
SAVE = "\033[s"
RESTORE = "\033[u"

########################## Rule ##########################

.PHONY		:	all
all				:	 $(OBJS) $(NAME)

$(NAME)		: 	$(OBJS)
							@$(CC) $(CXXFLAGS) $(OBJS)  -I$(INC_DIR) -o $@ 
							@printf $(CUT)$(DOWN)$(CUT)
							$(COMPILE_MSG)


%.o			: 	%.cpp
				@$(CC) $(CXXFLAGS)  -c $< -o $@
				@echo $(CUT)$(BOLD)$(L_GREEN) Compiling with $(CFLAGS)...$(RESET)
				@echo $(CUT)$(GREEN) [$(notdir $^)] to [$(notdir $@)] $(RESET)
				@printf $(UP)$(UP)

.PHONY			:	clean
clean			:
					@rm -f $(OBJS)
					@echo $(L_RED) Remove🧹 OBJ files in $(NAME) 👋 $(RESET)


.PHONY			:	fclean
fclean			:	clean
					@rm -f $(NAME)
					@echo $(RED) Remove🧹 $(NAME) 📣 $(RESET)

.PHONY			:	re
re				:	fclean all

.PHONY			:	debug
debug			: 
					@make DEBUG=1
					@echo $(CUT)$(RED)$(BOLD) It\'s DEBUG TIME🤪$(RESET)

.PHONY			:	leaks
leaks			:
					@make LEAKS=1
					@echo $(CUT)$(RED)$(BOLD) Is there Leaks?🚰$(RESET)
