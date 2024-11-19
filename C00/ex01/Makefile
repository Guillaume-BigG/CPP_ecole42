
NAME		:=	yellowpage

CC			:=	c++
CFLAGS		:=	-g3 -Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs


# INCLUDES #
INCLUDES	:=	PhoneBook.hpp \
				Contact.hpp \

INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				PhoneBook.cpp \
				Contact.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[YellowPage ] Building YellowPage: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[YellowPage] Done! \n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "$(NEW)[YellowPage ] $(U_GREEN)Building: $<\n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[YellowPage ] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[YellowPage ] Cleaned objects! \n"

fclean: clean
	@printf "[YellowPage ] Deleting YellowPage executable\n"
	@$(RM) $(NAME)
	@printf "[YellowPage ] Done\n\n"


re: fclean all

.PHONY: all clean fclean re