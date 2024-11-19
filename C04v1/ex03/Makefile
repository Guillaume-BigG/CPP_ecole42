# **************************************************************************** #
#                                    PROGRAM                                   #
# **************************************************************************** #

NAME		:=	interface

CC			:=	c++
CFLAGS		:=	-g3 -Wall -Wextra -Werror -std=c++98
DEP_FLAGS	:=	-MMD -MP
RM			:=	rm -rf

INCLD_DIR 	:=	includes
OBJS_DIR 	:=	objs

# INCLUDES #
INCLUDES	:=	AMateria.hpp \
				Character.hpp \
				Cure.hpp \
				Ice.hpp \
				Gaz.hpp \
				Elec.hpp \
				Water.hpp \
				IMateriaSource.hpp \
				ICharacter.hpp \
				MateriaSource.hpp \

INCLD_FLAG	:=	$(addprefix -I , $(INCLUDES))

# SOURCES #
SRC			:=	main.cpp \
				AMateria.cpp \
				Character.cpp \
				Cure.cpp \
				Ice.cpp \
				Gaz.cpp \
				Elec.cpp \
				Water.cpp \
				MateriaSource.cpp \

OBJS 		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRC))
DEPS		:=	$(patsubst %.cpp,$(OBJS_DIR)/%.d,$(SRC))


# **************************************************************************** #
#                                     RULES                                    #
# **************************************************************************** #

all:	$(NAME)

$(NAME): $(OBJS)
	@printf "[interface] Building interface: $< \n"
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) $(OBJS) -o $(NAME)
	@printf "[interface] Done!\n"

-include $(DEPS)
$(OBJS_DIR)/%.o: ./%.cpp
	@printf "[interface] Building: $<\n"
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(DEP_FLAGS) $(CFLAGS) $(INCLD_FLAG) -c $< -o $@

clean:
	@printf "[interface] Cleaning objects...\n"
	@$(RM) $(OBJS_DIR)
	@printf "[interface] Cleaned objects!\n"

fclean: clean
	@printf "[interface] Deleting interface executable\n"
	@$(RM) $(NAME)
	@printf "[interface] Done\n"

re: fclean all

.PHONY: all clean fclean re