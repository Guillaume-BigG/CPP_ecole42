# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	whatever

CC			:=	c++
CFLAGS		:=	-g3 -Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf


INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

# INCLUDES #
INCLUDES	:=	whatever.hpp \

INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[whatever] Building whatever: \n"
	@$(CC) $(OBJS) -o $(NAME)
	@printf "[whatever] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[whatever] Building: $< \n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[whatever] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[whatever] Cleaned objects! \n"

fclean: clean
	@printf "[whatever] Deleting whatever executable\n"
	@$(RM) $(NAME)
	@printf "[whatever] Done\n"

re: fclean all

.PHONY: all clean fclean re