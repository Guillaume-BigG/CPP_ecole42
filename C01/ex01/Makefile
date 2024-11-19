# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	moarbrainz

CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

# INCLUDES #
INCLUDES	:=	Zombie.hpp \
INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[MoarBrainz] Building MoarBrainz: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[MoarBrainz ] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[MoarBrainz] Building: $< \n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[MoarBrainz] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[MoarBrainz] Cleaned objects!\n"

fclean: clean
	@printf "[MoarBrainz] Deleting MoarBrainz executable\n"
	@$(RM) $(NAME)
	@printf "[MoarBrainz] Done \n"

re: fclean all

.PHONY: all clean fclean re
