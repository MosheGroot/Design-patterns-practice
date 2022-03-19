NAME		:= proxy

CC			:= g++
CFLAGS		:= -std=c++2a -Wall -Wextra -Werror
DEP_FLAGS	:= -MP -MMD

SRCS_DIRS	:= $(addprefix src, \
							/ \
							/proxyimage \
							/rawimage \
						)


vpath %.cpp	$(SRCS_DIRS)
vpath %.hpp	$(SRCS_DIRS)


SRCS		:=  main.cpp \
						proxyimage/proxyimage.cpp \
						rawimage/rawimage.cpp \



OBJS_DIR	:= .objects
OBJS		:= $(addprefix $(OBJS_DIR)/, \
				$(patsubst %.cpp, %.o, $(SRCS)))

DEPS		:= $(addprefix $(OBJS_DIR)/, \
				$(patsubst %.cpp, %.d, $(SRCS)))


all:
					@echo "$(FMT_BOLD)Creating/updating $(FMT_WHITE_B)'$(NAME)'$(FMT_BOLD):$(FMT_DEF)"
					@$(MAKE) --no-print-directory $(NAME)

$(NAME):			$(OBJS) Makefile
					@echo "$(FMT_BOLD)Linking files...$(FMT_DEF)"
					@$(CC) $(OBJS) $(CFLAGS) -o $@
					@echo "$(FMT_WHITE_B)'$(NAME)'$(FMT_BOLD) has been created/updated.$(FMT_DEF)"

$(OBJS_DIR)/%.o:	%.cpp | $(OBJS_DIR)
					@echo "Assembling $<..."
					@mkdir -p $(dir $@)
					@$(CC) $(CFLAGS) $(DEP_FLAGS) -c $< -o $@

$(OBJS_DIR):
					@mkdir -p $@
					@echo "$(FMT_BOLD)Directory '$(OBJS_DIR)' has been created.$(FMT_DEF)"

clean:
					@rm -rf $(OBJS) $(DEPS) $(OBJS_DIR)
					@echo "$(FMT_WHITE)$(NAME): $(FMT_BOLD)Object files have been cleaned.$(FMT_DEF)"

fclean:				clean
					@rm -rf $(NAME)
					@echo "$(FMT_WHITE)'$(NAME)'$(FMT_BOLD) has been cleaned.$(FMT_DEF)"

re:					fclean all

.PHONY:				all clean fclean re

-include $(DEPS)

FMT_BOLD	:= \033[0;1m
FMT_WHITE_B	:= \033[1;37m
FMT_WHITE	:= \033[37m
FMT_DEF		:= \033[0;39m
