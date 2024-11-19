## PROGRAM

NAME		:=	megaphone
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

# INCLUDES #
INCLUDES	:=	$(strip $(INC))
INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	megaphone.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[megaphone ] Building megaphone: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[megaphone] Done! \n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "$(NEW)[megaphone ] $(U_GREEN)Building: $<\n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[megaphone ] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[megaphone ] Cleaned objects! \n"

fclean: clean
	@printf "[megaphone ] Deleting megaphone executable\n"
	@$(RM) $(NAME)
	@printf "[megaphone ] Done\n\n"

re: fclean all

.PHONY: all clean fclean re