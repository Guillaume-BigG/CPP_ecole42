# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	BraiiiiiiinnnzzzZ

CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

INCLUDES	:=	Zombie.hpp \
INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

SRC			:=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[BraiiiiiiinnnzzzZ] Building BraiiiiiiinnnzzzZ: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[BraiiiiiiinnnzzzZ ] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[BraiiiiiiinnnzzzZ] Building: $< \n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[BraiiiiiiinnnzzzZ] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[BraiiiiiiinnnzzzZ] Cleaned objects!\n"

fclean: clean
	@printf "[BraiiiiiiinnnzzzZ] Deleting BraiiiiiiinnnzzzZ executable\n"
	@$(RM) $(NAME)
	@printf "[BraiiiiiiinnnzzzZ] Done \n"

re: fclean all

.PHONY: all clean fclean re