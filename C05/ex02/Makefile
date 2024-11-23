# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	executing

CC			:=	c++
CFLAGS		:=	-g3 -Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

# INCLUDES #
INCLUDES	:=	Bureaucrat.hpp \
				AForm.hpp \
				ShrubberyCreationForm.hpp \
				RobotomyRequestForm.hpp \
				PresidentialPardonForm.hpp \

INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				Bureaucrat.cpp \
				AForm.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[executing] Building executing: $< \n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[executing] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[executing] Building: $<\n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[executing] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[executing] Cleaned objects!\n"

fclean: clean
	@printf "[executing] Deleting executing executable\n"
	@$(RM) $(NAME)
	@printf "[executing] Done!\n"

re: fclean all

.PHONY: all clean fclean re