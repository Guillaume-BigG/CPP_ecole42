# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	array

CC			:=	c++
CFLAGS		:=	-g3 -Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf


INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

# INCLUDES #
INCLUDES	:=	Array.hpp \

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
	@printf "[array] Building array: \n"
	@$(CC) $(OBJS) -o $(NAME)
	@printf "[array] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[array] Building: $< \n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[array] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[array] Cleaned objects! \n"

fclean: clean
	@printf "[array] Deleting array executable\n"
	@$(RM) $(NAME)
	@printf "[array] Done\n"

re: fclean all

.PHONY: all clean fclean re