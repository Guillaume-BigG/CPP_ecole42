# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	ScalarConverter

CC			:=	c++
CFLAGS		:=	-g3 -Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs


# INCLUDES #
INCLUDES	:=	ScalarConverter.hpp \

INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				ScalarConverter.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[ScalarConverter] Building ScalarConverter: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[ScalarConverter] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[ScalarC] Building: $<\n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[ScalarConverter] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[ScalarConverter] Cleaned objects!\n"

fclean: clean
	@printf "[ScalarConverter] Deleting ScalarConverter executable\n"
	@$(RM) $(NAME)
	@printf "[ScalarConverter] Done \n"

re: fclean all

.PHONY: all clean fclean re