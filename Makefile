NAME        := libft.a

SRC_DIR     := SRC
SRCS        := \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isasci.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_strlen.c \

SRCS        := $(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR   := .build
OBJS        := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        := $(OBJS: .o=.d)

CC          := cc
CFLAGS      := -Wall -Wextra -Werror
CPPFLAGS    := -MMD -MP -I include
AR          := ar
ARFLAGS     := -r -c -s

RM          := rm -f
MAKEFLAGS   += --no-print-directory
DIR_UP      = mkdir -p $(@D)

all: $(NAME)

$(NAME): $(OBJS)
    $(AR) $(ARFLAGS) $(NAME) $(OBJS)
    $(info CREATED $(NAME))

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
    $(DIR_UP)
    $(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
    $(info CREATED $@)

-include $(DEPS)

clean:
    $(RM) $(OBJS) $(DEPS)

fclean: clean
    $(RM) $(NAME)

re:
    $(MAKE) fclean
    $(MAKE) all