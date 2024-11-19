# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	ClapTrap

CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf


INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs


# INCLUDES #
INCLUDES	:=	ClapTrap.hpp \

INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				ClapTrap.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[ClapTrap] Building ClapTrap: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[ClapTrap] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[ClapTrap] Building: $< \n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[ClapTrap] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[ClapTrap] Cleaned objects!\n"

fclean: clean
	@printf "[ClapTrap] Deleting ClapTrap executable\n"
	@$(RM) $(NAME)
	@printf "[ClapTrap] Done\n"

re: fclean all

.PHONY: all clean fclean re