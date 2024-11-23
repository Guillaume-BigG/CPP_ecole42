# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	bureaucrat

CC			:=	c++
CFLAGS		:=	-g3 -Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

# INCLUDES #
INCLUDES	:=	Bureaucrat.hpp \


INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				Bureaucrat.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[bureaucrat] Building bureaucrat: $< \n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[bureaucrat] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[bureaucrat] Building: $<\n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[bureaucrat] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[bureaucrat] Cleaned objects!\n"

fclean: clean
	@printf "[bureaucrat] Deleting bureaucrat executable\n"
	@$(RM) $(NAME)
	@printf "[bureaucrat] Done!\n"

re: fclean all

.PHONY: all clean fclean re