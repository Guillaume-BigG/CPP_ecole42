# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	hithisisbrain

# **************************************************************************** #
#                                     UTILS                                    #
# **************************************************************************** #

CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

# SOURCES #
SRC			:=	main.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[hithisisbrain] Building hithisisbrain: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[hithisisbrain ] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[hithisisbrain] Building: $< \n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[hithisisbrain] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[hithisisbrain] Cleaned objects!\n"

fclean: clean
	@printf "[hithisisbrain] Deleting hithisisbrain executable\n"
	@$(RM) $(NAME)
	@printf "[hithisisbrain] Done \n"

re: fclean all

.PHONY: all clean fclean re