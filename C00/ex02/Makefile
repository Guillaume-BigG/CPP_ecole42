# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	bestjob

CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs


# INCLUDES #
INCLUDES	:=	Account.hpp \
INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	tests.cpp \
				Account.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[bestjob ] Building bestjob: $<\n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[bestjob] Done! \n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "$(NEW)[bestjob ] $(U_GREEN)Building: $<\n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[bestjob ] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[bestjob ] Cleaned objects! \n"

fclean: clean
	@printf "[bestjob ] Deleting bestjob executable \n"
	@$(RM) $(NAME)
	@printf "[bestjob ] Done\n\n"


re: fclean all

.PHONY: all clean fclean re