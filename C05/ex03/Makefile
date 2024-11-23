# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	intern

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
				Intern.hpp \

INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				Bureaucrat.cpp \
				AForm.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				Intern.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))



# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[intern] Building intern: $< \n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[intern] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[intern] Building: $<\n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[intern] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[intern] Cleaned objects!\n"

fclean: clean
	@printf "[intern] Deleting intern executable\n"
	@$(RM) $(NAME)
	@printf "[intern] Done!\n"

re: fclean all

.PHONY: all clean fclean re