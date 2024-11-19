# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	harl2.0

# **************************************************************************** #
#                                     UTILS                                    #
# **************************************************************************** #

CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf


INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs


# INCLUDES #
INCLUDES	:=	Harl.hpp \

INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				Harl.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[Harl2.0] Building Harl2.0: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[Harl2.0 ] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[Harl2.0] Building: $< \n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[Harl2.0] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[Harl2.0] Cleaned objects!\n"

fclean: clean
	@printf "[Harl2.0] Deleting Harl2.0 executable\n"
	@$(RM) $(NAME)
	@printf "[Harl2.0] Done \n"

re: fclean all

.PHONY: all clean fclean re